
#include<iostream>
using namespace std;

class Node
{
	public:
         int data;
         Node* next;
         Node* down;
   
   Node(int data)
   {
   	this->data = data;
   	this->next = NULL;
   	this->down = NULL;
   }
   	
};

void print (Node* head)
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->down;
	}
	cout<<endl;
}

Node* merge(Node* a , Node* b)
{
	if(a == NULL) return b;
	if(b == NULL) return a;
	
	Node* ans = NULL;
	if(a->data < b->data)
	{
	  ans=a;
	  a->down = merge(a->down , b);	
	}
	
	else
	{
	  ans=b;
	  b->down = merge(a, b->down);	
	}
	
	return ans;
}

Node* flatten(Node* &root)
{
	if(root == NULL)
	return NULL;
	
	Node* mergedLL = merge(root , flatten(root-> next) );
	
	return mergedLL;
}

int main()
{  // main LL
   Node* first = new Node(5);
   Node* second = new Node(10);
   Node* third = new Node(19);
   Node* fourth = new Node(28);
   
   first->next = second;
   second->next = third;
   third->next = fourth;
   fourth->next = NULL;
   
    Node* root = first;
   
   // sub-LL-1
   Node* x = new Node(7);
   Node* y = new Node(8);
   Node* z = new Node(30); 
    
    x->down = y;
    y->down = z;
    z->down = NULL;
    
    first->down = x;
    
   // sub-LL-2
   Node* m = new Node(20);
    
    m->down = 	NULL;
    
    second->down = m;
    
   // sub-LL-3
   Node* a = new Node(22);
   Node* b = new Node(50); 
    
    a->down = b;
    b->down = NULL;
    
    third->down = a;
    
   // sub-LL-4
   Node* p = new Node(35);
   Node* q = new Node(40); 
   Node* r = new Node(45); 
    
    p->down = q;
    q->down = r;
    r->down = NULL;
    
    fourth->down = p;
    
    cout<<"before"<<endl;
    print(root);
    
    root = flatten(root);
    
    cout<<"aftre"<<endl;
    print(root);
	    
    return 0;
}
