/*You are given an array A of size N. you need to insert the elements of A into a set and display the results. Also, you need to erase a given element x from the set and print "erased x" if successfully erased, else print "not found".

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains three lines of input. The first line contains N denoting the size of the array A. The second line contains N elements of the array. The third line contains element x that need to be erased from the set.

Output Format:
For each testcase, in a new line, print the required output.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the provided functions.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= Ai <= 106

Examples:
Input:
1
10
9 8 7 4 4 2 1 1 9 8
1
Output:
1 2 4 7 8 9
erased 1
2 4 7 8 9*/



#include <bits/stdc++.h>
using namespace std;
set<int> setInsert(int arr[],int n); //Function to insert elements of array into a set and return a set
void setDisplay(set<int>s); //function to print the elements of the set
void setErase(set<int>&s,int x); //function to erase x from set if it exists
//Position this line where user code will be pasted.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; //array of size n
        for(int i=0;i<n;i++)
        cin>>arr[i]; //Input the array

        set<int>s=setInsert(arr,n); //call the insert function that returns a set
        setDisplay(s);// display the inserted set
        int x;
        cin>>x; //x element that needs to be erased from set

        setErase(s,x); //try to erase x from set
        setDisplay(s); //print the set after erase operation


    }
	return 0;
}

//User function Template for C++
set<int> setInsert(int arr[],int n)
{
    set<int>s;

    //Your code here to insert arr into s
    for(int i = 0; i<n; i++){
        s.insert(arr[i]);
    }

    return s;

}
void setDisplay(set<int>s)
{
    //Your code here to display elements of s
    set<int> :: iterator itr;
    for(itr=s.begin(); itr!=s.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
void setErase(set<int>&s,int x)
{
   //write if condition here
    /*if(*s.find(x)){
        s.erase(x);
        cout<<"erased "<<x;
    }*/
    set<int>::iterator it = s.find(x);
    if(it != s.end()){
        s.erase(x);
        cout<<"erased "<<x;
    }
    //write else condition here
    else
    cout<<"not found";


    cout<<endl;
}