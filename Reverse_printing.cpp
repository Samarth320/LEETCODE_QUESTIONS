#include<iostream>
using namespace std;

void printcounting(int n)
{
	// base
	if(n==0)
	return;
	
	// processing
	cout<<n<<" ";
	
	// recrsive call
	printcounting(n-1);
}

int main()
{
	int n;
	cin>>n;
	
	printcounting(n);
	return 0;
}
