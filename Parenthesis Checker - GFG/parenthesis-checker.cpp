//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char>stack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='[')
            stack.push(s[i]);

            else{
                if (stack.empty())
                  return false;
                else if(s[i]==')' && stack.top()!='(')
                 return false; 
                else if(s[i]=='}' && stack.top()!='{')
                  return false;
                else if(s[i]==']' && stack.top()!='[')
                  return false;
                else
                  stack.pop();
            }
        }
        if(stack.empty())
          return true;
        else
          return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends