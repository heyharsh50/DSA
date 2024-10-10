// Hello World
#include<iostream>
using namespace std;

int main(){

    cout<<"Hi, My Name is Harsh"<<endl;
}

// DataTypes and Variables
#include<iostream>
using namespace std;

int main(){

    //ways of creating variables
    int a = 10;
    cout<<a<<endl;

    int myNum;
    myNum = 20;
    cout<<myNum<<endl;

    int ab = 123;
    cout<<ab<<endl;

    char b = 'V';
    cout<<b<<endl;

    bool bl = true;
    cout<<bl<<endl;

    float f = 1.2;
    cout<<f<<endl;

    double dl= 1.234;
    cout<<dl<<endl;

    //Sizeof use for checking how many space
    int size = sizeof (dl);
    cout<<size<<endl;

}

/* int a = 5 -> int is datatype & a is variable */

//Typecasting
#include<iostream>
using namespace std;

int main(){
    int a = 'a';
    cout<<a<<endl;

    char ch = 98;
    cout<<ch<<endl;
}

//Operators {+, -, *, /, %}
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    a = 10;
    b = 20;
    c= a+b;

    cout<<c<<endl;
}

//Relation Operators
#include<iostream>
using namespace std;

int main(){

    int a=10, b=20;
    bool first = (a==b);
    cout<<first<<endl;  //Output--> 1 true & 0 false
}