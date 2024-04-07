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

Node* find_starting_point_of_loop(Node* &head)
{
	if(head == NULL)
	{
		cout<<"LL is empty"<<endl;
		return head;
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
	
	while(slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
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
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fourth;
    
    cout<<"starting of loop is "<<" "<<find_starting_point_of_loop(head)->data<<endl;
      
    return 0;
}
