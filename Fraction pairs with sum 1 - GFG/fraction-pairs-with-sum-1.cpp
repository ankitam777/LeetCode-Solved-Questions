//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int gcd(int a,int b){
        if(b==0)
        return a;
        return gcd(b,a%b);
    }
    int countFractions(int n, int num[], int den[])
    {
        int cnt=0;
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++){
             int g=gcd(num[i],den[i]);
             num[i]=num[i]/g;
             den[i]=den[i]/g;
              
             int x=num[i];
             int y=den[i];
             int z=y-x;
             if(mp.count({z,y}))
             cnt+=mp[{z,y}];
             
             mp[{x,y}]++;
            
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends