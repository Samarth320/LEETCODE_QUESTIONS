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

Node* Rotate_LL(Node* &head , int k)
{
	if(head == NULL)
	return head;
	
	int len = Find_length(head);
	
	// actual length
	int actual_rotate_k = (k % len);
	
	if(actual_rotate_k == 0)
	return head;
	
	// finding new last node position which will be after rotate
	int new_last_node_POS = (len - actual_rotate_k - 1);
	Node* new_last_node = head;
	
	// iterating to new last node position
	for(int i=0; i<new_last_node_POS; i++)
	{
	   new_last_node = new_last_node->next;	
	}
	
	// head will be last node's next
	Node* new_head = new_last_node -> next;
	
	// breaking the link
	new_last_node -> next = NULL;
	
	//iterating from new_last_node's next node i.e new_head which will form at the end to last node 
	Node* iterator = new_head;
	while(iterator->next != NULL)
	{
	   iterator = iterator->next;	
	}
	iterator->next = head;
	
	return new_head;
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
    
    cout<<"before"<<endl;
    print(head);  
    
    int k = 3;
	Node* new_head = Rotate_LL(head , k);
	cout<<"after"<<endl;
	print(new_head);    
    return 0;
}
