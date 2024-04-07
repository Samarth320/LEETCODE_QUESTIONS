#include<iostream>
#include<string>
using namespace std;

bool comparestring(string a ,string b)
{
	int j=0;
	
	if(a.length() != b.length())
	{
		return false;
	}
	
	else
	{
		for(int i=0; i<a.length(); i++)
		{
			if(a[i] != b[j])
			return false;
			
			else{
				j++;
			}
		}
		return true;
	}
}

int main()
{
	string a = "samarth";
	string b= "samarth";
	
	cout<<"equal hai kya"<<" "<<comparestring(a , b);
	
	
	return 0;
}
