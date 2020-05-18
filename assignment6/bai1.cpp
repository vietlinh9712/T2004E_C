#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] % 2 != 0)
        {
            printf("So le cuoi cung cua mang la: %d",arr[i]);
            break;
        }else if (i == 0)
        {
            printf("Khong co so le trong mang.");
        }
        
        
    }
    
    
    return 0;
}
