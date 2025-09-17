#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

int solve(vector<int>& bags, int c, int n){
    vector<long long> powOf2 = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483647 };
    unordered_set<int> st;
    int count = 0;
    // cout << " Iam here";

    for(int i = 0; i < n; i++){

        if(bags[i] > c){
            count++;
            continue;
        }

        long long num = bags[i];
        int p = 0;

        for(int j = 0; j < powOf2.size(); j++){
            if((num * powOf2[j]) > c){
                break;
            }
            p++;
        }

        while (true)
        {
            if(p == -1)  break;
            if(st.find(p) == st.end()){
                st.insert(p);
                break;
            }
            p--;
        }
        
        // cout << "For bags: " << bags[i] << " " << p << endl;

        // st.insert(p);
    }

    return count + ((n - count) - st.size());

}

class formate{

    public:
    vector<int> af;
    int cf;
    int nf;
    formate(vector<int> a, int c, int n){
        af = a;
        cf = c;
        nf = n;
    }
};

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    vector<formate> f;

    while(t > 0){
        int n;
        int c;
        cin >> n >> c;
        // cout << "cjeck";

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        formate fs(a, c, n);
        f.push_back(fs);
        // ans.push_back(solve(a, c));
        t--;
    }
    for(auto i : f){
        int ele = solve(i.af, i.cf, i.nf);
        ans.push_back(ele);
    }

    for(int i : ans)
        cout << i << endl;

    return 0;
}
