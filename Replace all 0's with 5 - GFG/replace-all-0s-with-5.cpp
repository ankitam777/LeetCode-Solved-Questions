//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int reverse(int temp)
{
    int ans = 0;
    while (temp > 0) {
        int rem = temp % 10;
        ans = ans * 10 + rem;
        temp = temp / 10;
    }
    return ans;
}
int convertFive(int n) {
    // Your code here
    if(n==0)
    return 5;
    int temp=0;
    while(n>0){
        int digit=n%10;
        if(digit==0)
        digit=5;
        temp=temp*10+digit;
        n=n/10;
    }
    return reverse(temp);
    
}