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

char toLower(char c)
{
    // printf("%d\n", c);
    char result = c;
    if ('a' <= c && c <= 'z')
    {
        return c - 'A' + 'a';
    }
    return c - 'a' + 'A';
}

int charToDigit(char c1, char c2, char c3)
{
    if (c1 >= '0' && c1 <= '9' && c2 >= '0' && c2 <= '9' && c3 >= '0' && c3 <= '9')
        // return (((int) c1 % 16) * 100) + (((int) c2 % 16) * 10) + (int) c3 % 16;
        return ((c1 - '0') * 100 + (c2 - '0') * 10 + (c3 - '0'));
    return 0;
}

int amountAndAverageOfDigit(int num, int digit)
{
    int average = 0;
    int count = 0;
    int temp;
    if (digit > 9 || digit <= 0 || num < 0)
    {
        return 0;
    }

    while (num != 0)
    {
        temp = num % 10;
        num /= (int)10;
        if (temp < digit)
        {
            count++;
            average += temp;
        }
    }
    return (int)average / count;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // int *aPr;
    // aPr = &a;
    // printf("%lu\n ", a);
    printf("Inside swap function:Value of a = %d and the value of b = %d \n", *a, *b);
}

int findMax(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void findMinMax(int num1, int num2, int *pMax, int *pMin)
{
    if (num1 > num2)
    {
        *pMax = num1;
        *pMin = num2;
    }
    else
    {
        *pMax = num2;
        *pMin = num1;
    }
}

int isPalidrome(int arr[])
{

    int isPalindrome = 0;
    int i, k = 0;
    int j = sizeof(arr) / sizeof(arr[0]);
    printf("J %d \n", j);
    for (i = 0; i < j; i++)
    {
        k = j - i - 1;
        if (arr[i] == arr[k])
            isPalindrome = 1;
        else
            isPalindrome = 0;
    }

    return isPalindrome;
}

int largestNeighBorSum(int size, int arr[])
{
    int max = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if ((arr[i] + arr[i + 1]) > max)
        {
            max = arr[i] + arr[i + 1];
        }
    }
    return max;
}

void isArrayIsSorted(int size, int arr[])
{
    int rSorted, sorted;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            rSorted = 1;
        }
        else if (arr[i] <= arr[i + 1])
        {
            rSorted = 0;
            sorted = 1;
        }
        else
        {
            rSorted = 0;
            sorted = 0;
            break;
        }
    }

    if (rSorted == 1 && sorted != 1)
    {
        printf("Really sorted \n");
    } 
    else if (rSorted != 1 && sorted == 1 || rSorted == 1 && sorted == 1)
    {
        printf("Sorted \n");
    }
    else
    {
        printf("Unsorted\n");
    }
}

int main(int argc, char const *argv[])
{
    // int arr[] = {5,1, 3, 2, 3, 1, 5};
    // int arr[] = {1, 4, 3, 7, 1};
    // int arr[] = {5, 7, 134, 5, 21};
    int arr[] = {1, 2, 5, 7, 10};

    isArrayIsSorted(5, arr);

    // printf("Is Sorted %d \n", isArrayIsSorted(5, arr));

    // int rSorted , sorted;

    // int *ptr = &rSorted;
    // int i = 0;
    // for (i = 0; i < 4; i++)
    // {
    //     if(arr[i] < arr[i + 1]){
    //         // rSorted = 1;
    //         *ptr = 1;
    //     }
    //     else{
    //         // rSorted = 0;
    //         *ptr = 0;
    //         break;
    //     }

    //     // if(arr[i] <= arr[i + 1]){
    //     //         sorted = 1;
    //     // }else{
    //     //     sorted = 0;
    //     // }
    //     printf("[%d]\n", *ptr);
    // }
    // printf("[%d]\n", *ptr);

    // if (rSorted == 1)
    // {
    //     printf("Really sorted \n");
    // }else{
    //     printf("Unsorted\n");
    // }

    // printf("Largest Neighbors Sum : [%d] ", largestNeighBorSum(5, arr));

    // int isPalindrom = 0;
    // int i, k = 0;
    // int j = sizeof(arr) / sizeof(arr[0]);

    // for(i = 0; i < j; i++){
    //     k = j - i - 1;
    //     if (arr[i] == arr[k])
    //         isPalindrom = 1;
    //     else
    //         isPalindrom = 0;
    // }

    // printf("Is Palindrome %d \n", isPalindrom);

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

    // printf("%d \n", charToDigit('8', '9', '9'));
    // int num = '4' - '0';
    // printf("%d\n", num);

    // printf("%d \n", amountAndAverageOfDigit(45213, 5));

    // int tab[] = {1, 2, 3};
    // printf("Address %lu\n", &tab[0]);
    // printf("Address %lu\n", &tab[1]);
    // printf("Address %lu\n", &tab[2]);

    // int a = 5;
    // int *p;
    // p = &a;

    // printf("%d\n ", a);
    // printf("%p\n ", &a);
    // printf("%p\n ", p);
    // printf("%d\n ", *p);

    // int a = 12;
    // printf("Address %p \n", &a);
    // int b = 15;
    // swap(&a, b);
    // printf("Value of a = %d and the value of b = %d \n", a, b);

    // int grade1 = 17, grade2 = 36;
    // int *pgrade1 = &grade1, *pgrade2 = &grade2;
    // printf("Grade1 value = %d and address: %p \n", grade1, pgrade1);
    // printf("Grade value = %d and address: %p \n", grade2, &pgrade2);

    // int a = 5, b = 7;
    // int max, min;
    // findMinMax(a, b, &max, &min);
    // printf("Max = %d \n", max);
    // printf("Min = %d \n", min);
    // printf("Value of a = %d and the value of b = %d \n", a, b);
    // swap(&a, &b);
    // printf("Value of a = %d and the value of b = %d \n", a, b);

    return 0;
}
