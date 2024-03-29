//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int nums[], int n)
    {
      //Your code here
      unordered_set<int> s;
        for(int i=0;i<n;i++)
          s.insert(nums[i]);
          int maxi=0;
        for(int i=0;i<n;i++){
            if(s.find(nums[i]-1)==s.end()){
                int num=nums[i];
                int cnt=1;
                while(s.find(num+1)!=s.end()){
                    cnt+=1;
                    num+=1;
                }
                maxi=max(maxi,cnt);
            }
            
        }
        return maxi;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends