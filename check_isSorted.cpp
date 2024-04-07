#include<iostream>
using namespace std;

bool check_isSorted(int arr[] , int n , int i)
{
	// base case
	if(i > n-1)
	return true; 
	
	// 1 case solve kardo
	if(arr[i] < arr[i-1])
	{
		return false;
	}
	
	// baki recursion sambhalega
	check_isSorted(arr , n , i+1);		
}

int main()
{
    int arr[6]={10,20,30,40,50,60};
    int n = 6;
    int i=1;
    
    bool ans = check_isSorted(arr , n ,i);
    cout<<"is array sorted ?"<<" "<<ans;
	
	return 0;
}
