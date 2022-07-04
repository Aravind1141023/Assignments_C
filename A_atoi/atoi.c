#include<stdio.h>
#include<string.h>
int atoi(char *s)
{
    int l,i,num=0;
    l=strlen(s);
    for(i=0;i<l;i++)
    num=num*10+(s[i]-48);
    return num;
}
int main()
{
    char s[100];
    scanf("%s",s);
    int n;
    n=atoi(s);
    printf("%d",n);
}