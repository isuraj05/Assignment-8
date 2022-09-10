#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		k=1;
		for(j=1;j<=7;j++)
		{
			if((j>=1&&j<=5-i)||(j>=3+i&&j<=7))
			{
				printf("%d",k);
				if(j<=3)
					k++;
				else
					k--;
			}
			else
			{
				printf(" ");
				if(j<=3)
					k++;
				else
					k--;

			}	
		}
		printf("\n");
	}	
	getch();
}
