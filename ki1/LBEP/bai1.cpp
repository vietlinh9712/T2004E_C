#include <stdio.h>
#include <string.h>

void concat(char s1[], char s2[]){
	strcat(s1," ");
	strcat(s1,s2);
	printf("The concatenated string : %s",s1);
}

int main(){
	char firstString[100], secondString[100];
	printf("Enter the first string: ");
	scanf("%s", &firstString);
	printf("Enter the second string: ");
	scanf("%s", secondString);
	concat(firstString, secondString);
	return 0;
}
