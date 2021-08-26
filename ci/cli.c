#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "./cli.h"

typedef struct
{
    int i;
    float r;
    float n1;
    float n2;
} numsVar;

void cli(int argc, char **argv)
{
    // nums Variables
    numsVar nums;

    for (int i = 0; i < argc; i++)
    {

        // Print help
        if (!strcmp("-h", argv[i]) || !strcmp("--help", argv[i]))
        {
            printf("|  name  |   command    |          description            |\n\n");

            printf("positional arguments\n");
            printf("Sum:     [--sum]         Sum the nums and exit\n");
            printf("Sub:     [--sub]         Substraing the nums and exit\n");
            printf("Mul:     [--mul]         Multiply the nums and exit\n");
            printf("Div:     [--div]         Divide the nums and exit\n");
            printf("Pow:     [--pow]         Elevate num to potence and exit\n");

            printf("\n-------------------------------------------------------------\n\n");

            printf("optional arguments\n");
            printf("help:    [-h][--help]    print this help and exit\n");
            printf("version: [-v][--version] print the program version and exit\n");

            exit(0);
        }

        // Print program version
        if (!strcmp("-v", argv[i]) || !strcmp("--version", argv[i]))
        {
            printf("Version 0.1 build 14082021\n");
            exit(0);
        }

        // Sum nums
        if (argc > 1)
        {
            if (!strcmp("--sum", argv[i]))
            {
                int r = 0; // Result variable

                // Search than --sum is in the beginning of the arguments
                if (!strcmp("--sum", argv[1]))
                {
                    //printf("--sum argument fist\n");
                    for (int i = 2; i < argc; i++)
                    {
                        //printf("%i [%s]\n", i, argv[i]);
                        r += atof(argv[i]);
                    }
                }
                // Seeks than --sum is at the end of the arguments
                else
                {
                    //printf("--sum argument second\n");
                    for (int i = 1; i < argc - 1; i++)
                    {
                        //printf("%i [%s]\n", i, argv[i]);
                        r += atof(argv[i]);
                    }
                }
                printf("R/: %0.1f\n", r);
            }

            // Search than --sub is in the beginning of the arguments
            if (!strcmp("--sub", argv[i]))
            {
                float r = 0; // Result variable
                float n1 = 0;
                float n2 = 0; // Variable for storaged nums to sub

                if (!strcmp("--sub", argv[1]))
                {
                    for (int i = 2; i < argc; i++)
                    {
                        // printf("%i [%s]\n", i, argv[i]);

                        n1 = atof(argv[i]);

                        // printf("n1 %i\nn2 %i\n", n1, n2);

                        r = n2 - n1;

                        n2 = atof(argv[i]);

                        // printf("n1 %i\nn2 %i R %i\n", n1, n2, r);
                    }
                }
                // Seeks than --sub is at the end of the arguments
                else
                {
                    for (int i = 1; i < argc - 1; i++)
                    {

                        n1 = atof(argv[i]);

                        r = n2 - n1;

                        n2 = atof(argv[i]);
                    }
                }
                printf("R/: %0.1f\n", r);
            }

            if (!strcmp("--mul", argv[i]))
            {

                float r = 0;
                float n1 = 0;
                float n2 = 0;

                if (!strcmp("--mul", argv[1]))
                {
                    for (int i = 2; i < argc; i++)
                    {

                        n1 = atof(argv[i]);

                        r = n1 * n2;

                        //printf("n1 %i n2 %i\n", n1, n2);
                        n2 = atof(argv[i]);
                    }
                }
                else
                {
                    for (int i = 1; i < argc - 1; i++)
                    {
                        n1 = atof(argv[i]);

                        r = n1 * n2;

                        n2 = atof(argv[i]);
                    }
                }

                printf("R/: %0.1f\n", r);
            }

            if (!strcmp("--div", argv[i]))
            {

                float r = 0;
                float n1 = 0.0;
                float n2 = 0.0;

                if (!strcmp("--div", argv[1]))
                {

                    for (int i = 2; i < argc; i++)
                    {
                        n1 = atof(argv[i]);

                        r = n2 / n1;

                        n2 = atof(argv[i]);
                    }
                }
                else
                {
                    for (int i = 1; i < argc - 1; i++)
                    {
                        n1 = atof(argv[i]);

                        r = n2 / n1;

                        n2 = atof(argv[i]);
                    }
                }
                printf("R/: %0.1f\n", r);
            }

        } // end if (argc > 1)
    }     // end for
}
