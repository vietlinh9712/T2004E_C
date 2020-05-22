#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, count = 0, count1 = 0, sum = 0, sum1 = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    int *p;
    p = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[i]= ");
        scanf("%d",(p+i));
    }
    printf("Hien thi mang: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", *(p+i));
    }
    for (int i = 0; i < n; i++)
    {
        if (*(p+i) > 0)
        {
            count++;
            sum+= *(p+i);
        }
        if (sum > sum1)// update tong
        {
            sum1 = sum;
        }
        if (count > count1)// update bien dem
        {
            count1 = count;
        }
        if(*(p+i) < 0){//reset tong va dem khi gap so am
            sum = 0;
            count = 0;
        }
    }
    printf("\nday so duong lon nhat la: %d\nTong cua day so duong lon nhat la: %d",count1,sum1);
    
    return 0;
}
