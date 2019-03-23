//counting words in a sentence in c++
#include <bits/stdc++.h>
using namespace std;


// Driver code 
int main()
{
    string s;
    int words = 0;
    getline(cin, s);
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ' ')
            words++;
    }
    cout<<words+1;
    return 0;
} 