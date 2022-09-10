#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((j>=i&&j<=i)||(j>=10-i&&j<=10-i)||(i==1))
				printf("* ");	
			else
				printf("  ");
		}
		printf("\n");
	}	
	getch();
}
