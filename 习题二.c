#include <stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a/100<8)
	printf("%d",(24+a/100-8)*100+a%100);
	else
	if(a/100==8)
		printf("%d",a%100);
	else
		printf("%d",(a/100-8)*100+a%100);
		return 0;
}
