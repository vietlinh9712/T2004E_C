#include <stdio.h>

int main()
{
    int n, giaiThua = 1;
    printf("Nhap n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        giaiThua *= i;
    }
    printf("n! = %d", giaiThua);
    
    return 0;
}
