#include <stdio.h> 
int main()
{
int i,b,c,a,d;
scanf("%d",&i);
a=i/100;
b=i%100;
d=b/10;
c=b%10;
printf("%d\n",c*100+d*10+a);
return 0;
}
