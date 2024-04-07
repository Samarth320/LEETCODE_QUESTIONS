#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr , int target)
{
	// base case
	if(target==0)
	{
		return 0;
	}
	
	if(target<0)
	{
		return INT_MAX;
	}
	
	// ek case solve kardo aur baaki recursion dekh lega
	int mini = INT_MAX;
	for(int i=0; i<arr.size(); i++)
	{
		int ans = solve(arr , target - arr[i]);
		
		if(ans != INT_MAX)
		mini = min(mini , ans+1);
	}
	
	return mini;
}

int main()
{
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	
	int target;
	cout<<"enter target value"<<endl;
	cin>>target;
	
	int ans = solve(arr , target);
	cout<<"minimum numbers to create"<<" "<<target <<" "<<"is"<<" "<<ans;
	
	return 0;
}
