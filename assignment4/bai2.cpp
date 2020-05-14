#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Cac so tu nhien < %d chia het cho 3 la: ", n);
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d, ",i);
        }
        
    }
    
}
