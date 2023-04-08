//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubarray(int n, vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int>prevsum;
        int odd=0;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1)
            odd++;
            if(odd==k)
            count=count+1;

            if(prevsum.find(odd-k)!=prevsum.end()){
                count=count+prevsum[odd-k];
            }

            prevsum[odd]++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends