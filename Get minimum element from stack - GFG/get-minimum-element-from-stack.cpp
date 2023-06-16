//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    
    stack<int> s;
    stack<int>minst;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(minst.empty())
           return -1;
           return minst.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty())
           return -1;
           int res=s.top();
           if(s.top()==minst.top()){
            s.pop();
            minst.pop();
        }
        else
        s.pop();
        return res;
       }
       
       /*push element x into the stack*/
       void push(int val){
           
           //Write your code here
        s.push(val);
        if(minst.empty())
        minst.push(val);
        else
        if(minst.top()>=val)
        minst.push(val);
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends