#include <algorithm>
#include <fstream>
#include <vector>
#include "lab3.h"
using namespace std;
int main()
{
	int n;
	int sum = 0;
	ifstream infile("file.in", ios::in);
	if(!infile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	infile >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i){
		infile >> v.at(i);
	}
	sort(v.begin(), v.end());
	for(int k = n - 1; k > n - 6; --k){
		sum += v.at(k);
	}
	cout << "total weight = " << sum << endl;
	return 0;
}
