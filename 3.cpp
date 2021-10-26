#include <iostream>
using namespace std;
int main(){
    float a=1.2F;//use small or capital
    long double b=1.2L;
    //here, we specify float and double values by writing f and l(f and l are not case sensitive)
    cout<<"the size of 1.2 is="<<sizeof(1.2)<<endl;//if F or L is not mentioned,cpp compiler takes double as default not float
    cout<<"the size of 1.2F is="<<sizeof(1.2F)<<endl;
    cout<<"the size of 1.2f is="<<sizeof(1.2f)<<endl;
    cout<<"the size of 1.2L is="<<sizeof(1.2L)<<endl;
    cout<<"the size of 1.2l is="<<sizeof(1.2l)<<endl;
    //the size differs from compiler to compiler and this laptop has 64 bit operating system
    return 0;
}