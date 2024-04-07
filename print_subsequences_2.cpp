#include<iostream>
#include<vector>
using namespace std;

void print_subsequences (string str , string output , vector<string>& v , int i)
{
	// base case
	if(i >= str.length())
	{
		v.push_back(output);
		return;
	}
	
	// exclude
	print_subsequences(str , output, v ,i+1);
	
	//include
	output.push_back(str[i]);
	print_subsequences(str , output, v ,i+1);
}

int main()
{
	string str ="abc";
	string output="";
	vector<string> v;
	int i=0;
	
	print_subsequences(str , output , v ,i);
	
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}cout<<endl;
	
	cout<<"size of vector is"<<v.size()<<endl;
	
	return 0;
}
