#include<stdio.h>

int main(){

int a,b;
char w;
scanf("%d,%d,%c",&a,&b,&w);

switch (w){
case '+':
printf("%d\n",a+b);
break;
case '-':
printf("%d\n",a-b);
break;
case '*':
printf("%d\n",a*b);
break;
case '/':
printf("%d\n",a/b);
break;
default:
printf("lnvalid operator\n");
}
return 0;
}