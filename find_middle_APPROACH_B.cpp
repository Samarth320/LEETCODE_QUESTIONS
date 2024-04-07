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

Node* get_middle(Node* head)
{
	// LL empty
	if(head == NULL)
	{
		cout<<"LL is empty"<<endl;
		return head;
	}
	
	// only one node
	if(head->next == NULL)
	return head;
	
	
	Node* slow = head;
	Node* fast = head->next;  // for getting middle as 3 in the linked list 1 2 3 4 5 6
//  Node* fast = head;          for getting middle as 4 in the linked list 1 2 3 4 5 6	
	
	while(slow != NULL && fast != NULL)
	{
		fast = fast->next;
		
		if(fast != NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}
	}
	
	return slow;	
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
   
    Node* head = first;
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    
    
    print(head);
    cout<<"middle node is"<<" "<<get_middle(head)->data<<endl;
      
    return 0;
}
