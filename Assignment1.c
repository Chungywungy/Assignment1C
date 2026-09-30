/*
 * COMP 2510 - Fall 2026
 * Homework Assignment 1
 *
 * Complete each function below.
 * Do not change the required function names or parameter lists unless
 * instructed by your instructor.
 *
 * Student Name: Fawaz Shariff
 * Student Number: A01443086
 */

#include <stdio.h>

/* Task 1: Triangle */
char triangle(int angle1, int angle2, int angle3)
{
    /* TODO: */
    const int sum = angle1 + angle2 + angle3;

    if (sum != 180) {
        return 'I';
    }
    if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
        return 'A';
    }
    if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
        return 'O';
    }
    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        return 'R';
    }
    return 0;
}


/* Task 2: Calculate an Integer Product */
int integerProduct(int number, int times)
{
    /* TODO: */
    int sum = 0;
    for (int i = 0; i < times; i++) {
        sum += number;
    }
    return sum;
}


/* Task 3: Determine Whether a Number Is Perfect */
int isPerfectNumber(int number)
{
    /* TODO: */
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum == number) {
        return 1;
    }
    return 0;
}


/* Task 4: Display a Hollow Rectangle */
void displayRectangle(int height, int width)
{
    /* TODO: */
    for (int i = 0; i < height; i++) {
        if (i != 0) {
            printf("\n");
        }
        for (int j = 0; j < width; j++) {
            char star = '*';
            if (j == 0 || j == width - 1) {
                star = '*';
            } else if (i == 0 || i == height - 1) {
                star = '*';
            } else {
                star = ' ';
            }
            printf("%c", star);
        }
    }
}


/* Task 5: Recursively Calculate the Sum of Odd Numbers */
int oddSum(int n) {
    /* TODO: */

    if (n <= 0) {
        return n;
    }
    return oddSum(n - 1) + n + n - 1;
}

#ifdef TEST_ASSIGNMENT

int main()
{
    /* Task 1: Triangle
       The assignment does not list sample calls, so these are basic examples.
    */
    printf("Task 1 - Triangle\n");
    printf("triangle(60, 60, 60) = %c (expected A)\n",
           triangle(60, 60, 60));
    printf("triangle(90, 45, 45) = %c (expected R)\n",
           triangle(90, 45, 45));
    printf("triangle(100, 40, 40) = %c (expected O)\n",
           triangle(100, 40, 40));
    printf("triangle(90, 90, 90) = %c (expected I)\n\n",
           triangle(90, 90, 90));


    /* Task 2: Integer Product */
    printf("Task 2 - Integer Product\n");
    printf("integerProduct(5, 4) = %d (expected 20)\n\n",
           integerProduct(5, 4));


    /* Task 3: Perfect Number */
    printf("Task 3 - Perfect Number\n");
    printf("isPerfectNumber(6) = %d (expected nonzero/true)\n",
           isPerfectNumber(6));
    printf("isPerfectNumber(28) = %d (expected nonzero/true)\n\n",
           isPerfectNumber(28));


    /* Task 4: Hollow Rectangle */
    printf("Task 4 - Hollow Rectangle\n");
    printf("displayRectangle(4, 6) should display:\n");
    printf("******\n");
    printf("*    *\n");
    printf("*    *\n");
    printf("******\n\n");

    printf("Your output:\n");
    displayRectangle(4, 6);
    printf("\n");


    /* Task 5: Recursive Sum of Odd Numbers */
    printf("Task 5 - oddSum\n");
    printf("oddSum(0) = %d (expected 0)\n", oddSum(0));
    printf("oddSum(1) = %d (expected 1)\n", oddSum(1));
    printf("oddSum(3) = %d (expected 9)\n", oddSum(3));
    printf("oddSum(5) = %d (expected 25)\n", oddSum(5));

    return 0;
}

#endif