//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
        // code here
        int i=1;
        int j=n;
        int ans;
        bool a=false;
        while(i<=j){
            if(a==false){
                i+=k;
                ans=j;
            }
            else{
                j=j-k;
                ans=i;
            }
            a=!a;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends