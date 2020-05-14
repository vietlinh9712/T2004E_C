#include <stdio.h>

int main()
{
    int sum;
    for (int i = 0; i <= 1000; i++)
    {
        sum += i;
    }
    printf("Tong cua S = 1+2+3+4...+1000 = %d",sum);
    
    return 0;
}
