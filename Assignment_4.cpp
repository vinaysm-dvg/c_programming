//4. Write a program to reverse the given input number & check if it is palindrome

#include <stdio.h>

int main() {
    int num, digit, reversed = 0, original;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        reversed = (reversed * 10) + digit;
        num /= 10;
    }
    printf("Reverse of the given number: %d\n", reversed);

    if (reversed == original) {
        printf("The number is palindrome");
    }
    else {
        printf("The number is not palindrome");
    }
    return 0;
}
