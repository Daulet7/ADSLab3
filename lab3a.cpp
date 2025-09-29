#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> seq(t);

    for(int i =0; i<t; i++){
        cin >> seq[i];
    }

    vector<pair <int, pair<int,int> > > matr;

    int n, m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        vector<int> row(m);
        for(int j = 0; j<m; j++){
            cin >> row[j];
        }
        if(i%2==0){
            for(int j = 0; j<m; j++){
                matr.push_back({row[j], {i, j}});
            }
        }
        else{
            for(int j = m-1; j>=0; j--){
                matr.push_back({row[j], {i, j}});
            }
        }
    }

    for(int i =0; i<t; i++){
        int x = seq[i];
        int L=0;
        int R=n*m-1;
        bool found = false;
        while(L<=R){
            int index = L + (R-L)/2;
            int middle = matr[index].first;
            if(middle==x){
                cout << matr[index].second.first << " " << matr[index].second.second << "\n";
                found = true;
                break;
            }
            else if (middle<x){
                R=index -1;
            }
            else{
                L=index + 1;
            }
        }
        if(!found){
            cout << -1 << "\n";
        }
    }
    return 0;
}