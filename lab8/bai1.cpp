#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p, n;
	printf("Nhap n: ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0; i<n ; i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	for(int j = 1; j < n; j++){
		int i = j - 1;
		int tmp = *(p+j);
		while((i >= 0) && (tmp < *(p+i))){
			*(p+i+1) = *(p+i);
			i--;
		}
		*(p+i+1) = tmp;
	}
	printf("Mang lan 1:");
	for(int i = 0; i< n;i++){
		printf("%5d",*(p+i));
	}
	p = (int *)realloc(p,(n*2)*sizeof(int));
	printf("\n");
	for(int i=n; i<n*2 ; i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	for(int i=0; i < n*2; i++){
		for(int j=0; j<n*2; j++){
			if(*(p+j) > *(p+j+1) ){
				int temp = *(p+j+1);
				*(p+j+1) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	printf("\nmang :\n");
	for(int i = 0; i< n*2;i++){
		printf("%5d",*(p+i));
	}
}
