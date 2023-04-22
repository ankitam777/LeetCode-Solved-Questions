//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
    unordered_set<int> uset, uset2, uset3;
    for (int i = 0; i < n1; i++) {
        uset.insert(a[i]);
    }
    for (int i = 0; i < n2; i++) {
        uset2.insert(b[i]);
    }
    // checking if elements of 3rd array are present in
    // first 2 sets
    for (int i = 0; i < n3; i++) {
        if (uset.find(c[i]) != uset.end()
            && uset2.find(c[i]) != uset.end()) {
            // using a 3rd set to prevent duplicates
            if (uset3.find(c[i]) == uset3.end())
                {
            uset3.insert(c[i]);
            ans.push_back(c[i]);
                }
        }
    }
    return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends