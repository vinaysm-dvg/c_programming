#include <stdio.h>

int main() {
    int i = 0, num;
    printf("Enter the range for even numbers: ");
    scanf("%d", &num);

    while (i <= num) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
