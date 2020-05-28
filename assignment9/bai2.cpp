#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    printf("Nhap chuoi 1: ");
    scanf("%s", &s1);
    int len1 = strlen(s1);
    printf("Nhap chuoi 2: ");
    scanf("%s", &s2);
    int len2 = strlen(s2);
    if (strstr(s1,s2) != NULL)
    {
        printf("'%s' co chua '%s'", s1, s2);
    }else
    {
        printf("%s khong chua %s", s1, s2);
    }
    
    
    
    return 0;
}
