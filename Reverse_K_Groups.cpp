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

int Find_length(Node* head)
{
	Node* temp = head;
	int len =0;
	
	while(temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return len;
}

Node* Reverse_K_Groups(Node* &head , int k)
{
	if(head == NULL)
	{
		cout<<"LL is empty"<<endl;
		return head;
	}
	
	if( k > Find_length(head) )
	return head;
	
	// ek case solve kardo
	Node* prev = NULL;
	Node* curr = head;
	Node* forward = curr->next;
	int count= 0;
	
	while(count < k )
	{
		forward = curr->next;
		curr->next = prev;
		
		prev = curr;
		curr = forward;
		count++;
	}
	
	if(forward != NULL)
	{
		head->next = Reverse_K_Groups(forward , k);
	}
	
	return prev;
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
    Node* temp = Reverse_K_Groups(head , 3);
    print(temp);
    
      
    return 0;
}
