#include<iostream>
using namespace std;


int main()
{
	int arr[5]={1,3,2,4,1};
	
	cout<<"finding duplicate element"<<endl;
	
    int ans=0;
    
    // taking XOR of main array
	for(int i=0; i<5; i++)
	{
		ans = ans ^ arr[i];
	}
	
	// taking XOR of ans with array of (i to n-1)
	for(int i=1; i<5; i++)
	{
		ans = ans ^ i;
	}
	
	cout<<"duplicate element is"<<" "<<ans;
	return 0;
}

/*
this can be also done in this way but on coding platform it will become complex as array size goes on changing for testcases

int arr[5]={1,3,2,4,1};      // main array

int new[5]={1,2,3,4,0};   // array of (i to n-1)

  int ans=0;

//taking XOR of main array with new array so the all similar elements will be 0 and we will get the duplicate elements
	
	for(int i=0; i<5; i++)
	{
		ans = ans ^ arr[i] ^ new[i];
	}
	
     cout<<"duplicate element is"<<ens;

*/















