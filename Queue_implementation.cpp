#include<iostream>
using namespace std;


class Queue
{
  public:
        int *arr;
		int size;
		int front;
		int rear;
		
		Queue(int n)
		{
		  this->size = n;
		  arr = new int[n];
		  front = 0;
		  rear = 0;	
		}	
		
		void push(int x)
		{
			if(rear == size)
			{
				cout<<"Q is full"<<endl;
			}
			else
			{
				arr[rear]=x;
				rear++;
			}
		}
		
		void pop()
		{
			if(rear==front)
			{
				cout<<"Q is empty, cant pop"<<endl;
			}
			else
			{
				arr[front]=-1;
				front++;
			}
			
			// special case
			if(front==rear)
			{
				front = rear = 0;
			}
		}
		
		int getSize()
		{
			return rear - front;   // note rear points to empty index so we didnt did (rear - front + 1)
		}
		
		bool isEmpty()
		{
			if(front == rear)
			return true;
			
			else
			return false;
		}
		
		void getFront()
		{
		  if(front == rear)
		  {
		  cout<<"Q is empty"<<endl;
		  }
		  
		  else
		  {
		  	cout<< arr[front]<<endl;
		  }
		}
		
		void print()
		{
			if(front==rear)
			cout<<"Q is empty"<<endl;
			
			else
			{
			  cout<<"printing queue"<<endl;
			
			  for(int i=front; i<rear; i++)
			  {
				cout<<arr[front]<<endl;
				arr[front]=-1;
				front++;
			  }			
			}
		}
};

int main()
{
	Queue q(6);
	
	q.push(12);
	q.push(55);
	q.push(10);
	q.push(31);
	
	int x = q.getSize();
	cout<<x<<endl;
	
	q.pop();
	
	int y = q.getSize();
	cout<<y<<endl;
	
	q.getFront();
	
	q.push(22);
	q.push(96);
	
	q.print();
	
	q.print();
	
	return 0;
}



















