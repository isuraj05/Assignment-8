#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{
		k='A';
		for(j=1;j<=7;j++)
		{
			if(j>=i&&j<=8-i)
			{
				printf("%c",k);
				if(j>=4)
					k--;
				else
					k++;	
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}	
	getch();
}
