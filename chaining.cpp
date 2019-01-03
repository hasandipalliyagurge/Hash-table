#include<iostream>
#include<vector>
#define m 11
using namespace std;

vector <int> hash[m];

void hash_function(int n)
{
	int index;
	index=n%m;
	hash[index].push_back(n);
	
	
}

void print()
{
	int i,j;
	for(i=0;i<m;i++)
	{
		cout<< i;
		for (j=0;j<hash[i].size();j++)
		{
			cout<<"->"<< hash[i][j];
		}
		cout<< "-> NULL" <<endl;
		
	}
}

void search(int n)
{
	int index,i;
	index=n%m;
	for(i=0;i<hash[index].size();i++)
	{
		if(hash[index][i]==n)
		{
			cout<< n<< "is in the table"<<endl;
			cout<<"index- " <<index<<"- "<<i <<endl;
			return;
		}
		
	}
	cout << n <<"is not in the table" <<endl;
	
}


void remove(int n)
{
	int index,i;
	index=n%m;
	for(i=0;i<hash[index].size();i++)
	{
		if(hash[index][i]==n)
		{
			cout<<n<<"is in the table, deleted successfully" <<endl;
			hash[index].erase(hash[index].begin()+i);
			return;
		}
	}
	
	cout<<"element is not in the table.deletion unsuccessful" <<endl;
}


int main()
{
	hash_function(22);
	hash_function(1);
	hash_function(13);
	hash_function(11);
	hash_function(24);
	hash_function(33);
	
	print();
	search(24);
	search(33);
	remove(1);
	search(1);
	print();
}




