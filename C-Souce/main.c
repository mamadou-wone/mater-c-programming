#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[60];
    printf("%s \n", name);
    for (int i = 0; i < 7; i++)
    {
        strcat(name, "*");
        printf("%s \n", name);
    }
    
    return 0;
}
