#include <stdio.h>

int main(){
	int num,mun = 0;
	printf("Nhap 1 so bat ki co nhieu nhat 4 chu so:\n");
	scanf("%d",&num);
	while(num != 0){
		mun = mun * 10 + num % 10;
		num /= 10;
	}
	printf("So dao ncua so tren la : %d", mun);
}
