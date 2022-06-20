#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n],temp;
    scanf("%s",s);
    for(i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    printf("%s",s);
}