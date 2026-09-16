#include <stdio.h>

/**
 * Project: first-code
 * File: loop.c
 * Description: Print numbers from 1 to 100 using for loop
 * Author: makhansingh07
 */

int main() {
    printf("Printing numbers from 1 to 100:\n");
    printf("--------------------------------\n");

    // For loop to print 1 to 100
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
        
        // New line after every 10 numbers for clean output
        if (i % 10 == 0) {
            printf("\n");
        }
    }

printf("----------\n");
printf("loop completed successfully.\n");

return 0;
} 
