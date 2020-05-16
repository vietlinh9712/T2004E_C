#include <stdio.h>

int main(){
	int  n, sum = 0,x;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n ; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Nhap x = ");
	scanf("%d" , &x);
	for(int i = 0; i < n ; i++){
		if(arr[i] == x){
		printf("Co so %d trong mang.");
		break;
		}
	}
	return 0;
}

