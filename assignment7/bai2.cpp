#include <stdio.h>

int main()
{
    int matrix[4][3], matrix1[4][3], tong[4][3], hieu[4][3];
    printf("Nhap ma tran thu 1:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap matrix[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("nhap ma tran thu 2:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap matrix1[%d][%d]: ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Ma tran thu 1:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran thu 2:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d",matrix1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tong[i][j] = matrix[i][j] + matrix1[i][j];
            hieu[i][j] = matrix[i][j] - matrix1[i][j];
        }
    }
    printf("ma tran tong: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d",tong[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran hieu: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d",hieu[i][j]);
        }
        printf("\n");
    }
    return 0;
}