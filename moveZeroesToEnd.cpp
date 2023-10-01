#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    // if(nums.size() == 1) return;
    // if(nums == vector<int> (nums.size(), 0)) return;
    // int i = 0, j = 0;
    // while(i < nums.size()){
    //     if(nums[j] == 0){
    //         nums.erase(nums.begin() + j);
    //         nums.push_back(0);
    //         i++;
    //     }
    //     else{
    //         j++;
    //         i++;
    //     }
    // }               BETTER APPROACH
    int j = -1;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1) return;

    for(int i = j+1; i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        } 
    }                        // OPTIMAL APPROACH
    return;
}

int main(){
    // vector<int> nums = {1,0,2,3,0,5,0};
    vector<int> nums = {0,0,1};
    moveZeroes(nums);

    for(auto x : nums){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}