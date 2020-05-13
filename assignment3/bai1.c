#include <stdio.h>

int main()
{
    int a;
    printf("Nhap mot so bat ki co 4 chu so: \n");
    scanf("%d", &a);
    /* if (a > 9 && a < 100)
    {
        int b = 0;
        b = b *10 + a % 10;
        a /= 10;
        b = b *10 + a % 10;
        printf("So nghich dao cua so %d la: %d\n", a, b); 
		}*/
     if (a > 9 && a < 1000)
    {
        int b = 0;
        b = b *10 + a % 10;
        a /= 10;
        b = b *10 + a % 10;
        a /= 10;
        b = b *10 + a % 10;
        printf("So nghich dao cua so %d la: %d\n", a, b); 
		}
    if (a > 999 && a < 10000)
    {
        int b = 0;
        b = b *10 + a % 10;
        a /= 10;
        b = b *10 + a % 10;
        a /= 10;
        b = b *10 + a % 10;
        a /= 10;
        b = b *10 + a % 10;
        printf("So nghich dao cua so %d la: %d\n", a, b); 
    }
	if(a > 9999 || a < 9)
	{
        printf("So ban nhap khong dung, ket thuc chuong trinh.");
    }
    return 0;
}
