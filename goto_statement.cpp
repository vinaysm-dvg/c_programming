#include<stdio.h>

int main()
{
    int arg1 = 0;
    printf("Get value of arg1\n");
    scanf("%d", &arg1);
    if (arg1 % 2 == 0)
    {
        goto EVEN;
    }
    printf("This code will execute only if number is odd\n");

EVEN:
    printf("Welcome to world of even number\n");
    return 0;
}