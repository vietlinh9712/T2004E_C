#include <stdio.h>

int main(){
	int a;
	printf("Nhap so: ");
    scanf("%d",&a);
    if(a > 1 && a < 8){
    	printf("Day la thu %d", a);
	}
	else if(a == 8){
			printf("Day la chu nhat.");
		}
		else{
			printf("Khong phai la ngay trong tuan.");
		}
}
