#include <stdio.h>

int main()
{
    int money;
    printf("Nhap vao so tien ban muon gui ngan hang(USA): ");
    scanf("%d", &money);
    if (money > 0)
    {
        money += money/100*8; 
        money += money/100*8; 
        money += money/100*8; 
        money += money/100*8; 
        printf("So tien sau 4 nam cua ban la: %d USA",money);
    }else{
        printf("So tien ban nhap khong chinh xac, ket thuc chuong trinh: ");
    }
    
    return 0;
}
