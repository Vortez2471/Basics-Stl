#include<iostream>
#include<new>
using namespace std;

class node
{
	public:
		node* link;
		int data;
		node(int data)
		{
			this->data=data;
			this->link=NULL;
		}

};

struct node1
{
	int data;
	node1()
	{
		cout<<"#";
	}
};

int main()
{
	int *a,**b,*c,*d;

	a=new int(2012929);
	cout<<*a<<endl;

	c=new int;
	*c=10;
	cout<<*c<<endl;

	d=new int[10];

	for(int i=0;i<10;i++)
		d[i]=i;
	for(int i=0;i<10;i++)
		cout<<d[i]<<" ";
	cout<<endl;

	b=new int*[10];

	for(int i=0;i<10;i++)
	{
		b[i]=new int[10];
		for(int j=0;j<10;j++)
			b[i][j]=i*j;
	}

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}

	node* root=new node(10);
	root->link=new node(20);

	cout<<root->data<<" "<<root->link->data<<endl;

	node1* ll=new node1[10];
	cout<<endl;
	
	for(int i=0;i<10;i++)
	{
		ll[i].data=i;
	}

	for(int i=0;i<10;i++)
		cout<<ll[i].data<<" ";
	cout<<endl;

	ll[11].data=200;
	cout<<ll[11].data;
}