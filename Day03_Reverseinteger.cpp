#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//program to reverse a integer number
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N;
		cin >> N;
		int reversed = 0;
		while (N > 0) {
			reversed = reversed * 10 + N % 10;
			N /= 10;
		}
		cout << reversed << endl;
	}

}
