#include <stdio.h>

int factorial(int number){
    if(number == 1 || number == 0)
        return 1;
    return number * factorial(number - 1);
}

int main() {
    int result = factorial(5);
    printf("%d", result);
    return 0;
}
