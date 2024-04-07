#include<iostream>
using namespace std;

void swap_alternate(int arr[], int size)
{
	void display (int arr[] , int size );   
	for(int i=0; i<size; i=i+2)
	{
		if( i+1 < size )            // checking that further element is present or not for swapping
		{
		    swap( arr[i] , arr[i+1] );
	    }
	}
	    display(arr,7);
}

void display (int arr[] , int size )
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}


int main()
{
	int arr[7]={2,4,6,8,5,9,10};
	
	cout<<"printing initial array"<<endl;
	display(arr , 7);
	
	cout<<"printing array after alternate element swapping"<<endl;
	
	swap_alternate(arr , 7);
	
	return 0;
}
