#include "../include/playVideo.h"

void playVideo(const char* videoPath)
{
    // note: this path is relative to the location of the EXE, not the src file
    // so make sure this path is whatever the final path is relative to the exe
    // a better idea would be to make it absolute but there's no installer for this thing so whatever
    char command[128];
    #ifdef _WIN32
        sprintf(command, "start \"\" \"%s\"", videoPath);
    #elif __APPLE__
        sprintf(command, "open \"%s\"", videoPath);
    #elif __linux__
        sprintf(command, "xdg-open \"%s\"", videoPath);
    #endif

    system(command);
    printf("lmao\n");
}
