#include <iostream>
using namespace std;
int main(){
	char c;
	int count_of_char=0,count_of_digit=0,count_of_whitespaces = 0;
	while(c != '$'){
		c = cin.get();
		if((c >= 'a' && c <= 'z')|| (c >='A' && c <= 'Z')){
			count_of_char++;
		}else if(c >= '0' && c <= '9'){
			count_of_digit++;
		}else if(c == '\t' || c ==' ' || c =='\n'){
			count_of_whitespaces++;
		}

	}
	cout << count_of_char << " " << count_of_digit << " " << count_of_whitespaces << endl;
}