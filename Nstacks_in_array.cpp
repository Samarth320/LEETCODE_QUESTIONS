#include<iostream>
using namespace std;

class Nstacks
{
  int *a , *next , *top;
  int n;
  int size;
  int freespot;
  
  public:
  		Nstacks(int _n , int _size):n(_n) , size(_size)
		  {
		  	freespot = 0;
		  	a = new int[size];
		  	next = new int[size];
		  	top = new int[n];
		  	
		  	for(int i=0; i<n; i++)
		  	{
		  	  top[i]=-1;	
			}
			
			for(int i=0; i<size; i++)
			{
				next[i] = i+1;
			}
			next[size-1] = -1;
		  }	
		  
		  bool push(int X , int m)
		  {
		  	if(freespot == -1)
		  	return false;
		  	
//		  	1.find index
			int index = freespot;
			
//			2.update freespot
			freespot = next[index];
			
//			3.push into a	
			a[index] = X;
			
//			4.update next array with the next element after top
			next[index] = top[m-1];
			
//			5.update top 	
			top[m-1] = index;
			
			return true;
		 }
		 
		 int pop(int m)
		 {
		 	if(top[m-1] == -1)
		 	return -1;
		 	
		 	int index = top[m-1];
		 	
		 	top[m-1] = next[index];
		 	
		 	int popped_element = a[index];
		 	
		 	next[index] = freespot;
		 	
		 	freespot = index;
		 	
		 	return popped_element;
		 }
		 
		 ~Nstacks()
		 {
		 delete[]a;
		 delete[]next;
		 delete[]top;	
		 }
};

int main()
{
	Nstacks s(3,6);
	cout<<s.push(10,1)<<endl;
	cout<<s.push(45,2)<<endl;
	cout<<s.push(66,3)<<endl;
	cout<<s.push(74,1)<<endl;
	cout<<s.push(11,1)<<endl;
	cout<<s.push(12,2)<<endl;
	cout<<s.pop(2)<<endl;
	
	
	
	
	return 0;
}



