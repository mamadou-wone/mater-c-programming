/**
 * @file main.c
 * @author amir-boss (mamadouwone.com)
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

void getDigits(int number)
{
    // int tab[8];
    int digit;
    int sum = 0;
    while (number != 0)
    {
        digit = number % 10;
        sum += digit;
        printf("[%d] \n", digit);
        number = (int) number / 10;
    }
    printf("Sum [%d]\n", sum);
    // return tab;
}

int main(int argc, char const *argv[])
{
    // printf("[%d] \n", (int)pow(3, 2));
    return 0;
}

// Start looking for computer architecture 