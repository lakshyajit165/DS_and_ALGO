/*
Given a vector of N pairs, where pairs consists of two positive integers. The task is to delete all the pair from vector whose second element is odd.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which contains N, number of elements to be pushed to vector, and next line contains N elements pushed to vector.

Output:
For each testcase, output the size of modified vector with its element. If no element is present in  modified vector, print "Empty" (without quotes) instead of vector elements.

User Task:
Your task is to complete the function vectorIterator(), which should delete all the pairs with second element odd and return modified vector.

Constraints:
1 <= T <= 10
1 <= N <= 106
1 <= V[i] <= 1016

Example:
Input:
1
5
2 1 4 3 6 5 8 9 1 2

Output:
1
1 2

Explanation:
Testcase 1: The only pair left after deleting pair with second odd element is (1, 2).

*/



//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
// Driver code


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*Function to erase pair with second element as odd
* v : argument as vector<pair<long long, long long>>
* Return type : vector<pair<long long, long long>>
*/
vector<pair<long long, long long>> vectorIterator(vector<pair<long long, long long>> v){

    // Your code here
    vector<pair<long long, long long>> v_new;
    for(int i = 0; i<v.size(); i++){
        if(v[i].second % 2 == 0){
            v_new.push_back(make_pair(v[i].first, v[i].second));
        }
    }
    return v_new;

}
int main() {

    long long testcase;
    cin >> testcase;

    while(testcase--){
        vector<pair<long long, long long>> v;

        // Number of pairs to be pushed to vector        
        long long N;
        cin >> N;

        // Taking input to vector v
        for(long long i = 0;i<N;i++){
            long long k, m;
            cin >> k >> m;
            v.push_back(make_pair(k, m));
        }

        // Calling function to delete required pair
        v = vectorIterator(v);

        // Printing size of vector
        cout << v.size() << endl;

        // Iterating through vector and printing the pairs
        if(v.size() != 0){
            for(auto k = v.begin(); k != v.end(); k++){
                cout << k->first << " " << k->second << " ";
            }
            cout << endl;
        }
        else{
            cout << "Empty" << endl;
        }
    }

    return 0;
}


