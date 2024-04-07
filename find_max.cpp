#include<iostream>
using namespace std;

void find_max(int arr[] , int n , int i, int& maxi)
{
	// base case
	if(i > n-1)
	return; 
	
	// 1 case solve kardo
	if(arr[i] > maxi)
	{
		maxi = arr[i];
	}
	
	// baki recursion sambhalega
	find_max(arr , n , i+1, maxi);		
}

int main()
{
    int arr[9]={10,20,30,40,50,45,77,89,25};
    int n = 9;
    int i=0;
    int maxi = INT_MIN;
    
    find_max(arr , n ,i,maxi);
    cout<<"maximum element is"<<" "<<maxi;
	
	return 0;
}
