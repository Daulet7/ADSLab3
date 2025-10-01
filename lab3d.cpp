#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> seq(n);
    for(int i = 0; i<n; i++){
        cin >> seq[i];
    }

    sort(seq.begin(), seq.end());

    vector<pair<int, int>> qr;
    for(int i = 0; i<q; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        qr.push_back({a,b});
        qr.push_back({c,d});
    }

    for(int i = 0; i<(q*2); i+=2){
        int a = qr[i].first;
        int b = qr[i].second;
        int c = qr[i+1].first;
        int d = qr[i+1].second;

        int first = upper_bound(seq.begin(), seq.end(), b) - lower_bound(seq.begin(), seq.end(), a);
        int second = upper_bound(seq.begin(), seq.end(), d) - lower_bound(seq.begin(), seq.end(), c);
        int intersection = 0;
        if(max(a,c) <= min(b,d)){
            intersection = upper_bound(seq.begin(), seq.end(), min(b,d)) - lower_bound(seq.begin(), seq.end(), max(a,c));
        }
        int answer = first + second - intersection;
        cout << answer << '\n';
    }
    return 0;
}