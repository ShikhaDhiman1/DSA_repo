#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0, j = i+1;
    while(i < nums.size() && j < nums.size()){
        if(nums[i] == nums[j]){
            nums.erase(nums.begin() + j);            
        }
        if(nums[i] != nums[j]){
            i = j;
            j++;
        }
    }
    return nums.size();
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums)<<endl;
    
    return 0; 
}