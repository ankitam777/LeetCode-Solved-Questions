//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
 
 // User function Template for C++
class Solution {
  
  public:
    int nthFibonacci(int n){
        // code here
        if(n<=1){
            return n;
        }
        
        long long first = 0;
        long long second = 1;
        long long third = 1;
        
        for(int i = 2; i<=n; i++){
            third = (first + second)%1000000007;
            first = second;
            second = third;
        }
        third %= 1000000007;
        return third;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends