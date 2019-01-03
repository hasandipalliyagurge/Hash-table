#include<stdio.h>
#include<stdlib.h>

int main()
{

	int n;
	int hasharray[10];
	int i;
	int pos;
	int key;
	
	
	
	printf("Enter the number of keys- ");
	scanf("%d",&n);
	for(i=0; i<10; i++)
	{
		hasharray[i]=0;
	}
	
	printf("Enter the keys-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&key);
		pos=key%10;
		
		while(hasharray[pos]!=0)
		{
			pos=(pos+1)%10;
		}
		
		hasharray[pos]=key;
	}
	
	printf("the linear probing is: ");
	for(i=0; i<10;i++)
	{
		printf("\n hash element of %d = %d\n",i,hasharray[i]);
	}
	return 0;
}
