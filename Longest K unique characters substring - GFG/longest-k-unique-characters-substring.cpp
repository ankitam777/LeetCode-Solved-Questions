//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for 
//User function template for C++
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n = s.size();
        // if(k > n) return -1;
        map<char, int> m;
        int tail = 0, head;
        int ans = INT_MIN;
        for(head = 0; head < n; head++){
            m[s[head]]++;
            while(m.size() > k && tail <= head){
                m[s[tail]]--;
                if(m[s[tail]] == 0) m.erase(s[tail]);
                tail++;
            }
            if(m.size()==k) ans = max(ans, (head - tail + 1));
        }
        return ans == INT_MIN? -1: ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends