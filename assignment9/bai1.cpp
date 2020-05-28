#include <stdio.h>
#include <string.h>

void DisplayString(char *arr){
    printf("%s",arr);
    printf("\n");
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
    for (int i = 0; i < n; i++)
    {
        DisplayString(arr[i]);
    }
    printf("Nhap chuoi can so sanh: ");
    scanf("%s",&arr1);
    DisplayString(arr1);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i],arr1) == 0)
        {
            printf("%s nam trong mang.",arr1);  
            break;
        }else if(i == n-1)
        {
            printf("%s khong nam trong mang.",arr1); 
        }
        
    }
    
    return 0;
}
