#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    char *binaryString;
    double power;
    int i;
    int j;
    double k;
    int exponent;
    double a;

    binaryString = argv[1];

    j = 23;
    k = 0.0;
    exponent = 0;

    power = 0.0;
    a = 0;


    for (i = 31; i > 0; i--)
    {
        if (i>8)
        {
            if (binaryString[i] == '1')
            {
                power += pow((0.5), j);

            }

        }
        j--;

    }

    for (i = 1; i <= 8; i++)
    {
        exponent = exponent * 2 + (binaryString[i] - '0');
    }


    exponent = exponent - 127;

    printf("%0.15f\n", power + 1);
    printf("%d\n", exponent);

    if (binaryString[0] == '0')
    {
        printf("+\n");
    }
    else
    {
        printf("-\n");
    }

/*    if (exponent < 0)
    {

        printf("-\n");
    }
    else
    {
        printf("+\n");
    }*/

    a = pow(2, exponent);
    k = (power+1)*a;

    if (binaryString[0] != '0')
    {
        printf("-");
    }

    printf("%0.15f\n", k);


    return 0;
}
