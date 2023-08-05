//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
       /*vector<long long>v;
       long long mini=INT_MAX;
       for(int i=0;i<a.size();i++){
           int count=0;
               while(count<m){
                   if(a[i]>1){
                   v.push_back(a[i]);
                   mini=min(mini,a[i]);
                   count++;
                   if(a[i]<mini){
                       v.erase(find(v.begin(),v.end(),mini));
                       mini=a[i];
                       count--;
                   }
                   }
                i++;
                   
               }
           
       }
       return v[n]-v[0];
       */
       sort(a.begin(),a.end());
       int cnt=0;
       //vector<long long>v;
       long long mini=INT_MAX;
       long long ans;
           int i=0,j=m-1;;
           while(i<n && j<n){
                   
                   ans=min(ans,a[j]-a[i]);
                   i++;
               
               j++;
           }
       
       return ans;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends