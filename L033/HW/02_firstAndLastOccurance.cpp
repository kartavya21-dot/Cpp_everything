#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int s, int e, int target, int ans = -1){
    if(s > e)
        return ans;

    int mid = s + (e - s) / 2;
    if(arr[mid] == target){
        ans = mid;
        return firstOcc(arr, s, mid - 1, target, ans);
    }else if(arr[mid] < target){
        return firstOcc(arr, mid + 1, e, target, ans);
    }else{
        return firstOcc(arr, s, mid - 1, target, ans);
    }
}
int lastOcc(vector<int> arr, int s, int e, int target, int ans = -1){
    if(s > e)
        return ans;

    int mid = s + (e - s) / 2;
    if(arr[mid] == target){
        ans = mid;
        return lastOcc(arr, mid + 1, e, target, ans);
    }else if(arr[mid] < target){
        return lastOcc(arr, mid + 1, e, target, ans);
    }else{
        return lastOcc(arr, s, mid - 1, target, ans);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 5, 5, 6, 7, 8, 9};
    int target = 10, s = 0, e = arr.size();
    cout << "First Occ of " << target << " in arr is : " << firstOcc(arr, s, e, target) << endl;
    cout << "Last Occ of " << target << " in arr is : " << lastOcc(arr, s, e, target) << endl;
    
    return 0;
}