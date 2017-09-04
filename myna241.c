#include<stdio.h>
int main() 
{
int a,c,i,hcf;
printf("enter two values\t");
scanf("%d%d",&a,&c);
for(i=1;i<= a||i<=c;i++) 
{
if(a%i==0 && c%i==0)
hcf=i;
}
printf("HCF=%d",hcf);
return 0;
}
