#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int l = 0;
    int r = n-1;
    if(x>arr[r]||x<arr[l]){
        cout << "No";
        return 0;
    }
    else{
        while(l<=r){
            int mid = (l+r)/2;
            if(x==arr[mid]){
                cout << "Yes" << "\n";
                return 0;
            }
            else{
                if(x<arr[mid]){
                    r = mid - 1;
                }
                else{
                    l = mid+1;
                }
            }
        }
    }
    cout << "No" << "\n";
    return 0;
}