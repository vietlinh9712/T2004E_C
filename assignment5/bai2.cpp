#include <stdio.h>

int main()
{
    int n, count, i;
    do{
        printf("Nhap n:");
        scanf("%d",&n);
    }while(n < 0);
    for (count = 0 ,i = n; i > 0 ; count++)
    {
        i /= 10;
    }
    printf("%d co %d chu so.",n , count);
    return 0;
}
