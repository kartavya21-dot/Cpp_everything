#include <iostream>
#include <vector>
using namespace std;

// Out of Reach
// Was Asked to return number of letter to be inseted to make string palindrome, but I misunderstood that insertion is possible only at ends;
// Works as my assumption


void print(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int countMin(string str)
{
    // complete the function here
    vector<int> freq(500, 0);
    // print(freq);
    int p, q, n = str.length();
    for (int i = 1; i < n; i++)
    {
        cout << " i : " << i ;
        p = i - 1, q = i + 1;

        while (p != -1 || q != n)
        {
            cout << "In loop 2               ";
            if (str[p] == str[q])
            {
                cout << "In condition 1               ";
                cout << freq[i];
                freq[i]++;
                p--;
                q++;
            }
            else{
                cout << "In condition 2       ";
                break;
            }
        }
        cout << endl;
    }
    int m = freq.size();
    int max = 0;

    for (int i = 0; i < m; i++)
    {
        if (max < freq[i])
        {
            max = freq[i];
            // index = i;
        }
    }
    cout << "max :  "<<max<<endl;
    int ans = n - 1 - (2 * max);
    cout << "ans: " << ans;
    return ans;
}

int main()
{
    string str = "abcdbca";
    countMin(str);

    return 0;
}