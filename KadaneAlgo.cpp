#include <iostream>
#include <climits>
using namespace std;

int kadane(int * arr, int n){
    int maxSum = INT_MIN;
    int start = 0;
    for(int i = 0; i < n; i++){
        int sum  = 0;
        
        for(int j = i; j < n; j++){
            sum += arr[j];
    
            maxSum = max(sum, maxSum);
        }
    }
    int sum1 = 0;
    cout<<start<<endl;
    
    return maxSum;
}

int main(){
    int nums[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int maxi = kadane(nums, 9);
    cout<<"Max sum : "<<maxi<<endl;
    return 0;
}