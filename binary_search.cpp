#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> v , int s, int e, int key)
{
	// base case
	if(s > e)
	return -1;
	
	int mid = (s+e)/2;
	
	// base case and also 1 case solve kardo
	if(v[mid]==key)
	return mid;
	
	// baki recursion sambhalega
	if(v[mid] < key)
	return binary_search( v ,mid+1 , e , key);
	
	if(v[mid] > key)
	return binary_search( v ,s , mid-1 , key);
}

int main()
{
   vector<int> v;
   v.push_back(4);
   v.push_back(25);
   v.push_back(45);
   v.push_back(75);
   v.push_back(88);
   
   int n=v.size();
   int s=0;
   int e=n-1;
   int target = 75;
   
   int ans = binary_search(v,s,e,target);
   
   cout<<"answer is"<<ans<<endl;
   	
	return 0;
}
