#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int lines = 0;
    vector<int> blocks;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        blocks.push_back(a+lines);
        lines = lines + a;
    }
    vector<int> answer;
    for(int i = 0; i<m; i++){
        int r = n-1;
        int l = 0;
        int a;
        cin >> a;
        while(l<r){
            int mid = (r+l)/2;
            if(a<=blocks[mid]){
                r=mid;
            }
            else{
                l = mid+1;
            }
        }
        answer.push_back(l+1);
    }
    for(int i = 0; i<answer.size(); i++){
        cout << answer[i] << '\n';
    }
    return 0;
}