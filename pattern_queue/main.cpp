/*You are given a string S that need to be printed in a specific form. Example: FORKJAVA will be printed as FAOVRAKJ.

Input Format:
The first line of testcase contains T denoting the number of testcases. T testcases follow. Each testcase contains only one line of input containing S.

Output Format:
For each test case, in a new line, print the string in the given form.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the function patternPrint that takes a queue of characters. These characters are obtained by enqueing the characters of S into the queue.

Constraints:
1 <= T <= 100
1 <= |S| <= 1000

Example:
Input:
1
Geeks
Output:
Gseke

 */


//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
void patternPrint(queue <char>q);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     string s;
	     cin>>s;//Taking string as input
		 queue<char>q;
		    for(int i=0;i<s.length();i++)
		    {
		        q.push(s[i]); //Putting s into a queue
		    }

		    patternPrint(q); //passing queue to the function that you need to complete
		     cout<<endl;  //new line already added, don't add.
	}
	return 0;
}
void patternPrint(queue <char>q)
{
    //Your code here
    deque<char> dq;
    while(!q.empty()){
       dq.push_back(q.front());
       q.pop();
    }
    while(!dq.empty()){

        if(dq.size() == 1){
            cout<<dq.front();
            dq.pop_front();
        }
        else{
            cout<<dq.front()<<dq.back();
            dq.pop_front();
            dq.pop_back();
        }

    }
}