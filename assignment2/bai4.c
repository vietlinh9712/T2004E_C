#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float C, p, S;
    printf("Nhap so thu nhat: ");
    scanf("%d",&a);
    printf("Nhap so thu hai: ");
    scanf("%d",&b);
    printf("Nhap so thu ba: ");
    scanf("%d",&c);   
    if (a + b > c && a + c > b && b + c > a)
    {
        C = a + b + c;
        p = C / 2;
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%d, %d, %d la 3 canh cua 1 tam giac.\nChu vi = %0.0f\nDien tich = %0.1f", a, b, c, C, S);
    }
    else
    {
    	printf("%d, %d, %d khong phai 3 canh cua 1 tam giac.")
	}
     
    return 0;
}
