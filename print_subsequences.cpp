#include<iostream>
using namespace std;

void print_subsequences (string str , string output , int i)
{
	// base case
	if(i >= str.length())
	{
		cout<<output<<" ";
		return;
	}
	
	// exclude
	print_subsequences(str , output ,i+1);
	
	//include
	output.push_back(str[i]);
	print_subsequences(str , output ,i+1);
}

int main()
{
	string str ="abc";
	string output="";
	int i=0;
	
	print_subsequences(str , output ,i);
	
	return 0;
}
