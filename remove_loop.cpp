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

void remove_loop(Node* &head)
{
	if(head == NULL)
	{
		cout<<"LL is empty"<<endl;
	}
	
	Node* slow = head;
	Node* fast = head;
	
	while(fast != NULL)
	{
		fast = fast->next;
		
		if(fast != NULL)
		{
			fast = fast->next;
			slow = slow->next;
			
			// here we have completed 1 iteration i.e fast moves twice and slow moves once , hence we check whether both are pointing to same node or not
			if(slow == fast)
			{
				slow = head;
				break;
			}
		}
	}
	
	Node* prev = fast; 
	while(slow != fast)
	{
		prev = fast;
		slow = slow->next;
		fast = fast->next;
	}
	
	// removing loop
	prev->next = NULL;
	cout<<"loop removed successfully which was formed at node"<<" "<<fast->data<<"th"<<endl;
}

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

int main()
{  
   Node* first = new Node(1);
   Node* second = new Node(2);
   Node* third = new Node(3);
   Node* fourth = new Node(4);
   Node* fifth = new Node(5);
   Node* sixth = new Node(6);
   Node* seventh = new Node(7);
   Node* eighth = new Node(8);
   Node* ninth = new Node(9);
   
    Node* head = first;
    
    first->next = second;++++
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fourth;
    
    remove_loop(head);
    cout<<"printing after removing loop"<<endl;
    print(head);
      
    return 0;
}
