#include <stdio.h>

int main()
{
    int matrix[4][4], average = 0, average1 = 0, count = 0, count1 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Nhap matrix[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d",matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                average += matrix[i][j];
                count++;
            }
            if (i + j == 3)
            {
                average1 += matrix[i][j];
                count1++;
            }
        }
    }
    printf("average duong cheo 1: %d\naverage duong cheo 2: %d\naverage ca ma tran: %d",average/count,average1/count1,(average+average1)/2);
    
    return 0;
}
