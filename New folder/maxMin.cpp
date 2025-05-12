#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int> maxMin(int l, int u, int& max, int& min, vector<int>& arr){
    if(l == u){
        min = arr[l];
        max = arr[l];
        cout << "For l: " << l << ", u : " << u << " , max = " << max << ", min = " << min << "\n";
        return {max, min};
    }else if (l == u - 1){
        if(arr[l] > arr[u]){
            max = arr[l];
            min = arr[u];
            cout << "For l: " << l << ", u : " << u << " , max = " << max << ", min = " << min << "\n";
            return {max, min};
        }else{
            max = arr[u];
            min = arr[l];
            cout << "For l: " << l << ", u : " << u << " , max = " << max << ", min = " << min << "\n";
            return {max, min};
        }
    }else{
        int mid = (l + u) / 2;
        vector<int> mm1 = maxMin(l, mid, max, min, arr);
        vector<int> mm2 = maxMin(mid + 1, u, max, min, arr);
        cout << "For l : " << l << " u : " << u << " => mm1 = {" << mm1[0] << ", " << mm1[1] << "}  ,  mm2 = {" << mm2[0] << ", " << mm2[1] << "} " << endl;
        if(mm1[0] > mm2[0]){
            max = mm1[0];
        }else{
            max = mm2[0];
        }

        if(mm1[1] > mm2[1]){
            min = mm2[1];
        }else{
            min = mm1[1];
        }
        return {max, min};

    }
    
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int max = INT_MIN, min = INT_MAX;
    vector<int> ans = maxMin(0, 4, max, min, arr);
    cout << ans[0] << " " << ans[1];
}