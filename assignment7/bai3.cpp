#include <stdio.h>

int main()
{   
    int matrix[4][3], chuyenVi[3][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap matrix[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            chuyenVi[j][i] = matrix[i][j];
        }
    }

/*   for (int i = 0; i < 3; i++) // co the in luon matrix doi cho cua i va j kq se ra ma tran chuyen vi
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d",matrix[j][i]);
        }
        printf("\n");
    }
*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d",matrix[i][j]);
        }
        printf("\n");
    }

    printf("ma tran chuuyen vi: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d",chuyenVi[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
