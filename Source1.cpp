 #include <iostream>
#include <vector>
using namespace std;
int odder(int s) {
	if (!(s % 2 == 0) && (s >= 3 && s <= 15)) {
		return 1;
	}
	else {
		return 0;
	}
}
int straightMagic( int size) {
	int v = 0;
	vector< vector<int> >matrix;
	for (int i = 0; i < size; i++) {
		vector<int> row;
		for (int j = 0; j < size; j++) {
			
			v= ((i + j + 1 + (size / 2)) % size) + ((i + 2 * j + 1) % size) + 1;
			row.push_back(v);
			
		}
		matrix.push_back(row);
	
		
	}
	for (int i = 0; i<size; ++i) {
		for (int j = 0; j<size; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";

	}

	


	
}

int main() {
	
	
	cout << "Input the value " << endl;
	int n=0;
	cin >> n;
	
	if (odder(n) == 1) {
		straightMagic(n);

	}
	else {
		cout << "Not odd or betwwen 3-15"<<endl;
	}
	
	system("pause");
	return 0;
}
