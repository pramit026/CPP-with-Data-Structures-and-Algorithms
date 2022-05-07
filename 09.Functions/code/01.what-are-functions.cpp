/*
// intro part
#include <iostream>
using namespace std;

int fact(int n){
	int i = 1;
	int ans = 1;
	while(i <= n){
		ans *= i;
		i++;
	}
	return ans;
}



int main(){
	// ncr

	// int n, r;
	// cin >> n >> r;
	// int fact_n = 1;
	// int i = 1;
	// while(i <= n){
	// 	fact_n = fact_n * i;
	// 	i++;
	// }
	// int fact_r = 1;
	// for (int i = 1; i <= r; ++i)
	// {
	// 	fact_r *= i;
	// }

	// int fact_n_r = 1;
	// for (int i = 1; i <= n-r; ++i)
	// {
	// 	fact_n_r *= i;
	// }
	// cout << fact_n/(fact_r*fact_n_r);
	int n,r;
	cin >> n >> r;
	cout << fact(n)/(fact(r)*fact(n-r)) << endl;
}
*/
/*

// prime no using function
#include <iostream>
using namespace std;

bool isPrime(int n){
	for (int d = 2; d < n; ++d)
	{
		if(n % d == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	cout << isPrime(n) << endl;
}
*/
/*
// print 1 to n
#include <iostream>
using namespace std;

void print1toN(int n){
	for (int i = 1; i <= n; ++i)
	{
		
		cout << i << " ";
	}
}

int main(){
	int n ;
	cin >> n;
	print1toN(n);

}
*/

// multiply
#include <iostream>
using namespace std;

int multiply(int a, int b){
	return a*b;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << multiply(a,b) << endl;

}