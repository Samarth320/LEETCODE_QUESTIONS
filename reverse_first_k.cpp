#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse_first_k(queue<int>&q , int k)
{	
	int i=0;
	int size = q.size();
	stack<int>s;
	
	if(k<=0 || k > size)
	return;
	
	while(i != k)
	{
		int temp = q.front();
		q.pop();
		
		s.push(temp);
		
		i++;
	}
	while(!s.empty())
	{
		int temp = s.top();
		q.push(temp);
		s.pop();
	}
	
	int j = size - k;
	
	while(j)
	{
		int temp = q.front();
		q.pop();
		q.push(temp);
		j--;
	}
}

void print(queue<int>q)
{
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
}

int main()
{
	queue<int>q;
	q.push(3);
	q.push(6);
	q.push(9);
	q.push(12);
	q.push(15);	
	
	int k=3;	
	
	cout<<"before"<<endl;
	print(q);
		
	
	reverse_first_k(q,k);
	
	cout<<"after"<<endl;
	print(q);
	
	return 0;
}
