#include <iostream>
#include <vector>
#include <limits>
#include<algorithm>
using namespace std;

// int circularSubarraySum(vector<int> arr)
// {

//     // your code here
//     int max = -23423, sIndex = 0, sum = 0, eIndex = 0, n = arr.size();
//     // int max = INT_MIN, sum = 0, sIndex = 0, eIndex = 0, n = arr.size();
//     cout << "sIndex" << " " << "eIndex" << " => " << "sum" << "  " << "max" << endl;

//     for (int i = 0; i < 2 * n; i++)
//     {
//         eIndex = i;
//         int diff = eIndex - sIndex;
//         sum += arr[i % n];
//         if (sum > max && diff < n)
//         {
//             max = sum;
//         }
//         if (sum < 0)
//         {
//             sum = 0;
//             sIndex = i + 1;
//         }
//         cout << sIndex  << " " << eIndex << " => " << sum << "  " << max << endl;
//     }

//     return max;
// }
int circularSubarraySum(vector<int> arr)
{

    // your code here
    int max = -23423, sIndex = 0, sum = 0, eIndex = 0, n = arr.size();
    for(int i = 0; i < n; i++)
        arr.push_back(arr[i]);
 
    cout << "sIndex" << " " << "eIndex" << " => " << "sum" << "  " << "max" << endl;

    for (int i = 0; i < (2 * n) ; i++)
    {
        eIndex = i;
        int diff = eIndex - sIndex;
        sum += arr[i];
        if (sum > max && diff < n)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
            sIndex = i + 1;
        }
        cout << sIndex  << " " << eIndex << " => " << sum << "  " << max << endl;
    }

    return max;
}

int main()
{
                     // 0   1    2  3  4  5   6   7  
    vector<int> arr = {-1, 40, -14, 7, 6, 5, -4, -1};
    circularSubarraySum(arr);

    return 0;
}