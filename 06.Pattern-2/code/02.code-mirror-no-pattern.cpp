/*
   1
  12
 123
1234

*/
#include <iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	int row = 1;
	while(row <= n){
		int spaces = 1;
		int column = 1;
		while(spaces <= n-row){
			cout << ' ';
			spaces++;
		}
		while(column <= row){
			cout << column;
			column++;
		}
		cout << endl;
		row++;
	}
}