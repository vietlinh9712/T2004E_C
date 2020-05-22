#include <stdio.h>

int main()
{
    int n, count = 0, count1 = 0, sum = 0, sum1 = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[i]= ");
        scanf("%d", &arr[i]);
    }
    printf("Hien thi mang: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
            sum+= arr[i];
        }// kien tra xem co phai la so am dau tien thi moi gan gia tri
        if (sum > sum1)
        {
            sum1 = sum;
        }
        if (count > count1)
        {
            count1 = count;
        }
        if(arr[i] < 0){
            sum = 0;
            count = 0;
        }
    }
    printf("\nday so duong lon nhat la: %d\nTong cua day so duong lon nhat la: %d",count1,sum1);
    
    return 0;
}
