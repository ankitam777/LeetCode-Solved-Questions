//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int singleDigit(long long num)
    {
        // Write Your Code here
        int digit;
        int sum=0;
        if(num==0)
        return 0;
        while(num>0){
            digit=num%10;
            sum=sum+digit;
            num=num/10;
        }
        if(sum<10)
        return sum;
        else
        return singleDigit(sum);
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        int ans  = ob.singleDigit(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends