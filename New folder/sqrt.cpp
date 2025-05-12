
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n, ans , s = 0;
	cin >> n;
	int e = n, m = (e + s)/2;
	cout <<s <<"  " << e << "   " << m << endl;
	while( s <= e){
		if(m * m == n){
			ans = m;
			break;
		}
		else if(m * m < n){
			ans = m;
			s = m + 1;
		}
		else{
			e = m - 1;
		}
		m = (s + e) / 2;
	}
	cout << ans;;
}