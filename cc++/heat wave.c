#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (4*x-(x*x)/2);
}
main()
{
    float u[40][40],h,k,c,al,us,ue;
    int i,j,n,m;
    printf("Enter the value of n and n \n");
    scanf("%d  %d",&n,&m);
    printf("Enter the value of square of c");
    scanf("%f",&c);
    printf("Enter the value of h and k:");
    scanf("%f %f",&h,&k);
    al=(c*k)/(h*h);
    printf("Enter the value of u[0,t] :");
    scanf("%f",&us);
    printf("Enter the value of u[%d,t]:",n);
    scanf("%f",&ue);
    for(i=0;i<=m;i++)
        u[0][i]=us;
    u[n][i]=us;
    for(j=1;j<=n-1;j++)
     u[j][0]=f(j);
    for(i=0;i<=m-1;i++)
        for(j=1;j<=n-1;j++)
            u[j][i+1]=al*u[j-1][i]+al*u[j+1][i]+(1-2*al)*u[j][i];
    printf("The values of u[j,i] are :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%f\t",u[j][i]);
            printf("\n");
        }
    }
