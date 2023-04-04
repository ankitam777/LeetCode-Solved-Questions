//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    set<int>st;
	    vector<int>v;
	    for(int i=2;i<=N;i++){
	        while(N%i==0){
	            if(st.find(i)==st.end()){
	                st.insert(i);
	                v.push_back(i);
	            }
	            N=N/i;
	        }
	    }
	    return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends