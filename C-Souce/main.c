#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    float decimal;
    scanf("%f", &decimal);
    printf("%f \n", (decimal - (int)decimal));
    return 0;
}
