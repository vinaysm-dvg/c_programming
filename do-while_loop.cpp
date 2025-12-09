#include <stdio.h>

int main() {
    int i = 0, num;
    printf("Enter the range for even numbers: ");
    scanf("%d", &num);

    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        ++i;
    } while (i <= num);
    return 0;
}
