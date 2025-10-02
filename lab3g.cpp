#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, f;
    cin >> n >> f;
    vector<long long> c;
    long long l = 1;
    long long r = 0;
    for(long long i =0; i<n; i++){
        long long a;
        cin >> a;
        c.push_back(a);
        r = max(r,a);
    }
    while(l<r){
        long long mid = (l+r)/2;
        long long count = 0;
        for(long long i = 0; i<n; i++){
            count = count + ((c[i]+mid-1)/mid);
            if(count>f){
                break;
            }
        }
        if(count<=f){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}