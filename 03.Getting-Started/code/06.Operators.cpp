#include <iostream>
using namespace std;
int main(){
	// fah to celcius
	int f ;
	cin >> f;
	int cel = (f-32)*5 /9;
	cout << cel << endl;

		// modulo op
	cout << 10 % 3 << endl;

	// comparison.. relational operators
	int a , b ;
	cin >> a >> b;
	bool isEqual = (a == b);
	bool isGreater = (a > b);
	bool isLess = (a < b);

	cout << "Are they equal: "<<isEqual<<endl;
	cout << "is A greater: "<<isGreater<<endl;
	cout << "is A less than b: "<<isLess<<endl;


	// logical operators
	cout <<"Not equal "<< !isEqual<<endl;

	bool third = isEqual && isGreater;
	bool four = isEqual || isGreater;

	cout << third << endl;
	cout << four << endl;

}