#include <iostream>
using namespace std;
int sum(int a,int b){
    if (a<b){
        return a;
    }else {
        return b;
    }
}
int main(){
    cout<<"min=" << sum(10,5)<<endl;
    return 0;
}