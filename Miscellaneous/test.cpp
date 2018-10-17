#include <iostream>
#include<iomanip>
#include <string>

using namespace std;


int main () {
   
   double d = 100.456;
   int a = int(d);
   cout<<a<<endl;
   cout<<"0x"<<std::hex<<a<<endl;

   printf("%.2f", d);
   cout<<endl;
   cout << setfill('_') << setw(15) <<c ;

   return 0;
}
