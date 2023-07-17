//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    void listtostack(struct Node* l,stack<int> &s){
        while(l!=NULL){
         s.push(l->data);
         l=l->next;
        }
    }
    struct Node* stacktolist(stack<int>s){
        struct Node* head=NULL;
        struct Node* temp=NULL;
        
        while(s.size()){
            int x=s.top();
            s.pop();
            struct Node* node=new struct Node(x);
          if(head==NULL){
              head=node;
              temp=head;
          }
          else{
              temp->next=node;
              temp=temp->next;
          }
        }
        return head;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        // code here
        stack<int>s1;
        stack<int>s2;
        stack<int>ans;
        listtostack(l1,s1);
        listtostack(l2,s2);
        int carry=0;
        while(s1.size() && s2.size()){
            int x=s1.top();
            int y=s2.top();
            
            s1.pop();
            s2.pop();
            
            int sum=x+y+carry;
            
            ans.push(sum%10);
            carry=sum/10;
        }
        while(s1.size()){
            int x=s1.top();
            
            s1.pop();
            
            int sum=x+carry;
            
            ans.push(sum%10);
            carry=sum/10;
            
        }
        while(s2.size()){
            int x=s2.top();
            
            s2.pop();
            
            int sum=x+carry;
            
            ans.push(sum%10);
            carry=sum/10;
            
        }
        if(carry==1){
            ans.push(carry);
        }
        return stacktolist(ans);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends