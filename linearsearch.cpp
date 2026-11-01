#include <iostream>
using namespace std;
    int linearsearch(int arr[],int size,int target){
        for (int i=0;i<size;i++){
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
    }
    int main(){
        int arr[]={2,4,5,6,7,1};
        int size=6;
        int target =60;
        cout<<linearsearch(arr,size,target)<<endl;
    }