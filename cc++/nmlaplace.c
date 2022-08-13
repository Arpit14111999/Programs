#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,iter,k;
    float u[10][10];
    printf("Enter the no. of sub squares in a row or column \n");
    scanf("%d",&n);
    printf("Enter the number of iterations");
    scanf("%d",&iter);
    printf("Enter the boundary values u(i,0)");
    for(i=0;i<n+1;i++)
    scanf("%f",&u[i][0]);
    printf("Enter the boundary values u(i,%d) for all n",n);
    for(i=0;i<n+1;i++)
    scanf("%f",&u[i][n]);
    printf("Enter the boundary values u(0,j)");
    for(j=0;j<n+1;j++)
    scanf("%f",&u[0][j]);
    printf("Enter the boundary values u(%d,j)",n);
    for(j=0;j<n+1;j++)
    scanf("%f",&u[n][j]);
    printf("Enter the zero values for internal nodes");
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
            u[i][j]=0;
    }
    for(k=1;k<=iter;k++)
    {
        for(i=1;i<n;i++)
        {
            for(j=1;j<n;j++)
                u[i][j]=(u[i-1][j]+u[i+1][j]+u[i][j-1]+u[i][j+1])/4;
        }
    }
    printf("The solution of Laplace equation");
    for(j=1;j<n;j++)
    {
        for(i=1;i<n;i++)
            printf("\nu(%d,%d)=%f\t",i,j,u[i][j]);
    }
}