#ifndef CLIENT_H
#define CLIENT_H

struct memory{
	char* res;
	size_t size;
};

char* getreq(char* link);
static size_t callback(char* data, size_t size, size_t nmemb, void* clientp);
int get (char* link);

#endif
