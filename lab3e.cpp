#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> coord;
    for(int i = 0; i<n; i++){
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        coord.push_back(max(x,y));
    }

    sort(coord.begin(), coord.end());

    cout << coord[k-1];
    
    return 0;
}