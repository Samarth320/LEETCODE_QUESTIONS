#include<iostream>
using namespace std;


int main()
{
	int arr[5]={2,3,5,2,5};
	
	cout<<"fiding unique element"<<endl;
	
    int ans=0;
    
	for(int i=0; i<5; i++)
	{
		ans = ans ^ arr[i];
	}
	
	cout<<"unique element is"<<" "<<ans;
	return 0;
}
