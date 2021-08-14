#include <stdio.h>

int main()
{

    int num;

    printf("Write a table ,Whome you want");
    scanf("%d", &num);

    for ( int i = 0; i < 11; i++)
    {
        printf("%d X %d =%d\n", num, i, num*i);
    }

    return 0;
}