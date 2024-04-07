#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> Prev_smaller(vector<int> &input)
{
	stack<int> s;
	s.push(-1);
	
	vector<int> ans( input.size() );
	
	for(int i=0; i<input.size(); i++)
	{
		int curr = input[i];
		
		// curr tum apne liye prev smaller element stack mai se dhoond ke lau
		
		while(s.top() >= curr)
		{
			s.pop();
		}
		
		// now the top element is smaller than curr, so we store it as a ans
		
		ans[i] = s.top();
		
		// now we push the curr in stack
		s.push(curr);
	}
	return ans;
}

int main()
{
	vector<int> input;
	input.push_back(2);
	input.push_back(1);
	input.push_back(4);
	input.push_back(3);
	
	vector<int> ans = Prev_smaller(input);
	
	cout<<"printing ans"<<endl;
	for(int i=0; i<ans.size(); i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
