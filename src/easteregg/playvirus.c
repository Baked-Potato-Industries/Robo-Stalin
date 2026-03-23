#include <stdlib.h>
#include <stdio.h>

int main()
{
    // note: this path is relative to the location of the EXE, not the src file
    // point is make sure this path is whatever the final path is relative to the exe
    // a better idea would be to make it absolute but there's no installer for this thing so whatever
    const char *virusfilepath = "easteregg/virus.mp4";

    char command[128];
    #ifdef _WIN32
        sprintf(command, "start \"\" \"%s\"", virusfilepath);
    #elif __APPLE__
        sprintf(command, "open \"%s\"", virusfilepath);
    #elif __linux__
        sprintf(command, "xdg-open \"%s\"", virusfilepath);
    #endif

    system(command);
    printf("lmao\n");
    return 0;
}