#include <bits/stdc++.h>
using namespace std;
stack<int>_push(int arr[],int n);
void _getMinAtPop(stack<int>s);
//Position this line where user code will be pasted.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        stack<int>mys=_push(arr,n);
        _getMinAtPop(mys);
        cout<<endl;



    }
    return 0;
}
//User function Template for C++
/* inserts elements of the array into
   stack and return the stack
*/
stack<int>_push(int arr[],int n)
{
    // your code here
    stack<int> s;
    s.push(arr[0]);
    for(int i = 1; i<n; i++){
        if(arr[i] < s.top()){
            s.push(arr[i]);
        }else{
            s.push(s.top());
        }
    }


    return s;
}

/* print minimum element of the stack each time
   after popping
*/

void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}