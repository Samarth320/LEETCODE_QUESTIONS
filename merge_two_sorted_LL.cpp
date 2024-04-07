
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

Node* merge_two_sorted_LL(Node* &head1 , Node* &head2)
{
	Node* left = head1;
	Node* right = head2;
	
	Node* ans = new Node(-1);
	Node* mptr = ans;
	
	while(left != NULL && right != NULL)
	{
		if(left -> data <= right->data)
		{
			mptr->next = left;
			mptr = left;
			left = left->next;
		}
		
		else
		{
			mptr->next = right;
			mptr = right;
			right = right->next;			
		}
	}
	
	if(left != NULL)
	{
		mptr->next = left;
	}
	
	if(right != NULL)
	{
		mptr->next = right;
	}
	
	return ans->next;
}

int main()
{  // LL one
   Node* first = new Node(1);
   Node* second = new Node(3);
   Node* third = new Node(5);
   
   first->next = second;
   second->next = third;
   third->next = NULL;
   
    Node* head1 = first;
   
   // LL two 
   Node* x = new Node(2);
   Node* y = new Node(4);
   Node* z = new Node(5); 
   Node* a = new Node(6); 
    
    x->next = y;
    y->next = z;
    z->next = a;
    a->next = NULL;
    
    Node* head2 = x;
    
    cout<<"before"<<endl;
    print(head1);  
    print(head2); 
   
   cout<<"after"<<endl; 
   Node* temp = merge_two_sorted_LL(head1 , head2);
   print(temp);
	    
    return 0;
}
