#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int flag = 1;
	for (int i = 1; i <= 1000; ++i)
	{
		int res = (3*i + 2);
		if(res % 4 != 0 && flag <= n){
			cout << res <<" ";
			flag++;
		}
	}
}