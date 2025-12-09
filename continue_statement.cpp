#include <stdio.h>
int main()
{
    int i = 0;
    printf("Odd numbers in first 100 elements\n");

    for (i = 0; i < 100; ++i)
    {
        if (i % 2 == 0)
        {
            //Take the control to loop
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}