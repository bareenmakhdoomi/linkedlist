#include <stdio.h>
#include <math.h>

int convertDecimalToOctal(int n);
int main()
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("%d in decimal = %d in octal", n, convertDecimalToOctal(n));

    return 0;
}

int convertDecimalToOctal(int n)
{
    int o= 0, i = 1;

    while (n != 0)
    {
        o =o+ (n % 8) * i;
        n =n/ 8;
        i =i* 10;
    }
    return o;
}
