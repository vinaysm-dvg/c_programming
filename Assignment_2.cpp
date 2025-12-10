//3. Write a program to validate the Adhar provided by Indian governement - rules of valid adhar number as follows
//1. It must be 6 digits length
//2. 2nd and 4th digits should be even
//3. 3rd and 5th digits should be odd
//4. 6th digit should be always divisible by 5


//If all rules are valid then print "Adhar number is valid" otherwise "Invalid"

//Write a test cases for valid and invalid numbers

#include <stdio.h>

int main() {
    int adhar, digit_1, digit_2, digit_3, digit_4, digit_5, digit_6;

    printf("Enter 6-digit Adhar number: ");
    scanf("%d", &adhar);

    if (adhar < 100000 || adhar > 999999) {
        printf("Adhar number is invalid\n");
        return 0;
    }


    digit_1 = adhar / 100000;
    digit_2 = (adhar / 10000) % 10;
    digit_3 = (adhar / 1000) % 10;
    digit_4 = (adhar / 100) % 10;
    digit_5 = (adhar / 10) % 10;
    digit_6 = adhar % 10;


    if ((digit_2 % 2 == 0) && (digit_4 % 2 == 0) && (digit_3 % 2 == 1) && (digit_5 % 2 == 1) && (digit_6 % 5 == 0))
    {
        printf("Adhar number is valid\n");
    }
    else
    {
        printf("Adhar number is invalid");
    }

    return 0;
}
