//Example 1
/*#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout<<"Enter the first number :-" << a << endl;
    cin >> a;

    cout<<"Enter the second number :-" << b << endl;
    cin >> b;

    if(a>b)
    {
        cout<<"Answer is a " << a << endl;
    }
    else{
        cout<<"Answer is b " << b << endl;
    }

    return 0;

}*/

//Number is positive, negative, zero if else multiple block
/*#include<iostream>
using namespace std;

int main(){

    int a;

    cout<<"Enter a number:- " << endl;
    cin >> a;

    if(a>0)
    {
        cout<<"Number is positive " << endl;
    }
    else if(a<0)
    {
        cout<<"Number is negative " << endl;
    }
    else{
        cout<<"Number is zero " << endl;
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    int a;

    cout<<"Enter the value of a"<< endl;
    cin>>a;

    if(a>0){

        cout<<"a is positive";

    }
    else{
        if(a<0){
            cout<<"negative";

        }
        else{
            cout<<"zero";
        }
    }

    return 0;
}*/

//Practice Lec 3
/*#include<iostream>
using namespace std;

int main(){

    int a=9;

    if(a==9){

        cout<<"Nine"<<endl;
    }

    if(a>0){

        cout<<"Positive"<<endl;
    }
    else{

        cout<<"Negative";
    }

    return 0;
}*/

//practice lec 3
/*#include<iostream>
using namespace std;

int main(){

    int a=2;
    int b=a+1;

    if((a=3)==b){

        cout<<a;
    }
    else{
        cout<<a+1;
    }

    return 0;
}*/

//practice lec 3
/*#include<iostream>
using namespace std;

int main(){

    int a=24;

    if(a>20){
        cout<<"Harsh"<<endl;
    }
    else if(a==24){
        cout<<"Lovely"<<endl;
    }
    else{
        cout<<"Raj"<<endl;
    }
    cout<<a<<endl;

    return 0;
}*/

//Question lec 3
/*#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter anything"<< ch;
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z'){

        cout<<"This is Uppercase"<<endl;
    }
   else if(ch >= 'a' && ch <= 'z'){
        cout<<"This is Lowercase"<<endl;
    }
    else if(ch >= '0' && ch <= '9'){
        cout<<"This is numeric"<<endl;
    }

    return 0;
}*/