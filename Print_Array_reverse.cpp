#include<iostream>
using namespace std;

void printarray(int arr[] , int n , int i)
{
	// base case
	if(i > n-1)
	return; 
	
	// baki recursion sambhalega
	printarray(arr , n , i+1);
	
	// 1 case solve kardo
	cout<<arr[i]<<" ";
		
}

int main()
{
    int arr[5]={10,20,30,40,50};
    int n = 5;
    int i=0;
    
    printarray(arr , n ,i);
	
	return 0;
}
