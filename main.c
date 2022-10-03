#include <stdio.h>
#include "askname.h"

int main(int argc, char **argv)
{
<<<<<<< HEAD
    printf("This is changes");
=======
    printf("This is changes")
>>>>>>> parent of 8a20c0c (Create a bad feature)
    char first[255], last[255];
    askname(first, last);
    printf("Hello, %s %s!\n", first, last);
    return 0;
}