#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int nCr(float n, float r){
    if(n == r){
        return 1;
    }
    float res = 1;
    for(float i = 1; i <=r; i++){
        res = res * ((n - i + 1)/i);
    }
    return res;
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    for(int i = 0; i < numRows; i++){
        result.push_back(vector<int>());
        for(int j = 0; j <= i; j++){
            int ncr = nCr(i, j) ;
            result[i].push_back(ncr);
        }
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    vector<vector<int>> result = generate(n);
    cout<<"HEllo\n";
    for(auto i: result){
        for(auto x : i){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
