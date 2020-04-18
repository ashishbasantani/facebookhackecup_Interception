#include<bits/stdc++.h>
using namespace std;
int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	ifstream input;
    input.open("input.txt");
    ofstream output;
    output.open("output.txt");

	int t;
	input>>t;
	for(int j=1;j<=t;j++){
		int n;
		input>>n;
		int p;
		for(int i=0;i<=n;i++) input>>p;

		output<<"Case #"<<j<<": "<<(n&1?"1\n0.0\n":"0\n");

	}
}