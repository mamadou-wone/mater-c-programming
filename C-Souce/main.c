#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int number, num1, num2, num3;
    scanf("%d", &number);
    // scanf("%d", &d);
    num3 = number % 10;
    number = (int)(number / 10);
    num2 = number % 10;
    number = (int)(number / 10);
    num1 = number % 10;
    printf("[%d] [%d] [%d]\n" , num1, num2, num3);
    printf("%d \n", num1+num2+num3);
    return 0;
}
