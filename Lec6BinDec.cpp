//Example
/*#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0){

        int digit = n & 1;
        ans=(digit * pow(10,i) ) + ans;

        n=(n>>1);
        i++;
    }
    cout<<"Answer is"<<" "<<ans<<endl;

    return 0;
}*/

//Example bin to dec
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0){

        int digit = n % 10;

        if(digit == 1){

            ans = ans + pow(2, i);
        }
        n=n/10;
        i++;
    }
    cout<<"Answer is"<<" "<<ans<<endl;

    return 0;
}