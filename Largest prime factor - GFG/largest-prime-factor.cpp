//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public: 
long long int maxi=0;
    bool prime(int n){
        if(n==0||n==1)
        return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    long long int largestPrimeFactor(int n){
        // code here
        for(int i=2;i<=n;i++){
            if(n%i==0){
                if(prime(i)){
                    if(i>maxi)
                    maxi=i;
                }
                n=n/i;
            }
            
        }
        return maxi;
        
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends