#include<stdio.h>
int main()
{
    int a[5][5];
    int i,j;
    printf("Enter the elements of a 5x5 matrix:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Main Diagonal: ");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i][i]);

    }
    printf("\nSecondary Diagonal: ");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i][4-i]);
    }
}
