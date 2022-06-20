#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int i,len=0;
    for(i=0;s[i]!='\0';i++)
    len++;
    printf("%d",len);
}