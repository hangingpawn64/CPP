#include<stdio.h>
int main()
{
int n;
printf("enter no. of rows: ");
scanf("%d",&n);
for(int i=1 ; i<=n ; i++)
{
 printf("\n");

    for(int j=i ; j>0; j--)
    {
        printf("%d",j);
    }
}
return 0;
}