#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number you want to multiplication table of:\n");
    scanf("%d", &num);

    // printf("Multiplication table of %d is as follow:\n", num);

    printf("%d X 1 =%d\n", num, num * 1);

    for (int i = 0; i < 11; i++)
    {
        printf("%d X %d =%d\n", num, i, num * i);
    }

    return 0;
}
