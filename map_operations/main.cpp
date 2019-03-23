/*You are given an array A of size N. you need to insert the elements of A into a map(element as key and index as value) and display the results. Also, you need to erase a given element x from the map and print "erased x" if successfully erased, else print "not found".

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
1 7
2 5
4 4
7 2
8 9
9 8
erased 1
2 5
4 4
7 2
8 9
9 8
 */


//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
map<int,int> mapInsert(int arr[],int n);
void mapDisplay(map<int,int>mp);
void mapErase(map<int,int>&mp,int x);
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
        cin>>arr[i]; //Taking input array

        map<int,int>mp=mapInsert(arr,n); //map insert function that returns a function
        mapDisplay(mp); //print the keys and values of the map
        int x;
        cin>>x; //element to be erased

        mapErase(mp,x); //the erase function
        mapDisplay(mp);


    }
	return 0;
}

//User function Template for C++
map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
   //Insert arr[i] as key and i as value
    for(int i = 0; i<n; i++){
        mp[arr[i]] = i;
    }

    return mp;

}
void mapDisplay(map<int,int>mp)
{
    //Print every key and value pair in a new line
    map<int,int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

}
void mapErase(map<int,int>&mp,int x)
{
   //Write the if and else condition to erase x from map
    map<int,int>::iterator it = mp.find(x);

    if(it!=mp.end()){
        mp.erase(x);
        cout<<"erased "<<x;
    }else{
    //else condition
    cout<<"not found";
    }

    cout<<endl;
}