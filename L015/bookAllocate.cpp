#include <iostream>
#include <vector>
using namespace std;

bool isposs(vector<int>& arr, int n, int m, int mid){

    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            cout << "page Sum " << pageSum << " i " << arr[i] << " = " << pageSum + arr[i] << endl;
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m > n){
        return -1;
    }
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e){
            cout << mid << endl;
        if(isposs(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {6, 3, 2, 8, 7, 5};
    int n = 6, m = 3;

    cout << findPages(arr, n, m);

    return 0;
}