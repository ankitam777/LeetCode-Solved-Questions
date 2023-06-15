//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int len=1,l,r;
        int pos=0;
        for(int i=1;i<s.size();i++){
            //odd
            l=i-1;
            r=i+1;
            while(l>=0 && r<s.size()&& s[l]==s[r] ){
                

                if(len<r-l+1){
                pos=l;
                len=r-l+1;
                }
                l--;
                r++;
            }
        
        //even
          l=i;
          r=i-1;
          while(l>=0 && r<s.size() && s[l]==s[r]){
              
                if(len<r-l+1){
                pos=l;
                len=r-l+1;
                }
                
              
              l--;
              r++;
          }

        
        }
        return s.substr(pos,len);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends