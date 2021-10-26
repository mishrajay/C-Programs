#include <iostream>
using namespace std;
int main(){
    int a=6;
    cout<<"the value of a++="<<a++<<endl; //6 here a=6 will print and then increament will take place making the value of a=7(in memory)
    cout<<"the value of a--="<<a--<<endl; //7 here a=7 will print and then decrement will take place making the value of a=6(in memory)
    cout<<"the value of ++a="<<++a<<endl; //7 here increament takes place before printing the value of a ie. a=7 will print
    cout<<"the value of --a="<<--a<<endl; //6 here decrement takes place before printing the value of a ie. a=6 will print

    return 0;

}