#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] <= nums2[j])
            nums1[k--] = nums2[j--];
        else
            nums1[k--] = nums1[i--]; 
    }
    while (i >= 0)
    {
        nums1[k--] = nums1[i--];
    }
    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }
    
}

void printVector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    // vector<int> nums2 = {2, 5, 6};
    // int m = 3, n = 3;

    // vector<int> nums1 = {0};
    // vector<int> nums2 = {1};
    // int m = 0, n = 1;

    vector<int> nums1 = {1, 3, 9, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    merge(nums1, m, nums2, n);

    printVector(nums1);
    return 0;
}