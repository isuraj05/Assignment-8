#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char k;
	for(i=1;i<=7;i++)
	{
		k='A';
		for(j=1;j<=13;j++)
		{
			if((j>=1&&j<=8-i)||(j>=6+i&&j<=13))
			{
				printf("%c",k);
				if(j>=7)
					k--;
				else
					k++;	
			}
			else
			{
				printf(" ");
				if(j>=7)
					k--;
				else
					k++;
			}
		}
		printf("\n");
	}	
	getch();
}
