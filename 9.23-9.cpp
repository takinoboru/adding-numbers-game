#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	printf("Game starts!\n") ;
	long a,b;
	int c,ret,sum=0,SUM,fact;
	srand(time(NULL));
	a=rand()%2+1;
	if (a%2==0)
	{
		fact = 1;
		printf("I go first!\n");
	}
	else 
	{
		fact = 0;
		printf("You go first!\n");
	}
	if (fact == 1)
	{
		for (;fact==1,sum<=30;)
		{
			if((30-sum)%3==1)
			{
				sum+=1;
				printf("I choose to add\"1\"\n");
			}
			else if((30-sum)%3==2)
			{
				sum+=2;
				printf("I choose to add\"2\"\n");
			}	
			else if((30-sum)%3==0)
			{
				srand(time(NULL));
				b = rand()%2;
				if (b%2==0)
				{
					sum+=1;
					printf("I choose to add\"1\"\n");
				}
				else
				{
					sum+=2;
					printf("I choose to add\"2\"\n");
				}
			}
			if (sum==30)
			{
				printf("You lose!\n");
				exit(0);
			}
			if (sum>30)
			{
				printf("I made a mistake¡­You win!\n");
				exit(0);
			}
			SUM=sum;
			printf("sum=%d\n",sum);
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
						exit(0);
					}
					if (sum>30)
					{
						printf("You lose!\n");
						exit(0);
					}
					break;
				}
				else 
				{
					printf("Input error!\n");
					continue;
				}
			}	
		}
	}
	for (;fact==0,sum<=30;)
	{
		SUM=sum;
		printf("sum=%d\n",sum);
		for (;sum==SUM;)
		{
			printf("Please input your number(1/2):");
			scanf("%d",&ret);
			if (ret==1||ret==2)
			{
				sum+=ret;
				break;
			}
			else 
			{
				printf("Input error!\n");
				continue;
			}
		}
		if((30-sum)%3==1)
		{
			sum+=1;
			printf("I choose to add\"1\"\n");
		}
		else if((30-sum)%3==2)
		{
			sum+=2;
			printf("I choose to add\"2\"\n");
		}
		else if((30-sum)%3==0)
		{
			srand(time(NULL));
			b = rand()%2;
			if (b%2==0)
			{
				sum+=1;
				printf("I choose to add\"1\"\n");
			}
			else
			{
				sum+=2;
				printf("I choose to add\"2\"\n");
			}
		}
		if (sum==30)
		{
			printf("You lose!\n");
			exit(0);
		}
		if (sum>30)
		{
			printf("I made a mistake¡­You win!\n");
			exit(0);
		}
	}
	return 0;
}

