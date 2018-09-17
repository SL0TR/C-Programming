#include <stdio.h>

main () {
    char option;
    printf("Enter your option : ");
    option = getchar();
    float num1, num2;
    printf("Enter first numbers : ");
    scanf("%f", &num1);
    printf("Enter 2nd numbers : ");
    scanf("%f", &num2);

    switch (option) {
    case '+':
    printf("Sum is result % .2f", num1 + num2);
    break;

    case '-':
    printf("Substraction result is % .2f", num1 - num2);
    break;

    case '*':
    printf("Multiplication result is % .2f", num1 * num2);
    break;

    case '/':
    printf("Division result is % .2f", num1 / num2);
    break;

    default:
    printf("Error: Option not found!");

    }

}

