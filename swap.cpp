#include <iostream>
using namespace std;
int main (){
    int a=5,b=9;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"swapped:"<<"a:"<<"b:"<<a<<b<<endl;
    return 0;
}