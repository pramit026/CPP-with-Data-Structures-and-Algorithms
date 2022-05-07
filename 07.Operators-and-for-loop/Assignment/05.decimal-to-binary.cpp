#include <iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	int ans = 0;
	int place_value = 1;
	while(n != 0){
		int rem = n % 2;
		ans += (rem*place_value);
		n /= 2;
		place_value *= 10;
	}
	cout << ans << endl;
}