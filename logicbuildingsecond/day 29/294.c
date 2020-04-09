#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int c=0,i=0;
char str[40];
printf("enter the string");
scanf("%[^'\n']s",str);
while(str[i]!='\0')
{
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='u'||str[i]=='U'||str[i]=='o'||str[i]=='O')
{
c=1;
}
i++;
}
if(c==1)
{
printf("true");
}
else
{
printf("false");
}
}

