#include <iostream>
using namespace std;

void fah2cel(int startFah, int endFah , int step){
	int currfahval = startFah;
	int celciusval;
	while(currfahval <= endFah){
		celciusval = ((currfahval-32)*5)/9;
		cout << currfahval<<'\t'<< celciusval;
		cout << endl;
		currfahval += step;
	}
	// cout << currfahval<<'\t'<< celciusval;
}


int main(){
	int s,e,w;
	cin >> s >> e >> w;
	fah2cel(s,e,w);
}