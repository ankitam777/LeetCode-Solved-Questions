//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    stack<int>s;
    queue<int>qv;
    queue<int> rev(queue<int> q)
    {
        // add code here.
        while(!q.empty()){
        int x=q.front();
        q.pop();
        s.push(x);
        }
        
        
        while(!s.empty()){
        int y=s.top();
        s.pop();
        qv.push(y);
        }
    return qv;
    }
    
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends