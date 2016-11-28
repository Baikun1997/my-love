#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	c=1;
	d=0;
	scanf("%d",&a);
	while(a>0){
		if(a%2==c%2)
		b=1;
		else
		b=0;
		a=a/10;
		d=pow(2,c-1)*b+d;
		c++; 
		
	}
	printf("%d",d);
return 0;
}
 
