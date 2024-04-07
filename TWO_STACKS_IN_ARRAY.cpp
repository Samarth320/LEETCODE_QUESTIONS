#include<iostream>
using namespace std;

class stack
{
  public:
     int* arr;
	 int top1;
	 int top2;
	 int size;
	 	
	 stack(int size)
	 {
	 	arr = new int[size];
	 	this->size = size;
	 	this->top1 = -1;
	 	this->top2 = size;
	 }	
	 
		 
	 void push_1(int data)
	 {
	 	if(top2 - top1 == 1)
	 	cout<<"stack_1 overflow, can't push"<<endl;
	 	
	 	else{
	 		top1++;
	 		arr[top1]=data;
		 }
	 }
	 
	  void push_2(int data)
	 {
	 	if(top2 - top1 == 1)
	 	cout<<"stack_2 overflow, can't push"<<endl;
	 	
	 	else{
	 		top2--;
	 		arr[top2]=data;
		 }
	 }
	 
	 void pop_1()
	 {
	 	if(top1 == -1)
	 	cout<<"stack_1 underflow"<<endl;
	 	
	 	else{
	 		top1--;
		 }
	 }
	 
	 void pop_2()
	 {
	 	if(top2 == size)
	 	cout<<"stack_2 underflow"<<endl;
	 	
	 	else{
	 		top2++;
		 }
	 }
};

int main()
{
	stack s(6);
	
	s.push_1(21);
	s.push_1(22);
	s.push_1(23);
	s.push_2(10);
	s.push_1(24);
	s.push_2(55);
	
	s.push_1(45);
	s.push_2(12);
	
	while(s.top1 != -1 || s.top2 != s.size)
	{
		s.pop_1();
		s.top1--;
		
		s.pop_2();
		s.top2++;
	}
	
	s.pop_1();
	s.pop_2();
		
	return 0;
}


















