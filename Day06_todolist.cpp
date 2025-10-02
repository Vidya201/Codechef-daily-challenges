#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N,D;
	    cin>>N;
	    for(int i=0;i<N;i++){
	        cin>>D;
            int count = 0;
            for(i=0;i<D;i++){
                if(D >= 1000){
                    cout<<count<<endl;
                    count++;
                }

            }
	    }
	}
	return 0;

}
