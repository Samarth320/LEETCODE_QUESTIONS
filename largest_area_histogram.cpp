#include<iostream>
#include<limits.h>
#include<vector>
#include<stack>
using namespace std;

vector<int> prev_smaller(vector<int> &input)
{
	stack<int> s;
	s.push(-1);
	
	vector<int> ans( input.size() );
	
	for(int i=0; i<input.size(); i++)
	{
		int curr = input[i];
		
		// curr tum apne liye prev smaller element stack mai se dhoond ke lau
		
		while( s.top() != -1 && input[s.top()] >= curr ) 
		{
			s.pop();
		}
		
		// now the top element is smaller than curr, so we store it as a ans
		
		ans[i] = s.top();
		
		// now we push the curr in stack
		s.push(i);
	}
	return ans;
}

vector<int> Next_smaller(vector<int> &input)
{
	stack<int> s;
	s.push(-1);
	
	vector<int> ans( input.size() );
	
	for(int i=input.size()-1; i>=0; i--)
	{
		int curr = input[i];
		
		// curr tum apne liye next smaller element stack mai se dhoond ke lau
		
		while(s.top() != -1 && input[s.top()] >= curr)
		{ 
			s.pop();
		}
		
		// now the top element is smaller than curr, so we store it as a ans
		
		ans[i] = s.top();
		
		// now we push the curr in stack
		s.push(i);
	}
	return ans;
}

int largest_area_histogram(vector<int> &height)
{
	int maxarea = INT_MIN;
	int size = height.size();
	
	// step 1
	vector<int> next_smaller =  Next_smaller(height);
	
	// step 2
	vector<int> Prev_smaller =  prev_smaller(height);
	
	for(int i=0; i<height.size(); i++)
	{
		int length = height[i];
		
		if(next_smaller[i] == -1)
		{
			next_smaller[i] = size;
		}
		
		int width = next_smaller[i] - Prev_smaller[i] - 1;
		
		int area = length  * width;
		maxarea = max(maxarea , area);
	}
	
	return maxarea;
}

int main()
{
	vector<int> input;
	input.push_back(2);
	input.push_back(1);
	input.push_back(5);
	input.push_back(6);
	input.push_back(2);
	input.push_back(3);
	
    int ans = largest_area_histogram(input);
    
    cout<<"ans is:"<<" "<<ans<<endl;
	
	
	return 0;
}












