#include<iostream>
#include<list>
using namespace std;
int main(){
	
	list<int> L;
	list<int>::iterator it;
	
	//insert elements at the back of the list
	L.push_back(4);
	L.push_back(5);
	
	//insert elements at the front of the list
	L.push_front(3);
	L.push_front(5);
	
	//return reference to the first element
	it = L.begin();
	L.insert(it,1);
	
	//display all the elements of the list
	cout<<"All the elements of the list are: "<<endl;
	for(it = L.begin();it!=L.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	
	//reverse elements of the list
	L.reverse();
	
	cout<<"All the elements of the list are"<<endl;
	for(it = L.begin();it!=L.end();it++)
		cout<<*it<<" ";
	
	cout<<endl;	
	//remove the occurences of 5 in the list
	L.remove(5);
	
	cout<<"Elements after removing all occurence of 5 from List"<<endl;
    for(it = L.begin();it!=L.end();it++)
    {
         cout<<*it<<" ";
    }
    cout<<endl;
	
	//remove last element
	L.pop_back();
	
	//remove front element
	L.pop_front();
		
	return 0;
}
