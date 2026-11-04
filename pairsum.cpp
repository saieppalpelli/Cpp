#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(int nums[], int target, int n) {
    vector<int> ans;
for (int i = 0; i < n; i++)   {
for (int j = i + 1; j < n; j++)
 {if (nums[i] + nums[j] == target) {
ans.push_back(i);
 ans.push_back(j); }}
}
return ans;
}
int main(){
    int nums[]={2,3,5,8,9};
    int target =7;
    int n=5;
    vector<int> ans = pairsum(nums, target, n);

    for (int index : ans) {
        cout << index << " ";
    }

    return 0;
}
