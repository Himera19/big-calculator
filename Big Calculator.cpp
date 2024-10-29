#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    printf("Welcome to Big Calculator:\n");

    // Drawing a star pattern
    int a, b;
    for (a = 0; a <= 5; a++) {
        for (b = 0; b <= a; b++) {
            printf("*");
        }
        printf("\n");
    }

    // Mathematical operations
    float number;
    printf("Please write a number: ");
    scanf("%f", &number);
    printf("Square root of the entered number: %.2f\n", sqrt(fabs(number)));
    printf("Exponential value of the entered number: %.2f\n", exp(number));
    printf("Logarithmic value of the entered number: %.2f\n", log(number));
    printf("Floor value of the entered number: %.2f\n", floor(number));
    printf("Sine value of the entered number: %.2f\n", sin(number));

    printf("\n*** Now It's Time for Our Calculator ***\n");

    // Addition and subtraction operations
    int number1, number2, sum, difference;
    printf("\nEnter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    sum = number1 + number2;
    difference = number1 - number2;
    printf("\nSum of Numbers: %d\n", sum);
    printf("Difference of Numbers: %d\n", difference);

    // User feedback
    printf("\n*** Did you like it? ***\n");
    printf("For Yes = 1, For No = 0: ");

    int feedback;
    scanf("%d", &feedback);
    if (feedback >= 1) {
        printf("Thank you so much :) ");
    } else {
        printf("You broke my heart :'( ");
    }

    printf("\n*** By Yunus Emre Benli ***\n");

    getch();
    return 0;
}
