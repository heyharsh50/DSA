// Program to print 0 to N
#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number to print: ";
    cin>>n;

    int i;          //initialize i = 1 for printing 1 to N.
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}

//Program for sum of 1 to n
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i = 1;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}

//Program to print sum of all even numbers 1 to n
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int sum = 0;
    int i = 1;

    while(i<=n){
        if(i%2 == 0)
            sum = sum + i;
        i=i+1;
    }
    cout<<"Sum: "<<sum<<endl;
}