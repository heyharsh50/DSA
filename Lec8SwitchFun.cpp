//Example for switch case
/*#include<iostream>
using namespace std;

int main() {
    
    char ch = '1';
    int num = 1;

    cout << endl;
    switch( ch ) {

        case 2: cout << "First" <<endl;
                cout << " First again " <<endl;
                break;

        case '1': switch(num) {
                    case 1: cout<<" Value of num is "<< num <<endl;
                    break;
                 }
                break;

        default: cout << " It is default case" <<endl;        

    }

    cout << endl;

    return 0;
}*/

//Mini Calculator
#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout<<"Enter the value of a: "<< endl;
    cin>>a;

    cout<<"Enter the value of b: "<< endl;
    cin>>b;

    char op;
    cout<<"Enter the operation u want to perform: "<< endl;
    cin>>op;

    switch( op ){

        case '+': cout<< (a+b) <<endl;
                  break;

        case '-': cout<< (a-b) <<endl;
                  break;

        case '*': cout<< (a*b) <<endl;
                  break;

        case '/': cout<< (a/b) <<endl;
                  break;

        case '%': cout<< (a%b) <<endl;
                  break;

        default : cout<<"Enter Valid Operation "<<endl;

    }


}

// 