#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> power(n);
    for(int i = 0; i<n; i++){
        cin >> power[i];
    }
    sort(power.begin(), power.end());
    int p;
    cin >> p;
    vector<pair<int,int>> answer;
    for(int i = 0; i<p; i++){
        int M;
        cin >> M;
        int count = upper_bound(power.begin(), power.end(), M) - power.begin();
        int sum = 0;
        for(int j = 0; j<count; j++){
            sum = sum + power[j];
        }
        answer.push_back({count, sum});
    }
    for(int i =0; i<answer.size(); i++){
        cout << answer[i].first << " " << answer[i].second << '\n';
    }
}