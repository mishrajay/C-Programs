#include <iostream>
using namespace std;

//structure

struct employee
{
    /* data */
    int id;
    char favChar;
    float salary;
};

int main(){
    struct employee harry;
    harry.id=122;
    harry.favChar='x';
    harry.salary=90;

    cout<<"the value ="<<harry.id<<endl;
    cout<<"the value ="<<harry.favChar<<endl;
    cout<<"the value ="<<harry.salary<<endl;

    return 0;
}

//union
union money
{
    /* data */
    int wheat;
    char car;
    float pounds;
};

int main(){
    union money m;
    m.wheat=20;
    cout<<m.wheat;

    return 0;
}
struct employee
{
    /* data */
    int id;
    char favChar;
    float salary;
};

int main(){
    struct employee harry;
    harry.id=122;
    harry.favChar='x';
    harry.salary=90;

    cout<<"the value ="<<harry.id<<endl;
    cout<<"the value ="<<harry.favChar<<endl;
    cout<<"the value ="<<harry.salary<<endl;

    return 0;
}

//union
union money
{
    /* data */
    int wheat;
    char car;
    float pounds;
};

int main(){
    union money m;
    m.wheat=20;
    cout<<m.wheat;

    return 0;
}

//enum
int main(){
    enum meal {breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner;

    return 0;
}

