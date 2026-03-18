#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res;

  /* Initialize the curl session */
  curl_global_init(CURL_GLOBAL_DEFAULT);
  curl = curl_easy_init();
  if(curl) {
    /* Set the URL to fetch */
    curl_easy_setopt(curl, CURLOPT_URL, "https://google.com");

    /* Perform the request, res will get the return code */
    res = curl_easy_perform(curl);

    /* Check for errors */
    if(res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));

    /* Clean up the easy handle */
    curl_easy_cleanup(curl);
  }

  /* Clean up the global libcurl environment */
  curl_global_cleanup();
  return 0;
}

