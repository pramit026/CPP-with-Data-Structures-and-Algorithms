#include <iostream>
using namespace std;
int main(){
	char c ;
	//cin >> c; // cin ignores spaces , enters
	c = cin.get(); // it counts spaces, newline etc.
	int count = 0;
	while(c != '$'){
		count ++;
		//cin >> c;
		c = cin.get();
	}
	cout << count << endl;
}