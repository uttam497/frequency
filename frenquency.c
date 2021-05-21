#include<stdio.h>
void main()
{
	int ar[10],i;
	printf("enter marks");
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=1;i<=100;i++)
	{
	int c=0;
	for(int j=0;j<10;j++)
	{
		if(i==ar[j])
		{
			c++;
		}
	}
		printf("%d occurs %d times\n",i,c);
	
	
	}
}
