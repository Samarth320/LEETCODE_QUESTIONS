#include<iostream>
using namespace std;

int main()
{
	int arr[8]={1,1,0,0,0,0,1,0};
	
	int left=0;
	int right=7;    //high = n-1
	
	
	while(left < right)
	{
		while(arr[left]==0 && left < right )
		left++;
		
		
	    while(arr[right]==1 && left < right)
	    right--;
	
		   	 
		if(left < right)                      // at this stage means arr[left]=1 and arr[right] = 0
		
		   	 swap(arr[left],arr[right]);
		   	 left++;
		   	 right--;
		   
	}
	
	
	cout<<"array after sort"<<endl;	
	for(int i=0; i<8; i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	return 0;
}
