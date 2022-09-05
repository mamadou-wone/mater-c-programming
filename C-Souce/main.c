/**
 * @file main.c
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

void toBits(int number){
    while(number != 0){
        printf("bit : [%d] \n", number % 2);
        number = (int) number / 2;
    }
    printf("You must read from down to Up :)\n");
}

int main(int argc, char const *argv[])
{
    // printf("[%d] \n", (int)pow(3, 2));
    toBits(13);
    return 0;
}

// Start looking for computer architecture 