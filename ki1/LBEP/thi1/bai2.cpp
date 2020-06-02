#include <stdio.h>
#include <string.h>

void countCharacter(char data[]){
	int a = 0, e = 0, j = 0, o = 0, u = 0, rest = 0;
	int percentA ,percentE, percentI,percentO, percentU;
	float len = strlen(data);
	for(int i = 0 ; i < len ; i++){
		if(data[i] == 'a'){
			a++;
			rest++;
		}else if(data[i] == 'e'){
			e++;
			rest++;
		}else if(data[i] == 'i'){
			j++;
			rest++;
		}else if(data[i] == 'o'){
			o++;
			rest++;
		}else if(data[i] == 'u'){
			u++;
			rest++;
		}
		if(i == len){
			percentA = a/len*100;
			percentE = e/len*100;
			percentI = j/len*100;
			percentO = o/len*100;
			percentU = u/len*100;
		}
	}
	printf("a: %d; e: %d; i: %d; o: %d; u: %d; rest: %d;\n", a, e, j, o, u,rest);
	printf("a: %d, e: %d; i: %d; o: %d; u: %d; rest: %d;",percentA, percentE, percentI, percentO,percentU);
	
}

int main(){
	char data[100];
	printf("Enter String: ");
	scanf("%s", data);
	countCharacter(data);
		
	return 0;
}
