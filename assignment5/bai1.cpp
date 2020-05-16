#include <iostream>

int main()
{
    int a,b,sum = 0;
    do{
        printf("Nhap a:");
        scanf("%d",&a);
        printf("Nhap b:");
        scanf("%d",&b);
    }while(a > b);
    for (int i = a; i < b; i++)
    {
        sum += i;
    }
    printf("KQ = %d", sum);
    return 0;
}
