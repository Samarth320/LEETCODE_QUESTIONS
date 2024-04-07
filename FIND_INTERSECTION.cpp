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

void find_intersection(Node* head1 , Node* head2)
{
	Node* a = head1;
	Node* b = head2;
	
	while(a->next != NULL && b->next != NULL)
	{
		if(a == b)
		{
			cout<<a->data<<endl;
			return;
		}
		
		a = a->next;
		b = b->next;
	}
	
	if(a->next == NULL)
	{
		int blen = 0;
		while(b->next != NULL)
		{
			b = b->next;
			blen++;
		}
		
		b=head2;
		while(blen != 0)
		{
		  b = b->next;
		  blen--;	
		}
		
		a=head1;
		
		while(a != b)
		{
			a = a->next;
			b = b->next;
		}
		cout<<a->data;
	}
	
	if(b->next == NULL)
	{
		int alen = 0;
		while(a->next != NULL)
		{
			a = a->next;
			alen++;
		}
		
		a=head1;
		while(alen != 0)
		{
		  a = a->next;
		  alen--;	
		}
		
		b=head2;
		while(a != b)
		{
			a = a->next;
			b = b->next;
		}
		cout<<a->data;
	}
	
}


int main()
{ 
// LL 1st
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
    
    Node* head1 = x;
    
// LL 2nd    
    Node* m = new Node(10);
    Node* n = new Node(20);
    
    m->next = n;
    n->next = a;
    
    Node* head2 = m;
    
 // fun call
   find_intersection(head1 , head2);   
        
    return 0;
}
