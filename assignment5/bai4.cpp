#include <stdio.h>

int main()
{
     int a, b, min ,UCLN;
        printf("Nhap a:");
        scanf("%d",&a);
        printf("Nhap b:");
        scanf("%d",&b);
        if (a < b)
        {
            min = a;
        }else
        {
            min = b;
        }
        
        
        for (int i = 1; i <= min; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                UCLN = i;
            }
            
        }

        printf("UCLN cua %d va %d la: %d",a, b, UCLN);
        
    return 0;
}
