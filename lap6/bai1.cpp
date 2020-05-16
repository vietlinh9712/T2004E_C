#include <stdio.h>

int main(){
	int arr[10],sum = 0;
	printf("Nhap 10 so nguyen.\n");
	for(int i = 0; i < 10 ; i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < 10 ; i++){
		sum += arr[i];
	}
	printf("Tong = %d",sum);
	return 0;
}
