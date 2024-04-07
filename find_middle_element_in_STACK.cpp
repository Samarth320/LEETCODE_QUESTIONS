#include<iostream>
#include<stack>
using namespace std;

void find_middle(stack<int> &s , int total_size)
{
	if(s.size() == 0)
	{
		cout<<"there is no element in a stack"<<endl;
		return;
	}
	
	// base case
	if(s.size() == total_size/2 +1)
	{
		cout<<"middle element is "<<s.top()<<endl;
		return;
	}
	
	int temp = s.top();
	s.pop();
	
	// recursive call
	find_middle(s , total_size);
	
	s.push(temp);
}

int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	
	int total_size = s.size();
	
	find_middle(s , total_size);

	while(! s.empty())
	{
		cout<<s.top()<<endl;;
		s.pop();
	}
	
	return 0;
}
