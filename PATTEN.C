#include<stdio.h>
#include<conio.h>

int i,j,count=1,k,n=97;

/*
void patten()
{

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

}
void patten2()
{
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
void patten3()
{

	for(i=0;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",count);
			count++;
		}
		printf("\n");
	}

}

void patten4()
{
	for(i=5;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");

		}
		for(k=1;k<=count;k++)
		{
		printf("*");
		}
		printf("\n");
		count++;

	}
}
void patten5()
{
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",n);
		}
		printf("\n");
		n++;
	}
}         */
void patten6()
{
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
void main()
{
clrscr();
patten6();
}
