#include<stdio.h>
struct pair
{
	int value;
	int key;
};

void display(struct pair array[],int size);
void main()
{
	int size;
	int i;
	int temp;
	
	printf("enter the size of the table- ");
	scanf("%d",&size);
	
	struct pair hash_table[size];
	printf("enter the elements- \n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&temp);
		hash_table[temp%size].value=temp;
		hash_table[temp%size].key=temp%size;
	}
	
	printf("\n");
	display(hash_table,size);
}


void display(struct pair array[],int size)
{
    int i;
    
    printf("value\tKey \n");
    for(i=0; i<size; i++)
    {
    	printf("%d\t%d \n",array[i].value,array[i].key);
	}
}


