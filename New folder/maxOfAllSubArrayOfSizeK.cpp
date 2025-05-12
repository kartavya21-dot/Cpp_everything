#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int n){

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = 9, k = 4;
    vector<int> ans;
        
        for(int i=0; i<=n-k; i++){
            int max = arr[i];
            cout<<"start of "<<i<<"th iteration: ";
            for(int j = i+1; j < i+k; j++){
                if(max < arr[j]){
                    max = arr[j];
                }
                cout<<max<<" "<<i<<" "<<j<<endl;
            }
            ans.push_back(max);
            cout<<"After "<<i<<"th Iteration: ";
            printArray(ans, 6);
            cout<<endl<<endl;
        }
        

    return 0;
}