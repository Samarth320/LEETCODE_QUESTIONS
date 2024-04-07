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

void Remove_duplicates_from_LL(Node* &head)
{
	// LL empty
	if(head == NULL)
	{
		cout<<"LL is empty"<<endl;
		return ;
	}
	
	// only one node
	if(head->next == NULL)
	return;
	
	Node* curr = head;
	
	while(curr != NULL)
	{
		if( (curr->next != NULL) && curr->data == curr->next->data )
		{
			Node* temp = curr->next;
			
			curr->next = curr->next->next;
			
			// deleteing duplicate vali node
			temp->next = NULL;
			delete temp;
		}
		
		else
		{
			curr = curr->next;
		}
	}
}


int main()
{  
   Node* first = new Node(1);
   Node* second = new Node(2);
   Node* third = new Node(2);
   Node* fourth = new Node(3);
   Node* fifth = new Node(4);
   Node* sixth = new Node(4);
   
    Node* head = first;
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    
    
    print(head); 
    
    Remove_duplicates_from_LL(head);
    cout<<"duplicates removed successfully"<<endl;
    
    print(head); 
    
    return 0;
}
