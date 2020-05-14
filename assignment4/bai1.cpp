#include <stdio.h>

int main()
{
    int a, b, c;
    do 
    {
        printf("Nhap dung 3 canh cua tam giac de tat chuong trinh:");
        printf("Nhap a: ");
        scanf("%d", &a);
        printf("Nhap b: ");
        scanf("%d", &b);
        printf("Nhap c: ");
        scanf("%d", &c);
    }while((a <= 0 || b <= 0 || c <= 0) || (((a + b) < c) || ((a + c) < b) || ((b + c) < a)));
    
}
