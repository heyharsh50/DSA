/*#include<iostream>
using namespace std;

int main(){

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
}*/


/*#include<iostream>
using namespace std;

int main(){

    int i = 7;

    cout<<(++i)<<endl;
    // 8 
    cout<<(i++)<<endl;
    // 8 ,i=9
    cout<<(i--)<<endl;
    // 9 ,i=8
    cout<<(--i)<<endl;
    // 7

    return 0;
}*/

// 5 Questions
// 1.Question 
#include<iostream>
using namespace std;

int main(){

    int  a, b = 1;
    a=10;

    if(--a){
        cout<<b;
    }
    else{
        cout<<++b;
    }
    return 0;
}

//2.Question
/*#include<iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 2;

    if(a-- >0 && ++b > 2){

        cout<<"Stage 1 - Inside IF"<<endl;
    }
    else{
        cout<<"Stage 2 - Inside else";
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}*/

//3.Question
/*#include<iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 2;

    if(a-- >0 || ++b > 2){

        cout<<"Stage 1 - Inside IF"<<endl;
    }
    else{
        cout<<"Stage 2 - Inside else";
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}*/

//4.Question
/*#include<iostream>
using namespace std;

int main(){

    int number = 3;
    cout<<(25 * (++number));
}*/

//5.Question 
/*#include<iostream>
using namespace std;

int main(){

    int a = 1;
    int b = a++;
    int c = ++a;

    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}*/

//Example code for (For Loop)
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing count from 0 to n:- "<< endl;

    for(int i=0; i<=n; i++){

        cout<<i<<endl;
    }
    return 0;
}*/

//Example code without declaring for brackets
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing count from 0 to n:- "<< endl;
    int i = 0;


    for(;;){    // we can declare all conditions outside the parenthesis but in the bracket of for we have to put semicolon
        if(i<=n){

        cout<<i<<endl;
        }
        i++; // causes infinite loop here we use break statement to stop
    }
    return 0;
}*/

//Example code for loop and using of break statements
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing count from 0 to n:- "<< endl;
    int i = 0;


    for(;;){    // we can declare all conditions outside the parenthesis but in the bracket of for we have to put semicolon
        if(i<=n){

        cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
    return 0;
}*/

// We can declare all the 3 parts outside the parenthesis()

/*#include<iostream>
using namespace std;

int main(){


    for(int a = 0, b = 1, c = 2, d = 3; a>=0 && b>=1 && c>=2 && d>=3; a--, b--, c--, d-- ){

        cout<< a <<" "<< b <<" "<< c <<" "<< d <<endl;
    }
}*/

// Printing 1 to n sum
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n; i++){

        sum += i;
    }
    cout<<sum<<endl;

    return 0;
}*/

//Printing FIB numbers
/*#include<iostream>
using namespace std;

int main(){

    int i = 10;
    int a = 0;
    int b = 1;

    for(int i=0; i<=10; i++){

        int fib = a+b;
        cout<<fib<<" ";

        a=b;
        b=fib;
    }
}*/

//Print if prime 
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    bool isPrime = 1;

    for(int i=2; i<n; i++){

        if(n%i == 0){

            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0){

        cout<<"Not Prime"<<endl;
    }
    else{

        cout<<"Prime"<<endl;
    }
}*/

//Example of Scope
/*#include<iostream>
using namespace std;

int main(){
    
    int a = 3;
    cout<< a << endl;
    
    if(true){
        
        int b = 5;
        cout<<b<<endl;
    }
    cout<<b<<endl; // gives error bcz it is not declare in this scope
}*/


//Question related to lec 5....

//Question 1.
/*include<iostream>
using namespace std;
int main(){
    
    for(int i=0; i<=5; i++){  //starting with 0, 2bcz i++, 4
        
        cout<<i<<" ";
        i++;                  // now here increase with +1, +1
    }
}*/  //output 0, 2, 4

//Question 2.
/*#include<iostream>
using namespace std;
int main(){
    
    for(int i=0; i<=5; i--){  //starting with 0, 0, infinite loop of 0.....(output)
        cout<<i<<" ";
        i++;                  // now here increase with +1
    }
}*/


//Question 3.
/*#include<iostream>
using namespace std;
int main(){
    
    for(int i=0; i<=15; i += 2){
        cout<<i<<" ";
        
        if(i&1){
            continue;
        }
        i++;
    }
}*/
// output..0 3 5 7 9 11 13 15

//Question 4.
/*#include<iostream>
using namespace std;
int main(){
    
    for(int i=0; i<=5; i++){
        for(int j=i; j<=5;j++){
            cout<<i<<" "<<j<<endl;
        }
    }
}*/

//Question 5.
/*#include<iostream>
using namespace std;
int main(){
    
    for(int i=0; i<5; i++){
        for(int j=i; j<=5;j++){
            if(i+j == 10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}*/

