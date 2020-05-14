#include <stdio.h>

int main()
{
    int n, fibo, num1 = 0, num2 = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("So fibonanci thu 1 la : 0");
    }else
    {
        for (int i = 1; i != n ; i++)
        {
            fibo = num1 + num2;
            num2 = num1; 
            num1 = fibo;
        }
        printf("So fibonaci thu %d la: %d", n, fibo);
    }
    return 0;
}
