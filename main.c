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

    binaryString = argv[1];
    length = 0;
    isNegative = 0;
    j = 23;

    while (binaryString[length] != '\0')
    {
        if (length == 0 && binaryString[length] == '1')
        {
            isNegative = 1;
        }
        length++;
    }

    decimalValue = 0;
    power = 0.0;


    for (i = length - 1; i > 0; i--)
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

    printf("%0.15f", power + 1);




    return 0;
}
