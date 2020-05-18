#include <stdio.h>

int main()
{
    int n,k,i;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    do{
        k = 0;// reset bien kiem tra
        for (i = 0; i < n; i++)
        {
            printf("arr[%d] = ",i);
            scanf("%d", &arr[i]);
            for (int j = 0; j < i; j++)// kiem tra xem co phan tu nao bang nhau khong
            {
                if (arr[j] == arr[i])
                {
                    k = 1;
                    break;
                }
            }
            if (k == 1)// neu co pt bang nhau thi ket thuc vong lap
            {
                printf("Moi ban nhap lai:\n");
                break;
            }
        }
    }while(i != n);// kiem tra xem vong lap ben trong co chay het khong. neu co thi ket thuc neu khong thi lap lai
    
    return 0;
}