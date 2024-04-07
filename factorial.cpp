#include<iostream>
using namespace std;

int factorial(int n)
{
	//base
	if(n==1)
	return 1;
	
	// processing and recursive call
	int ans = n * factorial(n-1);
	
	return ans;
}

int main()
{
	int n;
	cin>>n;
	
	int ans = factorial(n);
	cout<<"factorial is"<<" "<<ans<<endl;
	return 0;
}
