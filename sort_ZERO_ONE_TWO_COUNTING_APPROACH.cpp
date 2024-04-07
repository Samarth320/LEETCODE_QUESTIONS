#include<iostream>
using namespace std;

class Node
{
	public:
         int data;
         Node* next;
   
   Node(int data)
   {
   	this->data = data;
   	this->next = NULL;
   }
   	
};

void print (Node* head)
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void sort_ZERO_ONE_TWO (Node* &head)
{
	int zero_count = 0;
	int one_count = 0;
	int two_count = 0;
	
	Node* temp = head;
	
	while(temp != NULL)
	{
		if(temp->data == 0)
		zero_count++;
		
		else   if(temp->data == 1)
		       one_count++;
		       
		else  if(temp->data == 2)
		       two_count++;
		       
	  temp = temp->next;	       
	}
	
	temp = head;
	
	while(zero_count)
	{
		temp -> data = 0;
		temp = temp->next;
		zero_count--;
	}
	
	while(one_count)
	{
		temp -> data = 1;
		temp = temp->next;
		one_count--;
	}
	
	while(two_count)
	{
		temp -> data = 2;
		temp = temp->next;
		two_count--;
	}
}

int main()
{  
   Node* first = new Node(1);
   Node* second = new Node(0);
   Node* third = new Node(1);
   Node* fourth = new Node(0);
   Node* fifth = new Node(2);
   Node* sixth = new Node(0);
   
    Node* head = first;
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    
    cout<<"before"<<endl;
    print(head);  
    
    sort_ZERO_ONE_TWO(head);
    cout<<"after"<<endl;
    print(head);
    
    return 0;
}
