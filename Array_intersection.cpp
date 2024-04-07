#include<iostream>
using namespace std;


int main()
{
	int arr1[6]={1,2,2,2,3,4};
	
	int arr2[5]={2,2,3,3,4};
		
	cout<<"finding intersection"<<endl;
	
	int i=0, j=0;
	
    while( i<6 && j<5 )
    {
    	if(arr1[i] < arr2[j] )
    	{
    		i++;
		}
		
	      if(arr1[i] == arr2[j] )
         	{
    		cout<<arr1[i]<<" ";
    		i++;
    		j++;
		   }
		
		 if(arr1[i] > arr2[j] )
    	{
    		j++;
		}
		
	}
	
	return 0;
}
