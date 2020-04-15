#include <iostream>
#include "Integer.h"

using namespace std;

int main(){
    Integer a=Integer();
    Integer b(3);
    Integer c(24);
    Integer d= c;
    a=b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<< d+3<<endl;
    int m=a^1;
    int n=d^-1;
    int p=c-a;
    cout<< p<<endl;
    cout<< n<<endl;
    cout<< m<<endl;
    bool x= m==n;
    cout<<x<<endl;

}






