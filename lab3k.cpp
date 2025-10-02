#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int l = 0; 
    int sum = 0;
    int answer = n;

    for(int r = 0; r<n; r++){
        sum += arr[r];
        while(sum>=k){
            answer = min(answer, r - l + 1);
            sum -= arr[l];
            l++;
        }
    }

    cout << answer;
}