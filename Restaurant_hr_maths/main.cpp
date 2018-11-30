#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the restaurant function below.
 */
int gcd(int x, int y){

    if(y != 0){
        return gcd(y,x%y);
    }else{
        return x;
    }

} 
int restaurant(int l, int b) {
    /*
     * Write your code here.
     */
     if(l == b)
        return(1);
     else{
        int p = gcd(l,b); 
        return((l*b)/(p*p));
     }   


}

int main()
{
    int t,a,b,res;
    cin>>t;
    while(t--){
        cin>>a>>b;
        res=restaurant(a,b);
        cout<<res<<endl;
    }
    return 0;
}
