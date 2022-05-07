#include <iostream>
using namespace std;
int main(){
	// sum of even till n
	int n ;
	cin >> n ;
	int sum = 0;
	int start = 1;
	while(start <= n){
		if(start % 2 == 0){
			sum += start;
		}
		start ++;
	}
	cout << sum << endl;
}