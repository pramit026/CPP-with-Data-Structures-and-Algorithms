#include<iostream>
using namespace std;
int main(){
	char a = 234353;  // we can store -128 to 127. it will store in 4 bytes
	cout << a << endl;

	unsigned int b = -123; // system will treat it like integer, then take number and do 2's complement
	cout << b << endl;
}