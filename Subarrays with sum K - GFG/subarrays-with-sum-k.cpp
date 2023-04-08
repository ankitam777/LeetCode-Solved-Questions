//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int nums[], int N, int goal)
    {
        // code here
        unordered_map<int,int>prevsum;
        int count=0;
        int sum=0;
        for(int i=0;i<N;i++){
            sum=sum+nums[i];
            if(sum==goal)
            count=count+1;

            if(prevsum.find(sum-goal)!=prevsum.end()){
                count=count+prevsum[sum-goal];
            }

            prevsum[sum]++;
        }
        return count;
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
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends