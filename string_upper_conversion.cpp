#include<iostream>
#include<string.h>
using namespace std;

void convertupper(char arr[])
{
	for(int i=0; i<strlen(arr); i++)
	{
		arr[i] = arr[i] - 'a' + 'A';
	}
}

void convertlower(char arr[])
{
	for(int i=0; i<strlen(arr); i++)
	{
		arr[i] = arr[i] - 'A' + 'a';
	}
}


int main()
{
	char name[50];
	
	cout<<"enter a string in uppercase case"<<endl;
	
	cin.getline(name , 50 );
	
//	convertupper(name);
//	cout<<name;
	
	convertlower(name);
	cout<<name;
	
	return 0;
}
	
