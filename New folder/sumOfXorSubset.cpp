#include <iostream>
#include <vector>
using namespace std;

int subsetXORSum(vector<int> nums)
{
    int ans = 0, n = nums.size(), sum = nums[0], part;
    for (int i = 1; i < n; i++)
    {
        cout << " i am in loop 1 for i = " << i << endl;
        sum = sum + nums[i];
  
        for (int j = 0; j < n - i; j++)
        {
            part = nums[j];
     
            cout << " i an in loop 2 for j = " << j << endl;
            for (int k = j + 1; k < n; k++)
            {
                cout << " i an in loop 3 for k = " << k << endl;
                cout << "part and nums[k]  " << part << "  " << nums[k] << endl << endl;

                part = part ^ nums.at(k);
            }
            ans = ans + part;
        }
    }
    cout << ans <<"  "<< sum << endl;
    ans = ans + sum;
    return ans;
}

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
}

int main()
{
    vector<int> nums = {5, 1, 6};
    // nums.push_back(1);
    // nums.push_back(3);

    cout << subsetXORSum(nums);

    int a = 5 ^ 1, b = 5 ^ 6, c = 1 ^ 6, d = 5 ^ 1 ^ 6;

 
    cout << endl << a << "  " << b << "  " << c << "  " << d << " ";
   
    
    return 0;
}