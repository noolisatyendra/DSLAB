#include<stdio.h>
int main(){
int a[3],i;
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=3-1;i>=0;i--)
{
printf("%d",a[i]);
}
}

