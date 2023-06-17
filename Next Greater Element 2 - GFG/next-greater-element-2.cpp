//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& nums) {
        // code here
        
        stack <int> stk;
    
        vector<int> nge(n,-1);

        for(int i=((2*n)-1);i>=0;i--){
            while(!stk.empty() && nums[i%n]>=stk.top()){
                stk.pop();
            }
            if(i<n){
                if(!stk.empty()){
                   nge[i] =stk.top();
                }
             //   else 
               //     nums[i]=-1;
             
            }
            stk.push(nums[i%n]);
        }
        return nge;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends