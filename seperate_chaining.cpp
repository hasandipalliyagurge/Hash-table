#include<stdio.h>
#include<stdlib.h>
#define size 10
struct node
{
    int data;
    struct node *next;
};
struct node *hash[size];
void Hash_Table()
{
    int i;
    for(i = 0; i < size; i++)
        hash[i] = NULL;
}
void insert(int value)
{    
    struct node *newNode =(struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;   
    int key = value % size;    
    if(hash[key] == NULL)
        hash[key] = newNode;   
    else
    {      
        struct node *temp = hash[key];
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print()
{
    int i;
    for(i = 0; i < size; i++)
    {
        struct node *temp = hash[i];
        printf("hash[%d]-->",i);
        while(temp!=NULL)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{ 
    Hash_Table();
    insert(10);
    insert(10);
    insert(4);
    insert(20);
    insert(7);
    insert(3);
    print();
    return 0;
}
