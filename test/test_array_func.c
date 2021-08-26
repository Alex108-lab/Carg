#include <stdio.h>

int even(int * nums, int nums_count);

int main()
{

    int a[] = {1, 23, 3, 4, 5, 6};
    int (*ptr)(int, int);

    ptr = even;
    ptr[a, 6];


    return 0;
}


