#include <stdio.h>

int main()
{
    int n;
    float S = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for (float i = 1; i <= n; i++)
    {
        S += 1/i;
    }
    printf("S = %f", S);
    
    return 0;
}
