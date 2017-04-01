#include <fstream>
#include <vector>
#include <algorithm>
#include "lab3.h"
int main()
{
	int n;
	int sum = 0;
	vector<int> v(8);
	ifstream inFile("file.in", ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	while(inFile >> n >> v.at(0) >> v.at(1) >> v.at(2) >> v.at(3) >> v.at(4) >> v.at(5) >> v.at(6) >> v.at(7)){
		sort(v.begin(), v.end());
		for(int k = 7; k > 2; --k){
			sum += v.at(k);
		}
	}
	cout << "Total weight = " << sum << endl;
	return 0;
}
