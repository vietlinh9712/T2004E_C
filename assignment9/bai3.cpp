#include <stdio.h>
#include <string.h>

void Swap(char string1[30], char string2[30]){
    char temp[30];
    strcpy(temp,string1);
    strcpy(string1,string2);
    strcpy(string2,temp);
}

void SortArray(char arr[][30],int n){
    for (int i = 0; i < n-1; i++)
    {  
        for (int j = 0; j < n-i-1; j++)
        {
            if (strcmp(arr[j],arr[j+1]) > 0)
            {
                Swap(arr[j],arr[j+1]);
            }        
        }
    }
}

void DisplayString(char arr[][30], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%s",arr[i]);
        printf(" ");
    }
    
}


int main()
{   
    int n;
    printf("Nhap so chuoi can nhap: ");
    scanf("%d",&n);
    char arr[n][30],arr1[30];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap chuoi thu %d: ",i+1);
        scanf("%s",&arr[i]);
    }
    printf("Mang truoc khi sap xep:\n");
    DisplayString(arr,n);
    printf("\nMang sau khi sap xep: \n");
    SortArray(arr,n);
    DisplayString(arr,n);
    return 0;
}   