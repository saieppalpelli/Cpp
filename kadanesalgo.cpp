#include <iostream>
#include <vector>
using namespace std;
int maxsubarray(vector <int>&arr){
    int cursum=arr[0];
    int maxsum=arr[0];
    for (int i =0;i<arr.size();i++){
        cursum=max(arr[i],cursum+arr[i]);
        maxsum=max(maxsum,cursum);
    }
    return maxsum;
}
int main(){
    vector<int> arr={-2,-3,4,5,-1,7};
    cout<<maxsubarray(arr);


}