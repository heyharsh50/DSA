/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        cout<< i <<endl;
        i=i+1;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    
    int i=1;

    while(i<=n){

        sum=sum + i;
        i=i+1;
    }

    cout<<"The sum is "<<endl<< sum;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int sum = 0;
    int i=2;

    while(i<=n){
        if(i%2==0)
            sum=sum+i;
        i=i+1;
    }
    cout<<"Sum from"<<i<<"to"<<n<<"="<<sum<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    float f;
    cin>>f;

    float c=(5.0/9)*(f-32);
    cout<<f<<"F = "<<c<<"C";

    return 0;
}*/


/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n){

        int j=1;

        while(j<=i){

            cout<<"*";
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;

    }
    return 0;
}*/


/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        int value = i;

        while(j<=i){

            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;       
    }

}*/

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n){

        int j = 1;
        while(j<=i){

            cout<<(i-j+1);
            j = j + 1;
        }
        cout<<endl;
        i=i+1;
    }

    return 0;

}*/

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=n){
            char ch = 'A' + i - 1;

            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    return 0;
}*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=i){

            char ch='A'+j-1;
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}