//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string strs[], int N)
    {
        // your code here
        
        string ans;
        string res="-1";
        sort(strs,strs+N);
        string a=strs[0];
        string b=strs[N-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i])
            ans+=a[i];
            else
             break;
        }
        if(ans.size()==0)
        return res;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends