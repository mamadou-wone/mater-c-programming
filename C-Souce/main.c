/**
 * @author amir-boss (mamadouwone.com)
 * @copyright Copyright (c) 2022
 */
// #  ___       __   ________  ________   _______
// # |\  \     |\  \|\   __  \|\   ___  \|\  ___ \     
// # \ \  \    \ \  \ \  \|\  \ \  \\ \  \ \   __/|
// #  \ \  \  __\ \  \ \  \\\  \ \  \\ \  \ \  \_|/__
// #   \ \  \|\__\_\  \ \  \\\  \ \  \\ \  \ \  \_|\ \ 
// #    \ \____________\ \_______\ \__\\ \__\ \_______\
// #     \|____________|\|_______|\|__| \|__|\|_______|

#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

void trianglePattern()
{
    int n = 3;
    // int i = 1;
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("i = %d |", i);
        for (int k = n; k > 0; k--)
        {
            if (i >= k)
            {
                j++;
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
            // j++;
            // printf(" || k = %d ", k);
        }
        printf("\n");
    }
}

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
        number = (int)number / 10;
    }
    printf("Sum [%d]\n", sum);
    // return tab;
}

void toBits(int number)
{
    while (number != 0)
    {
        printf("bit : [%d] \n", number % 2);
        number = (int)number / 2;
    }
    printf("You must read from down to Up :)\n");
}

char toLower(char c){
    // printf("%d\n", c);
    char result = c;
    if('a' <= c && c <= 'z'){
        // printf("lower\n");
        // printf("%c\n", c - 32);
        result = c - 32;
    }else if ('A' <= c && c <= 'Z')
    {
        // printf("Upper\n");
        // printf("%c\n", c + 32);
        result = c + 32;
    }
    return result;
}


int charToDigit(char c1, char c2, char c3){
    if (c1 >= '0' && c1 <= '9' && c2 >= '0' && c2 <= '9' && c3 >= '0' && c3 <= '9')
        return (((int) c1 % 16) * 100) + (((int) c2 % 16) * 10) + (int) c3 % 16;
    return 0;
}

int main(int argc, char const *argv[])
{
    // for (int i = 1; i < 10; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // for (int i = 10; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // p
    // printf("[%d] \n", (int)pow(3, 2));
    // toBits(13);
    // printf("Days = 0X%X \n Month=  0X%X \n Year= 0X%X \n", 20, 8, 2012);
    // printf("%X \n", 'A');
    // int n = 35;
    // int firstDigit, secondDigit;
    // firstDigit = n % 10;
    // secondDigit = (int) n / 10;
    // printf("firstDigit --> %d\n", firstDigit);
    // printf("secondDigit --> %d\n", secondDigit);
    // int max;
    // max = firstDigit > secondDigit ? firstDigit : secondDigit;
    // printf("MAX --> %d\n", max);
    // toLower('z');
    // printf("%c\n", toLower('a'));

    printf("%d \n", charToDigit('8', '9', '9'));
    return 0;
}

// Start looking for computer architecture
