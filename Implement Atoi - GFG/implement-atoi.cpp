//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int i=0;
        long ans=0;
        int sign=1;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        s=s.substr(i);
        if(s[0]=='-'){
            sign=-1;
        }

        if(s[0]=='-' || s[0]=='+')
        i=1;
        else
        i=0;
        while(i<s.size()){
            if(!isdigit(s[i]))
            return -1;
            ans=ans*10+s[i]-'0';
            if(ans*sign<INT_MIN)
            return INT_MIN;
            if(ans*sign>INT_MAX)
            return INT_MAX;
            i++;
        }
        return ans*sign;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends