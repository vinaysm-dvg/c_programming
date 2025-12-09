#include <stdio.h>
int main()
{
    int i = 0;
    printf("Even numbers in first 20 elements\n");

    do
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        if (i == 100)
        {
            break;
        }
        ++i;
    } while (true);
    return 0;
}