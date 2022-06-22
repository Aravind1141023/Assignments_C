#include<stdio.h>
int main()
{
  
    int n,i,a[10],l,k,m=0;
    printf("enter the value:");
    scanf("%d",&n);
    printf("enter the position to set or reset:");
    scanf("%d",&k);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    l=i;
    printf("The number in binary is:");
    for(i=l-1;i>=0;i--)
    {
        printf("%d",a[i]);
        m++;
        if(m==k)
        a[i]=1;
    }
    printf("\n");
    printf("The number after setreset:");
    for(i=l-1;i>=0;i--)
    printf("%d",a[i]);

}