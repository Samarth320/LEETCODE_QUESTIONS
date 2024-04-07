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

Node* find_middle(Node* head)
{
	Node* slow = head;
	Node* fast = head->next;
	
	while(fast != NULL)
	{
		fast = fast->next;
		
		if(fast != NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}
	}
	return slow;
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

bool check_palindrome(Node* head)
{
	// LL empty
	if(head == NULL)
	{
		cout<<"LL is empty"<<endl;
		return false;
	}
	
	// only one node
	if(head->next == NULL)
	return true;
	
	
	// finding middle
   	Node* middle = find_middle(head);
   	
   	// reversing after middle node
   	Node* reverse_ka_head = reverse(middle->next);
   	
   	// attached the separated LL
   	middle->next = reverse_ka_head;
   	
   	// comparing the two LL
   	Node* start1 = head;
   	Node* start2 = reverse_ka_head;
   	
   	while(start2 != NULL)
   	{
   		if(start1->data == start2->data)
   		{
   			start1 = start1->next;
   			start2 = start2->next;
		}
		
		else
		{
			cout<<"LL is not palindrome"<<endl;
			return false;
		}
    }
    cout<<"LL is palindrome"<<endl;
    return true;
}

int main()
{  
   Node* first = new Node(1);
   Node* second = new Node(2);
   Node* third = new Node(3);
   Node* fourth = new Node(3);
   Node* fifth = new Node(2);
   Node* sixth = new Node(1);
   
    Node* head = first;
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    
    
    print(head); 
    cout<<"hence bool function returns "<<" "<<check_palindrome(head)<<endl;
    
    print(head);
    return 0;
}
