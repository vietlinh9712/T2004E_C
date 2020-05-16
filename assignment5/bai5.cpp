#include <stdio.h>

int main()
{
    int n, num3 = 1, num1 = 0, num2 = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    while (n > num3)
    {
        num3 = num1 + num2;
        num2 = num1; 
        num1 = num3;
    }
    printf("So fibonanci nho hon va gan %d nhat la so: %d",n, num2);
    return 0;
}
