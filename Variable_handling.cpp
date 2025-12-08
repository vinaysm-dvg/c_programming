#include<stdio.h>

int main()
{
    //Valid variable names
    int var1 = 100;
    float var2 = 32.32f;
    char var3 = 'A';
    const char* str = "Hello World";
    int var_4 = 3232;
    int _var5 = 4324;
    int _var2334 = 43243; //Variable name can contain numbers at middle

    //Invalid variable names
    //int 43var = 322; //Rule: variable should start with either underscope or alphabet
    // int %var = 3232; //Rule: variable should not contain special character
    // int switch = 43534; //Rule: variable should not contain c reserved keyword

    printf("All OK!");
    return 0;
}