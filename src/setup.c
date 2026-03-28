#include "../include/setup.h"

void clear() 
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void printMarquee()
{
    clear();
    printf("==)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(==\n\n");

    printf("      _,=======  ,=====,  =======,   ,=====,       ,=====  =======  ,=====,   //      =======  ======  ====\n");
    printf("     //     //  //    //  //   ,//  //    //      //         //    //    //  //         //     // ||   //\n");
    printf("     `=======  //    //  //====^   //    // ##### `===,     //    //====//  //         //     //  ||  //\n");
    printf("   ,/^`   //  //    //  //    //  //    //           //    //    //`  `//  //,        //     //   || //\n");
    printf("  //     //   `=====`  ======^    ^=====^       =====^    //    //    //  ^======  =======  ==== ======\n\n");

    printf("==)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(====)>=-=<(==\n\n");

    printf("In the early 1950s, Joseph Stalin was approaching his deathbed, and he knew it. Leading Soviet scientists of the time\n");
    printf("were commanded to keep Stalin alive by any means necessary, and they took it literally. They developed a mechanism to\n");
    printf("store Stalin's conciousness onto magnetic tape. After Stalin's death, the copy was forgotten and left to rot for decades...\n\n");

    printf("Until one fateful day, the copy was found in modern-day Kazakhstan nearby the Baikonur Cosmodrome. Soon, the\n");
    printf("Russian military got their hands on the tape. With modern technology, they built a robotic clone of Stalin and loaded\n");
    printf("his mind onto it. Stalin, notorious for his mistrust in others, used his newfound superhuman power to eliminate all of\n");
    printf("his revivers. And so, Robo-Stalin was unleashed unto the world. After studying the world, he was sickened by what he saw,\n");
    printf("and so decided to resolve it how he believed would be best: taking out the CIA.\n\n"); // oh right i forgot this was about the cia. damn you soldier tf2
}

void introText()
{	
	char* userInput;

	for(;;)
	{
	    printf("Would you like to save... the world?????? (y/n)\n");
	    // scanf("%m[^\n]", userInput);
		scanf("%s", userInput);
		if(userInput[0] != '\n') { break; }
	    // clear();
	}
	
	// i would use a switch statement here but like i need enums or whatever soooo if elses it is
	// also these messages (and code) more temporary than my appreciation of gary after he doesn't call me gross for 3 seconds
	if(strcmp(userInput, "y") == 0) {
		printf("Thank you for your service...");
	} else if (strcmp(userInput, "yes") == 0) {
		printf("Why, but still, thank you for your service...");
	} else {
		printf("And so, the world shall end.");
	}
	
	// free(userInput); // this isnt even a malloc anymore lmao
}

