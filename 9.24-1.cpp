#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void UserAct (int);
void ComputerAct (int);
int b,a,c,ret,sum=0,SUM;
int main(void)
{
	printf("Game starts!\n") ;
	srand(time(NULL));
	switch (rand()%2)
	{
		case 1:	printf("I go first!\n");
				for (;sum<30;)
				{
					ComputerAct(sum);
					printf("sum=%d\n",sum);
					UserAct(sum);
				}
		case 0:	printf("You go first!\n");
				for (;sum<30;)
				{
					printf("sum=%d\n",sum);
					UserAct(sum);
					ComputerAct(sum);
				}
	}
	return 0;
}
void UserAct (int)
{
	SUM=sum;
	for (;sum==SUM;)
	{
		printf("Please input your number(1/2):");
		scanf("%d",&ret);
		if (ret==1||ret==2)
		{
			sum+=ret;
			if (sum==30)
			{
				printf("You win!\n");
			}
			if (sum>30)
			{
				printf("You lose!\n");
			}
		}
		else 
		{
			printf("Input error!\n");
			continue;
		}
	}
}
void ComputerAct (int)
{
	c=(30-sum)%3;
	if (c==1||c==2)
	{
		sum+=c;
		printf("I choose to add\"%d\"\n",c)	;
	}
	else
	{
		srand(time(NULL));
		b=rand()%2+1;
		sum+=b;
		printf("I choose to add\"%d\"\n",b);
	}
	if (sum==30)
	{
		printf("You lose!\n");
	}
}
