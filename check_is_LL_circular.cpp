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

bool check_is_LL_circular(Node* head)
{
	Node* temp = head;
	
	while(true)
	{
		temp = temp->next;
		
		if(temp->next == head)
		{
			cout<<"LL is circular"<<endl;
			return true;
		}
		
		if(temp->next == NULL)
		{
			cout<<"LL is not circular"<<endl;
			return false;
		}
	}
}


int main()
{
   	
   	Node* first = new Node(1);
   	Node* second = new Node(2);
   	Node* third =  new Node(3);
   	Node* fourth = new Node(4);
   	Node* fifth = new Node(5);
   	
   	
   	Node* head = first;
   	
   	first -> next = second;
   	second -> next = third;
   	third -> next = fourth;
   	fourth -> next = fifth;
   	fifth -> next = head;

	cout<<"hence bool function returns"<<" "<<check_is_LL_circular(head)<<endl;
	
	return 0;
}
