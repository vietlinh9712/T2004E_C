#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap so thu nhat: ");
    scanf("%d",&a);
    printf("Nhap so thu hai: ");
    scanf("%d",&b);
    printf("Nhap so thu ba: ");
    scanf("%d",&c);
    if (a < b)
    {
        if (a < c)
        {
            printf("%d la so nho nhat trong 3 so.",a);
        }
        else
        {
            printf("%d la so nho nhat trong 3 so.",c);
        }
    }
    else if(b < c){
        printf("%d la so nho nhat trong 3 so.",b);
    }
    else
    {
        printf("%d la so nho nhat trong 3 so.",c);
    }
    return 0;
}
