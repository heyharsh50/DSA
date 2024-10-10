//Question 1
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=n){

            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 2
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=4;
        while(j>=1){

            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 3
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    int count = 1;

    while(i<=n){

        int j=4;
        while(j<=n){

            cout<<count;
            count=count-1;
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 4
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

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

//Question 5
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=i){

            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;

}*/

//Question 6
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=i){

            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;

}*/

//Question 6
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    int count = 1;

    while(i<=n){

        int j=1;
        while(j<=i){

            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;

}*/

//Question 7
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    int count = 1;

    while(i<=n){

        int j=1;
        count=i;   // here count is equal to i and we know that i is 1 and it keep on increment.
        while(j<=i){

            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;

}*/

//question 8
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=i;       // basically we equal the row = column 
        while(j<=i*2){

            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;

}*/


//Question 9
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=0;

    while(i<=n){

        int j=1;
        while(j<=i){
            
            cout<<i-j+1<<" ";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 10
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
            cout<<ch<<" ";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 11
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        char ch = 'A';
        while(j<=n){
            
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 12
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    char ch = 'A';
    //int count = 1;

    while(i<=n){

        int j=1;
        while(j<=n){
            
            cout<<ch<<" ";
            ch=ch+1;
            //count=count+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 13
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        char ch = 'A'+i-1;
        int j=1;
        while(j<=n){
            
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 14
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        char ch = 'A'+i-1;
        int j=1;
        while(j<=i){
            
            cout<<ch<<" ";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 15
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    char ch ='A';

    while(i<=n){

        int j=1;
        while(j<=i){
            
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 16
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=i){
            
            char ch ='A' + i + j - 2;
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 17
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        char ch ='A' + n - i;

        int j=1;
        while(j<=i){
            
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 18
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    //printing spaces
    while(i<=n){

        int space=n-i;
        while(space){

            cout<<" ";
            space--;
        }
        int j=1;  //printing stars
        while(j<=i){

            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 19
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;

        while(j<=n-i+1){     //modified

            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

//Question 20
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;

        while(j<=n-i+1){     //modified

            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}