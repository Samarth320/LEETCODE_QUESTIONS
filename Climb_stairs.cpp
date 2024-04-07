#include<iostream>
using namespace std;

int climbstairs(int n)
{
	// base case
	if(n==0 || n==1)
	{
		return 1;
	}
	
	// 1 case solve kardo baki recursion sambhalega
	int ans = climbstairs(n-1) + climbstairs(n-2);
	
	return ans;
}

int main()
{
	int n;
	cout<<"enter the nth stair to find the ways to reach by climbing 1 or 2 stairs at a time"<<endl;
	cin>>n;
	
	int ans = climbstairs(n);
	cout<<"total no of ways are"<<" "<<ans<<endl;
	
	return 0;
}
