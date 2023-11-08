#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    char *binaryString;
    int length;
    int isNegative;
    int decimalValue;
    double power;
    int i;
    int j;
    double k;
    int exponent;
    double a;

    binaryString = argv[1];
    length = 0;
    isNegative = 0;
    j = 23;
    k = 0.0;
    exponent = 0;

    decimalValue = 0;
    power = 0.0;
    a = 0;


    for (i = 31; i > 0; i--)
    {
        if (i>8)
        {
            if (binaryString[i] == '1')
            {
                /*decimalValue += power;*/
                power += pow((0.5), j);

            }

        }
        j--;

    }

    for (int i = 1; i <= 8; i++)
    {
        exponent = exponent * 2 + (binaryString[i] - '0');
    }
    /*

    while (result != 0)
    {
        rem = result % 10;
        if (j <= 23)
        {
            decimal += rem*weight;
        }

        result = result/10;
        weight = weight * (1/2);
        j++;
    }
    */
    exponent = exponent - 127;

    printf("%0.15f\n", power + 1);
    printf("%d\n", exponent);
    if (exponent < 0)
    {

        printf("-\n");
    }
    else
    {
        printf("+\n");
    }

    a = pow(2, exponent);
    k = exponent*(power+1)*a;

    printf("%0.15f\n", k);


    return 0;
}
