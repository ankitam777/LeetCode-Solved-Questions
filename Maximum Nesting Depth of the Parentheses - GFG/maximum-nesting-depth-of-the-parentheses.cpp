//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        // code here
         int maxi=INT_MIN;
        int count=0;
        stack<int>st;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'){
                st.push(s[i]);
                count++;
            }
            else if(s[i]=='('){
                st.pop();
                count--;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends