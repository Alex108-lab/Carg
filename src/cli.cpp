#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>

#include "cli.h"

using namespace std;

// Function prototype
void version();
void help();
void usage();

void cli(int argc, char **argv)
{

    for (int i = 0; i < argc; ++i) {
    
        if (!(strcmp("-V", argv[i]) && strcmp("--version", argv[i]))) {
            version();
        }

        if (!(strcmp("-h", argv[i]) && strcmp("--help", argv[i]))) {
            help();
        }
    }
}

void help()
{
    printf("\t<======================================>\n");
    printf("\t Simple Command Line Interface Program\n");
    printf("\t Program for mathematical calcs\n");
    printf("\t Creator: Alexander Monterrosa\n");
    printf("\t email <amonterrosa111@gmail.com>\n");
    printf("\t Version: 0.1, SCLIPLib 0.01\n");
    printf("\t<======================================>\n");
    printf("\n\tUsage: [-h][-V]\n");
    printf("\n\tName      Command         Description\n");
    printf("\tHelp      [-h][--help]    Print this help and exit\n");
    printf("\tVersion   [-V][--version] Print program version\n");
    printf("\t" ); 
}

void version()
{
   printf("Version: 1 | SCLIPLib Version: 0.01 \n"); 
}
