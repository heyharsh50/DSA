//if-else (positive & negative)
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<0){
        cout<<"Number is negative";
    }
    else{
        cout<<"Number is positive";
    }

}

#include<iostream>
using namespace std;

int main(){
    
    int a = 9;
    if(a==9){
        cout<<"Nine"<<endl;
    }
    if(a>0){
        cout<<"Positive"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
}
//Output --> Nine Positive