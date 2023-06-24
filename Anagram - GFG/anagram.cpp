//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string t){
        
        // Your code here
        if(s.length()==t.length()){
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i=0;i<s.size();i++){
                if(s[i]!=t[i])
                return false;
            }
            return true;
        }
        else
        return false;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends