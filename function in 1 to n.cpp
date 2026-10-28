#include <iostream>
using namespace std;
int sum(int n){
  int  total = 0;
    for (int i=0;i<=n;i++){
        total +=i;
    }
return total;
}
int main(){
    cout<<sum(5)<<endl;
    return 0;
}