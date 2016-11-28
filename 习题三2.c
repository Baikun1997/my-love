#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	if(c==1)
			printf("Faint signals, barely perceptible");
	else
		if(c==2)
			printf("Very weak signals");
		else
			if(c==3)
					printf("Weak signals");
			else
				if(c==4)
						printf("Fair signals");
				else
					if(c==5)
						printf("Fairly good signals");
					else
						if(c==6)
								printf("Good signals");
						else
							if(c==7)
									printf("Moderately strong signals");
							else
								if(c==8)
										printf("Strong signals");
								else
									printf("Extremely strong signals");
	if(b==1)
	
		printf(", unreadable.");
	else
		if(b==2)
				printf(", barely readable, occasional words distinguishable.");
		else
			if(b==3)
				printf(", readable with considerable difficulty.");
			else
				if(b==4)
					printf(", readable with practically no difficulty.");
				else
				printf(", perfectly readable.");
					return 0;
 } 
