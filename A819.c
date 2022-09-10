#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=0;
	char s[10]="MySirG";
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=19;j++)
		{
			if(i<4)
				if(j>=4-i&&j<=6+i||j>=14-i&&j<=16+i)
					printf("* ");
				else 
					printf("  ");
			else
				if(j>=5-i&&j<=i+2||j>=17-i&&j<=15+i)
					printf("* ");
				else
				{
					printf("%c ",s[k]);
					k++;
				}
		}
		printf("\n");
	}
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=19;j++)
		{
			if(j>=i+1&&j<=19-i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	getch();
}
