#include<stdio.h>
int main()
{

    int c=0,l1=0,l2=0,i=0;
    char s1[10],s2[10],s[20];
    printf("Enter two strings\n");
    gets(s1);
    gets(s2);
    while(s1[l1]!='\0')
        l1++;
    while(s2[l2]!='\0')
        l2++;
    for(int j=0;j<l1;j++)
    {
        s[i]=s1[j];
        i++;
    }
    for(int k=0;k<l2;k++)
    {

        s[i]=s2[k];
        i++;
    }
    puts(s);
    return 0;
}
