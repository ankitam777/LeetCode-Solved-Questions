//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int h[], int n){
        // code here
	long long water = 0, l = 0, r = n-1;
	int lmax = INT_MIN, rmax = INT_MIN;
	while(l < r){
		lmax = max(h[l], lmax);
		rmax = max(h[r], rmax);
		water += (lmax < rmax) ? lmax-h[l++] : rmax-h[r--] ;
	}
	return water;

    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends