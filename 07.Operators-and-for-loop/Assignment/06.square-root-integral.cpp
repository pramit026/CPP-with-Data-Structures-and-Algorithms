#include <iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	int i = 1, result = 1;
	while(result <= n){
		i++;
		result = i*i;
	}
	cout << i-1 << endl;

}