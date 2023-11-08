#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int decimal;
    int weight;
    int i;
    char binary[32];
    int rem;
    int result;

    decimal = 0;
    weight = 1;


    for (i = 0; binary[i] != '\0'; i++)
    {
        result = result * 10 + (binary[i] - '0');
    }

    while (result != 0)
    {
        rem = result % 10;
        decimal += rem*weight;
        result = result/10;
        weight = weight * 2;
    }

    printf("%d", decimal);




    return 0;
}
