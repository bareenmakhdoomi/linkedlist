#include <stdio.h>
int power(int,int);
int main()
 {
    int a, b, result;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter power number: ");
    scanf("%d", &b);
    result = power(a, b);
    printf("%dpower%d = %d", a, b, result);
    return 0;
}

int power(int a, int b) 
{
    if (b != 0)
        return (a * power(a, b - 1));
    else
        return 1;
}
