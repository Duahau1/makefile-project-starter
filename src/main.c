#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef TEST
#define main main_exclude
#endif

int main(void)
{
    int *ptr = NULL;
    *ptr = 42;
    printf("Value: %d\n", *ptr);

    int *leak = (int *)malloc(5 * sizeof(int));

    leak = (int *)malloc(10 * sizeof(int));

    // This only frees the second allocation
    free(leak);

    char *greeting = get_greeting("World");
    if (greeting)
    {
        printf("%s\n", greeting);
        free(greeting); // Free the allocated memory for the greeting
    }
    else
    {
        printf("Failed to create greeting.\n");
    }
    return 0;
}