#include <iostream>
#include <array>
using namespace std;

int main()
{ 
    
    array<int,6> a={10,20,30,40,50,60};
    //iterator
    array<int,6>::iterator it;
    it=a.begin();
    cout<<*it<<"  ";
    it++;
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<"  ";
    }
    //normal
    for(int i=0;i<6;i++){
        cout<<a[i]<<"  ";
    }
    cout<<a.max_size()<<"  ";
    
    for(int x:a){
        cout<<x<<"  ";
    }
    
    //reverse_iterator
    array<int,6>::reverse_iterator rit;
    for(rit=a.rbegin();rit!=a.rend();rit++){
        cout<<*rit<<"  ";
    }
    return 0;
}
