#include <stdio.h>

int main()
{
    int n, min, k = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)//nhap mang
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)// tim 1 so nguyen duong
    {
        if (arr[i] > 0)
        {
            min = arr[i];
            break;
        }else if(i == (n-1))
        {
            printf("Mang khong co so nguyen duong.");
            k = 1;// bien xet xem mang cco so nguyen duong ko neu co thi chay bth neu khong dung tat ca ctrinh.
        }
    }
    if (k == 0)
    {
            for (int i = 0; i < n; i++)// so sanh so nguyen duong vua tim voi cac so duong con lai trong mang
        {
            if (arr[i] < min && arr[i] > 0)
            {
                min = arr[i];
            }
        }
        printf("So nguyen duong nho nhat trong mang la: %d", min);
    }
    return 0;
}
