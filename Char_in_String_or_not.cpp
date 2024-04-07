#include<iostream>
using namespace std;

bool is_present(string str , int n , int i, char key)
{
	// base case
	if(i > n-1)
	return false;
	
	// 1 case solve kardo 
	if(str[i]==key)
	return true;
	
	//baki recursion sambhalega
     return is_present(str , n ,i+1 , key);
}

int main()
{
	string str = "lovebabbar";
	int n = str.length();
	int i=0;
	char key = 'r';
	
	bool ans = is_present(str , n , i , key);
	cout<<"ans is "<<ans;
	
	return 0;
}
