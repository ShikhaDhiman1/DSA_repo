#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    if(n < 2) return vector<int> {-1,-1};

    int firstMax = INT_MIN, secMax = INT_MIN;
    int firstMin = INT_MAX, secMin = INT_MAX;

    for(int i = 0; i < n; i++){
        firstMax = max(firstMax, arr[i]);
        firstMin = min(firstMin, arr[i]);
    }

    for(int i = 0; i <n ;i++){
        if(arr[i] >= secMax && arr[i] != firstMax){
            secMax = max(secMax, arr[i]);
        }
        if(arr[i] <= secMin && arr[i] != firstMin){
            secMin = min(secMin, arr[i]);
        }
    }
    
    return (vector<int> {secMax, secMin});
}

// vector <int> getSecondOrderElements2(int n, vector<int> arr){
//     int small = INT_MAX, secSmall = INT_MAX;

//     for(int i = 0; i < n; i++){
//         if(arr[i] < small){
//             small = arr[i];
//             secSmall = small;
//         }
//         else if(arr[i] < secSmall && arr[i] > small){
//             secSmall = arr[i];
//             cout<<secSmall<<endl;
//         }
//     }
//     int large = INT_MIN, secLarge = INT_MIN;

//     for(int i = 0; i < n; i++){
//         if(arr[i] > large){
//             large = arr[i];
//             secLarge = large;
//         }
//         else if(arr[i] > secLarge && arr[i] < large){
//             secLarge = arr[i];
//             cout<<secLarge<<endl;
//         }
//     }

//     return vector<int> {secLarge, secSmall};
// }                                       // NOT CORRECT YET( To revisit)


int main(){ 
    // vector<int> arr = {1,2,2,4,6,6,7,7};
    vector<int> arr = {1};

    vector<int> res = getSecondOrderElements(arr.size(), arr);

    for(auto x : res){
        cout<<x<<" ";
    }
    cout<<endl;

    // vector<int> res2 = getSecondOrderElements2(arr.size(), arr);
    // for(auto x : res2){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    return 0;
}