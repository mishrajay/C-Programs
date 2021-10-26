0#include <iostream>
using namespace std;

int main(){
    int a=3;
    int *b=&a;
    
    cout<<"the value of a="<<a<<endl;
    cout<<"the address of a="<<&a<<endl;//& --(address at) operator
    cout<<"the address of a="<<b<<endl;//b=&a
    cout<<"the value at address of a="<<*b<<endl;//*--(value at) deference operator

    return 0;
}