//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int flag=1;
        vector<int>v;
        vector<int>v1;
        if(s==0){
            v1.push_back(-1);
            return v1;
        }
        int i=0,j=0,sum=0;
        while(j<n){
            sum+=arr[j];
            while(sum>s){
                sum-=arr[i];
                i++;
            }
            //int flag=1;
            if(sum==s){
            v.push_back(i+1);
            v.push_back(j+1);
            flag=0;
            break;
            }
            
            j++;
        }
        if(flag==1)
        v.push_back(-1);
        return v;
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends