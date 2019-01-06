#include <iostream>
using namespace std;

int main()
{
    string s1 = "Fork";
    string s2  = "cCPP";
    string s3(s2, 1, 3);  // line 1
    
    cout << s1 << " " << s3;
    return 0;
} 