#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <curl/curl.h>

struct memory {
	char* res;
	size_t size;
};

static size_t callback(char* data, size_t size, size_t nmemb, void* clientp) 
{
	size_t realsize = nmemb;
	struct memory* mem = (struct memory *) clientp;

	char *ptr = realloc(mem->res, mem->size + realsize + 1);
	if (ptr == NULL) 
		return 0;

	mem->res = ptr;
	memcpy(&(mem->res[mem->size]), data, realsize);
	mem->size += realsize;
	mem->res[mem->size] = 0;

	return realsize;
}

char* get(char* link) 
{
	CURL *curl = curl_easy_init();
	CURLcode res;

	struct memory chunk = {0};

	curl_global_init(CURL_GLOBAL_DEFAULT);
	if(curl) {
		curl_easy_setopt(curl, CURLOPT_URL, link);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
		res = curl_easy_perform(curl);

    	if(res != CURLE_OK)
     		 fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));

    	curl_easy_cleanup(curl);
  	}

 	curl_global_cleanup();
   	return chunk.res;

}

int main (void) {
	char* ans = get("https://www.postman-echo.com/status/200");
	printf("%s\n", ans);
	return 0;
}
