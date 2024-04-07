#include<iostream>
using namespace std;

int first_occurence(int arr[],int size, int key)
{
	int start = 0;
	int end = size-1;
	
	int mid = (start + end)/2;          // the formula of mid is mid = start + (end -start)/2  but compiler is not supporting this here
	
	int ans = -1;
	
	while(start <= end )
	{
		if(arr[mid]==key)
		{
			ans = mid;
		    end = mid-1;
		}
	
		else
		{
			if(key > arr[mid])
			start = mid +1;
			
			else
			end = mid -1;
		}
		
	
       mid = (start + end)/2;           // always write above mid formula in coding platforms
	}
	
	return ans;
}

int last_occurence(int arr[],int size, int key)
{
	int start = 0;
	int end = size-1;
	
	int mid = (start + end)/2;          // the formula of mid is mid = start + (end -start)/2  but compiler is not supporting this here
	
	int ans = -1;
	
	while(start <= end )
	{
		if(arr[mid]==key)
		{
			ans = mid;
		    start = mid+1;
		}
	
		else
		{
			if(key > arr[mid])
			start = mid +1;
			
			else
			end = mid -1;
		}
		
	
       mid = (start + end)/2;           // always write above mid formula in coding platforms
	}
	
	return ans;
}

int main()
{
   int arr[9]={0,1,2,3,3,3,5,6,7};	
	
   int first = first_occurence(arr , 9 , 3);
   cout<<"first occurence of 3 is at index"<<" "<<first<<endl;
	
   int last = last_occurence(arr , 9 , 3);
   cout<<"last occurence of 3 is at index"<<" "<<last<<endl;	
	
	
	return 0;
}

/* CODE_STUDIO CODE
#include <bits/stdc++.h>

int first_occurence(vector<int>& arr,int size, int key)
{
	int start = 0;
	int end = size-1;
	
	int mid = (start + end)/2;          // the formula of mid is mid = start + (end -start)/2  but compiler is not supporting this here
	
	int ans = -1;
	
	while(start <= end )
	{
		if(arr[mid]==key)
		{
			ans = mid;
		    end = mid-1;
		}
	
		else
		{
			if(key > arr[mid])
			start = mid +1;
			
			else
			end = mid -1;
		}
		
	
       mid = (start + end)/2;           // always write above mid formula in coding platforms
	}
	
	return ans;
}

int last_occurence(vector<int>& arr,int size, int key)
{
	int start = 0;
	int end = size-1;
	
	int mid = (start + end)/2;          // the formula of mid is mid = start + (end -start)/2  but compiler is not supporting this here
	
	int ans = -1;
	
	while(start <= end )
	{
		if(arr[mid]==key)
		{
			ans = mid;
		    start = mid+1;
		}
	
		else
		{
			if(key > arr[mid])
			start = mid +1;
			
			else
			end = mid -1;
		}
		
	
       mid = (start + end)/2;           // always write above mid formula in coding platforms
	}
	
	return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int ,int> p;

    p.first =first_occurence(arr , n ,k);      // these are actual/argument values so we write directly arr ,n,k
    p.second =last_occurence(arr , n ,k);

    return p;
}
*/
