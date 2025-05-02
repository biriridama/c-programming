#include<stdio.h>

int main(){

int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(b="+")
printf("%d\n",a+c);
else if(b="-")
printf("%d\n",a-c);
else if(b="*")
printf("%d\n",a*c);
else if(b="/")
printf("%d\n",a/c);
else
printf("lnva\n");
return 0;
}