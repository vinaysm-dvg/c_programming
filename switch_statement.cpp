#include<stdio.h>

int main()
{
    int arg1 = 100;
    int arg2 = 200;
    printf("****Arthimatic calculator****\n");
    int choice = -1;
    printf("Enter value of choice 1:Add 2:Sub 3:Prod 4:Mod and 5: div\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: printf("add(arg1, arg2): %d\n", (arg1 + arg2));
        break;
    case 2: printf("sub(arg1, arg2): %d\n", (arg1 - arg2));
        break;
    case 3: printf("prod(arg1, arg2): %d\n", (arg1 * arg2));
        break;
    case 4: printf("mod(arg1, arg2): %d\n", (arg1 % arg2));
        break;
    case 5: printf("div(arg1, arg2): %f\n", ((float)arg1 / arg2));
        break;
    default:printf("You hit invlaid choice!!!");
    }
    return 0;
}