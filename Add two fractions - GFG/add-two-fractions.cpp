//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}

// } Driver Code Ends


/*You are required to complete this function*/

void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here
int num=num1*den2+num2*den1;
int den=den1*den2;
int g=__gcd(num,den);
num=num/g;
den=den/g;

cout<<num<<"/"<<den<<endl;
 }