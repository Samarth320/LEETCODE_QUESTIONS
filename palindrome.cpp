#include<iostream>
#include<string.h>
using namespace std;

bool checkpalindrome(char arr[])
{
	int s=0;
	int n= strlen(arr);
	int e= n-1;
	
	while(s <= e)
	{
		if(arr[s] != arr[e])
		return false;
		
		else{
			s++;
			e--;
		}
	}
	return true;
}


int main()
{
	char name[50];
	
	cin.getline(name , 50 );
	
	cout<<"is string palindrome"<<" "<<checkpalindrome(name)<<endl;
	
	return 0;
}
	
