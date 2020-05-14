#include <stdio.h>

int main()
{
    int count = 0, sum = 0;
    for (int i = 0; count < 100 ; i++)
    {
        if (i % 2 != 0) 
        {
            sum += i;
            count++;
        }
        
    }
    printf("Tong cua 100 so le dau tien la: %d",sum);
    
    return 0;
}
