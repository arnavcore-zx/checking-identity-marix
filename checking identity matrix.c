#include<stdio.h>
int main()
{
    int a[50][50],n,i,j;

    printf("Enter the power of matrix:");
    scanf("%d",&n);

    printf("Enter the elements of matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                {
                    printf("The given matrix is not a identity matrix");
                    return 0;
                }
            }
            else
            {
                if(a[i][j]!=0)
                {
                    printf("The given matrix is not a identity matrix");
                    return 0;
                }
            }
        }
    }
    printf("The matrix is identity matrix");
    return 0;
}
