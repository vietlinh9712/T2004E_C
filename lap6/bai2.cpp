#include <stdio.h>

int main(){
	int arr[20];
	printf("Nhap 20 so nguyen.\n");
	for(int i = 0; i < 10 ; i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < 10 ; i++){
		for(int j = 0; j < 10 ; j++)
		if(arr[i] < arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	for(int i = 0; i < 10 ; i++){
		printf(" %d ",arr[i]);
	}
	printf("So nho thu 2 trong mang la: %d\nSo lon thu 2 trong mang la: %d",arr[1], arr[8]);
	return 0;
}
