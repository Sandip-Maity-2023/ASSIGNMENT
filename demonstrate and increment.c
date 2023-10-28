
#include<stdio.h>
int main()
{
int a=5;
int b=6;
int c=(a>b);
int d=(a!=b);
int e=c&&d;
int f=c||d;
printf("%d\n",f);
printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",c);
}
