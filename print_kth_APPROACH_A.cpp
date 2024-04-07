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

Node* print_kth(Node* &head , int pos)
{
	head = reverse(head);
	
//	if(pos == 0)
//	return head;
	
	Node* temp = head;
	int count = 0;
	
	while(count != pos)
	{
		temp = temp->next;
		count++;
	}
	cout<< temp->data;
}

int main()
{ 
   Node* x = new Node(2);
   Node* y = new Node(3);
   Node* z = new Node(4);
   Node* a = new Node(5);
   Node* b = new Node(6);
    
    
    x->next = y;
    y->next = z;
    z->next = a;
    a->next = b;
    b->next = NULL; 
    
    Node* head = x;
    
    int pos = 2;
	print(head); 
    print_kth(head , pos);
    return 0;
}
