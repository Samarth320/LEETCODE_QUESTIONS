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

Node* reverse(Node* &head)
{
	Node* prev = NULL;
	Node* curr = head;
	Node* forward = curr->next;
	
	while(curr != NULL)
	{
	   forward = curr->next;
	   curr->next = prev;
	   
	   prev=curr;
	   curr=forward;	
	}
	return prev;
}

Node* add_LL (Node* &head1 , Node* &head2)
{
	head1 = reverse(head1);
	head2 = reverse(head2);
	
	
	Node* ansHead = NULL;
	Node* ansTail = NULL;
	int carry = 0;
	
	while(head1 != NULL && head2 != NULL)
	{
		int sum = carry + head1 -> data + head2 -> data;
		int digit = sum % 10;
		carry = sum/10;
		
		Node* newnode = new Node(digit);
		
		if(ansHead == NULL)
		{
		   ansHead = newnode;
		   ansTail = newnode;
		}
		
		else
		{
			ansTail -> next = newnode;
			ansTail = newnode;			
		}
		
		head1 = head1 -> next;
		head2 = head2 -> next;
	}
	
	while(head1 != NULL)
	{
		int sum = carry + head1 -> data;
		int digit = sum % 10;
		carry = sum/10;	
		
		Node* newnode = new Node(digit);
		ansTail -> next = newnode;
		ansTail = newnode;	
		head1 = head1 -> next;
	}
	
	while(head2 != NULL)
	{
		int sum = carry + head2 -> data;
		int digit = sum % 10;
		carry = sum/10;	
		
		Node* newnode = new Node(digit);
		ansTail -> next = newnode;
		ansTail = newnode;	
		head2 = head2 -> next;
	}
	
	while(carry != 0)
	{
		int sum = carry;
		int digit = sum % 10;
		carry = sum/10;
		Node* newnode = new Node(digit);
		ansTail -> next = newnode;
		ansTail = newnode;	
	}
	
	ansHead = reverse(ansHead);
	return ansHead;
}

int main()
{  // LL one
   Node* first = new Node(2);
   Node* second = new Node(4);
   
   first->next = second;
   second->next = NULL;
   
    Node* head1 = first;
   
   // LL two 
   Node* x = new Node(2);
   Node* y = new Node(3);
   Node* z = new Node(4); 
    
    x->next = y;
    y->next = z;
    z->next = NULL;
    
    Node* head2 = x;
    
    cout<<"before"<<endl;
    print(head1);  
    print(head2); 
	
	Node* new_head = add_LL(head1 , head2); 
    cout<<"after"<<endl; 
    print(new_head);  
    
    return 0;
}
