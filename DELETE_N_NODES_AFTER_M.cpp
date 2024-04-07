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

void function (Node* &head , int M , int N)
{
	if(head == NULL)
	return;
	
	Node* it = head;
	for(int i=0; i<M-1; i++)
	{
		if(it == NULL)
		return;
		
		it = it->next;
	}
	if(it == NULL)
	return;
	
	Node* Mth_node = it;
	it = Mth_node ->next;
	
	for(int i=0; i<N; i++)
	{
		if(it == NULL)
		break;
		
		Node* temp = it->next;
		delete it;
		it = temp;
	}
	
	Mth_node -> next = it;
	function(it , M , N);
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
    
	int N=1;
	int M=2;
	
	cout<<"before"<<endl;
	print(head);
	
	function(head , M , N);
	
	cout<<"after"<<endl;
	print(head);
	   
    return 0;
}
