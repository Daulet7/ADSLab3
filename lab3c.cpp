#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> seq(n);
    for(int i = 0; i<n; i++){
        cin >> seq[i];
    }
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
        int answer = 0;
        for(int j = 0; j<n; j++){
            if(seq[j]>=a && seq[j]<=b || seq[j]>=c && seq[j]<=d){
                answer++;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}