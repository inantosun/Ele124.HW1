/* Q2: Corrected C Program */
#include <stdio.h>

int main(void) {
    int integer1; /* first number to be input by user */
    int integer2; /* second number to be input by user */
    int sum;      /* variable in which sum will be stored */ 

    printf("Enter first integer:\n"); /* prompt */
    scanf("%d", &integer1);            /* read an integer */

    printf("Enter second integer:\n"); /* prompt */
    scanf("%d", &integer2);             /* read an integer */

    sum = integer1 + integer2;          /* assign total to sum */

    printf("Sum is %d\n", sum);        /* print sum */
    return 0;
}



Enter first integer:
4
Enter second integer:
5
Sum is 9

--------------------------------
Process exited after 5.555 seconds with return value 0
Press any key to continue . . .
