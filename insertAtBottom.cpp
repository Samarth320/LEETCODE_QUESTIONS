#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s , int target)
{
	// base case
	if(s.empty())
	{
		s.push(target);
		return;
	}
	
	int temp = s.top();
	s.pop();
	
	// recursive call
	solve(s , target);
	
	s.push(temp);
}


void insertAtBottom(stack<int> &s)
{
	if(s.empty() )
	{
		cout<<"stack is empty can't insert at bottom"<<endl;
		return;
	}
	
	int target = s.top();
	s.pop();
	
	solve(s , target);
}


int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
    insertAtBottom(s);

	while(! s.empty())
	{
		cout<<s.top()<<endl;;
		s.pop();
	}
	
	return 0;
}
