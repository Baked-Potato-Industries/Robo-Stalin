#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/playVideo.h"
#include "../include/setup.h"

int main(int argc, char** argv)
{
    for (int i = 0; i < argc; i++) {
        if (strcmp(argv[i], "-?") == 0) {
            playVideo("easteregg/virus.mp4");
            return 0;
		}
        if (strcmp(argv[i], "-h") == 0) {
            printf("i dont know either man\n");
            return 0;
		}
    }

    printMarquee();
    introText();

    return 0;
}
