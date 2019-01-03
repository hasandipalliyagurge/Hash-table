#include<iostream>
using namespace std; 

#define table_size 20
#define prime 7

class doublehash
{
	int *hashtable;
	int curr_size;
	
	
	public:
	
		
		int hash1(int key)
		{
			return(key%table_size);
		}
		
		int hash2(int key)
		{
			return (prime-(key%prime));
		}
		
		doublehash()
		{
			hashtable=new int[table_size];
		
			for(int i=0;i<table_size;i++)
		    {
		    	hashtable[i]=-1;
			}
		}
		
		void insert_hash(int key)
		{
			int index=hash1(key);
			
			if(hashtable[index]!=-1)
			{
				int index2=hash2(key);
				int i=1;
				
				while(1)
				{
					int newindex=(index+i*index2)%table_size;
					
					if(hashtable[newindex]==-1)
					{
						hashtable[newindex]=key;
						break;
					}
					i++;
				}
				
			}
			else
			hashtable[index]=key;

		}
		
		
		void display_hash()
		{
			for(int i=0;i<table_size;i++)
			{
				if(hashtable[i]!=-1)
				{
					cout<<i<<"-->" <<hashtable[i]<<endl;
				}
				
				else
				  cout<< i <<endl;
			}
		}
};




int main()
{
	int a[]={19,27,36,10,64};
	int n=sizeof(a)/sizeof(a[0]);
	
	doublehash h;
	for (int i=0;i<n;i++)
	  h.insert_hash(a[i]);
	  
	h.display_hash();
	return 0;
}









