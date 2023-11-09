/*
The following program takes ‘n’ numbers as user input and prints their sum.
Modify the program to allow users to input more numbers and find the sum of all the numbers stored in the memory block.

Use realloc() to re-allocate memory.
In the end, use free() to free the pointer, therefore, free up memory.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;
    float *p, sum = 0;

    puts("Enter n: ");
    scanf("%d", &n);

    p = (float*) calloc(n, sizeof(float));

    if (p == NULL) {
        puts("Memory allocation failed");
        exit(0);
    } else {
        puts("Enter data: ");

        /* User input. */
        for (int i = 0; i < n; i++) {
            scanf("%f", p + i);    // Elements are being stored at their address.
        }

        /* Find the sum. */
        for (int i = 0; i < n; i++) {
            sum = sum + p[i];    // Accessing elements stored in the memory block by using 'p[i]'.
        }

        printf("The sum is %.2f", sum);

        int newNum,newSize;
        puts("Enter The More Number You Want To Enter:");
        scanf("%d", &newNum);

        newSize = n+newNum;
        puts("Enter Data:");
        for(int i=n; i<newSize; i++){
        	scanf("%f", p+i);
        }

        for(int i=0; i<newSize; i++)
        {
        	sum = sum+ p[i];
        }
        printf("The sum is %.2f", sum);
    }
    free(p);
    return 0;
}
