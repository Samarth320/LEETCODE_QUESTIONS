#include<iostream>
#include<stack>
using namespace std;

void insert_in_sorted_order(stack<int> &s , int target)
{
	// in this function we will start inserting the element from scratch
	// hence the empty stack will be initially sorted , and further we push the elements in sorted way
	
	if( s.empty() )
	{
		s.push(target);
		return;
	}
	
	
	// base case
	if( s.top() >= target )
	{
	  s.push(target);
	  return;	
	}
	
	// ek case solve karo
	int temp = s.top();
	s.pop();
	
	// recursive call karo
	insert_in_sorted_order(s , target);
	
	// preserving the elements
	s.push(temp);
}

void Sort_Stack (stack<int> &s)
{
	// in this function we are making the stack empty
	
	// base case
	if(s.empty())
	return;
	
	// ek case solve kardo
	int top_ele = s.top();
	s.pop();
	
	// recursive call karo
	Sort_Stack(s);	
	
	insert_in_sorted_order(s , top_ele);
}

int main()
{
	stack<int> s;
	s.push(7);
	s.push(11);
	s.push(3);
	s.push(5);
	s.push(9);
	
    Sort_Stack(s);

	while(! s.empty())
	{
		cout<<s.top()<<endl;;
		s.pop();
	}
	
	return 0;
}
