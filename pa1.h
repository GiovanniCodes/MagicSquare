#pragma once
#include <vector>
using namespace std;
class pa1 {
private:
	int size;
	int v;
	int n;
	int s;
	int count;
	int diag1;
	int diag2;
	int sum;
	vector<vector<int>> matrix;
	vector<int> row;
public:
	int odder(int s);
	vector< vector<int> >holdV(int s);
	vector< vector<int> > straightMagic(int size);
	void rowSum(int s, vector< vector<int> > m);
	void colSum(int s, vector<vector<int>> m);
	void sumDiag(int s, vector<vector<int>> m);
	void flipit(int s, vector<vector<int>> m);
};