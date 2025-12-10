//1. Write a program to add digits in numbers
//Ex : 12334 == 13

#include<stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits: %d", sum);
    return 0;
}
