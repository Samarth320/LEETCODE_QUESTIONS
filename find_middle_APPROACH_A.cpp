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
   
   // if you want to keep data private then use below line , always pointer i.e next must be public
   //friend void print (Node* head);	
};

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

Node* Find_middle(Node* head)
{
	int n = Find_length(head);
	
	// for even number of nodes
	if(n%2 == 0)
	{
		int togo = n/2;
		
		Node* temp = head;
		// here we have initialize temp to head that means we have already traverse node 1 , hence we decrement togo by -1 initially
		
		togo = togo - 1;
		
		while(togo != 0)
		{
			temp = temp->next;
			togo--;
		}
		return temp;
	}
	
	// for odd number of nodes
	else
	{
		int togo = n/2 + 1;
		
		Node* temp = head;
		// here we have initialize temp to head that means we have already traverse node 1 , hence we decrement togo by -1 initially
		
		togo = togo - 1;
		
		while(togo != 0)
		{
			temp = temp->next;
			togo--;
		}
		return temp;
	}
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
   Node* eight = new Node(8);
   
    Node* head = first;
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = NULL;
    
    Node* get = Find_middle(head);
    cout<<"middle node is "<<" "<< get->data<<endl;
   
    
    return 0;
}
