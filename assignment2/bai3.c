#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float delta;
    float x, x1;
    printf("Nhap he so thu nhat: ");
    scanf("%d",&a);
    printf("Nhap he so thu hai: ");
    scanf("%d",&b);
    printf("Nhap he so thu ba: ");
    scanf("%d",&c);    
    delta = b*b - 4*a*c;
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Pt co vo so nghiem.");
        }
        else
        {
        x = (float)c / (float)b;
        printf("Pt co 1 nghiem la : x = %f", x);
        }
    }
    else 
    {
        if (delta < 0)
        {
            printf("Pt vo nghiem.");
        }
        else if (delta > 0)
        {
            x = (float)(-b + sqrt(delta)) / (float)(2*a);
            x1 = (float)(-b - sqrt(delta)) / (float)(2*a);
            printf("Pt co 2 nghiem phan biet:\nx1 = %f \nx2 = %f",x, x1);
        }
        else
        {
            x = -b / (2*a);
            printf("Pt co nghiem kep x1 = x2 = %f",x);
        }
        
    }
    
    return 0;
}
