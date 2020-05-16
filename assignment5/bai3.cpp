#include <stdio.h>

int main()
{
    int n,sum = 0;
    do{
        printf("Nhap n(n > 0):");
        scanf("%d",&n);
    }while(n < 0);
    while (n >0)
    {
        sum += n %10;
        n /= 10;
    }
    printf("Tong cac chu so cua n bang: %d", sum);
    return 0;
}