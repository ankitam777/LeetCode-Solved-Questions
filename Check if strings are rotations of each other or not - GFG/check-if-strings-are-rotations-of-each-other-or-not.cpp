//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s,string goal)
    {
        // Your code here
        int l1=s.length();
    int l2=goal.length();
    if(l1==l2){
        string temp;
        temp=s+s;
        if(temp.find(goal)==string::npos)
        return false;
        else 
        return true;
    }
    else
      return false;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends