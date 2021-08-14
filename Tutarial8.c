#include <stdio.h>
/*
Print a multiplication table of a number entered byuser in the user pretty form

example :input
enter the number you want multiplication table of :
6
output:
table of 6  */
int main()
{
    int number, i = 1;
 
    printf(" Enter the Number:");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n ", number);
    printf("--------------------------\n"); 
    while (i <= 10)
    {
        printf(" %d x %d = %d \n ", number, i, number * i);
        i++;
    return 0;
}
}