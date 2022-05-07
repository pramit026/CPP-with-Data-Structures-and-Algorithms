#include <iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	int ans = 0;
	int place_value = 1;
	while(n > 0){
		int rem = n % 10;
		ans = ans + (rem*place_value);
		// n /= 10;
		place_value *= 2;  // we are doing 2 ^.. it is multiplying by 2
		n /= 10;
	}
	cout << ans << endl;
}