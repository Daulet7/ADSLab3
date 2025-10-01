#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> seq(n);
    for(long long i = 0; i<n; i++){
        cin >> seq[i];
    }

    long long l = *max_element(seq.begin(), seq.end());
    long long r = 0;
    for(long long i = 0; i<n; i++){
        r += seq[i];
    }

    while(l<r){
        long long mid = (l+r)/2;
        long long blocks = 1;
        long long sum = 0; 
        for(long long i = 0; i<n; i++){
            if((sum + seq[i]) > mid){
                sum = 0;
                blocks++;
            }
            sum = sum + seq[i];
        }
        if(blocks>k){
            l = mid+1;
        }
        else{
            r = mid;
        }
    }
    cout << l;
    return 0;
}