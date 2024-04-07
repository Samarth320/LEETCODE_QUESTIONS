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

Node* sort2 (Node* &head)
{
	Node* zeroHead = new Node(-1);
	Node* zeroTail = zeroHead;
	
	Node* oneHead = new Node(-1);
	Node* oneTail = oneHead;
	
	Node* twoHead = new Node(-1);
	Node* twoTail = twoHead;
	
	Node* curr = head;
	
	while(curr != NULL)
	{
		if(curr -> data == 0)
		{
			Node* temp = curr;
			curr = curr->next;
			temp -> next = NULL;
			
			zeroTail -> next = temp;
			zeroTail = temp;
		}
		
		else if(curr -> data == 1)
		   {
			Node* temp = curr;
			curr = curr->next;
			temp -> next = NULL;
			
			oneTail -> next = temp;
			oneTail = temp;
		   }
		   
		   
		else if(curr -> data == 2)
	       {
			Node* temp = curr;
			curr = curr->next;
			temp -> next = NULL;
			
			twoTail -> next = temp;
			twoTail = temp;
		   } 
	}
	
	// removing -1 from all dummy linked list
	
	Node* temp = oneHead;
	oneHead = oneHead->next;
	temp->next = NULL;
	delete temp;
	
	temp = twoHead;
	twoHead = twoHead->next;
	temp->next = NULL;
	delete temp;
	
	temp = zeroHead;
	zeroHead = zeroHead->next;
	temp->next = NULL;
	delete temp;
	
	// joining all the LL
	
	if(oneHead != NULL)
	{
		zeroTail -> next = oneHead;
		
		if(twoHead != NULL)
		oneTail -> next = twoHead;
	}
	
	else
	{
		if(twoHead != NULL)
		{
		  zeroTail -> next = twoHead;	
		}
	}
		
	return zeroHead;
}

int main()
{  
   Node* first = new Node(0);
   Node* second = new Node(1);
   Node* third = new Node(2);
   Node* fourth = new Node(1);
   Node* fifth = new Node(0);
   Node* sixth = new Node(2);
   
    Node* head = first;
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    
    cout<<"before"<<endl;
    print(head);  
    
    sort2(head);
    cout<<"after"<<endl;
    print(head);  
    
    return 0;
}
