#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, h;
    cin >> n >> h;
    vector<long long> bags(n);
    long long l = 1;
    long long r = 0;
    for(long long i = 0; i<n; i++){
        cin >> bags[i];
        r = max(r, bags[i]);
    }
    while(l<r){
        long long mid = (l+r)/2;
        long long sum = 0;
        for(long long i = 0; i<n; i++){
            sum = sum + ((bags[i]+mid-1)/mid);
        }
        if(sum<=h){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}