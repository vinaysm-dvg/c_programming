#include <stdio.h>
#include <math.h>
int main()
{
    int arg1 = 100;
    int arg2 = 300;
    int arg3 = 100;
    if (arg1 > arg2 && arg1 > arg3)
    {
        printf("arg1 is greater\n");
    }
    else if (arg2 > arg3)
    {
        printf("arg2 is greater\n");
    }
    else
    {
        printf("arg3 is greater\n");
    }
    return 0;
}