//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int i=0,j=0;
        int count=0;
        unordered_map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
            while(mp['a']>=1 && mp['b']>=1 && mp['c']>=1){
                count+=(s.size()-j);
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return count;
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
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends