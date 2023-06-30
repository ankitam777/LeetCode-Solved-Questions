//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    long long base=1;
	    long long sum=0;
	    for(int i=s.size()-1;i>=0;i--){
	        if(s[i]=='1')
	        sum=(sum+base)%3;
	        base=(base*2)%3;
	    }
	    if(sum==0)
	    return 1;
	    
	    return 0;
	    
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends