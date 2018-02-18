 #include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>  
#include <algorithm>



using namespace std;
//Checks to see if odd
int odder(int s) {
	if (!(s % 2 == 0) && (s >= 3 && s <= 15)) {
		return 1;
	}
	else {
		return 0;
	}
}
//Used to sum Val
vector< vector<int> >holdV(int s) {
	int size = s;
	int v = 0;
	vector< vector<int> >matrix;

	for (int i = 0; i < size; i++) {
		vector<int> row;
		for (int j = 0; j < size; j++) {

			v = ((i + j + 1 + (size / 2)) % size) + ((i + 2 * j + 1) % size) + 1;
			row.push_back(v);

		}
		matrix.push_back(row);


	}
	for (int i = 0; i<size; ++i) {
		for (int j = 0; j<size; ++j) {
			matrix[i][j];
		}
	

	}
	// Matrix Values
	return matrix;
}
//USed to create MAgic Square
vector< vector<int> > straightMagic( int size) {
	int v = 0;
	vector< vector<int> >matrix;
	
	for (int i = 0; i < size; i++) {
		vector<int> row;
		for (int j = 0; j < size; j++) {
			
			 v=((i + j + 1 + (size / 2)) % size) + ((i + 2 * j + 1) % size) + 1;
			
			row.push_back(v);
			
		}
		matrix.push_back(row);
	
		
	}
	
	return matrix;
	}
//Sum of Rows
	void rowSum(int s, vector< vector<int> > m) {
		vector< vector<int> > matrix = m;
		int size = s;
		cout << "Checking the sums of every row: ";
		for (int i = 0; i < size; i++) {
			int sum = 0;
			for (int j = 0; j < size; j++) {
				sum += matrix[i][j];

			}
			cout << sum << ' ';

		}
		
	}
	//Sum of Columns
	void colSum(int s, vector<vector<int>> m) {
		int size = s;
		cout << "\nChecking out the sum of every column: ";
		vector<vector<int>> matrix = m;
		for (int  j= 0; j < size; j++) {
			int sum = 0;
			for (int i = 0; i < size; i++) {
				sum+=matrix[i][j];
			}
			cout << sum << " ";
		}
	}
	// Sum of Diagonals 
	void sumDiag(int s, vector<vector<int>> m) {
		int size = s;
		int diag1 = 0;
		int diag2 = 0;
		cout << "\nChecking the sums of every diagnoal: ";
		vector<vector<int>> matrix = m;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j)
			{
				if (i == j)
					diag1 += matrix[i][j];
				if (i + j == (size - 1))
					diag2 += matrix[i][j];
			}

		}
		cout << diag1<<" ";
		cout << diag2 <<endl;

	}
	
	// Changing the magic square Values
	void flipit(int s, vector<vector<int>> m) {
		int count = 1;
		int size = s;
		vector<vector<int>> matrix = m;
		while (count < 11) {
			cout <<count<<endl;
			switch (count) {
				
			case 1:
				for (int i = 0; i < size; i++)    //Rows.
				{
					for (int j = 0; j < size; j++) //Columns
					{
						printf("%3d", matrix[i][j]);
					}
					cout << endl;
				}
				break;
			case 2:
				for (int i = size - 1; i >= 0; i--)    //Rows.
				{

					for (int j = size-1; j >=0; j--) //Columns
					{
						printf("%3d", matrix[i][j]);
					}
					cout << endl;

				}
			
				break;
			case 3:
				for (int i = size-1; i >=0; i--)    //Rows.
				{
				
					for (int j = 0; j <size; j++) //Columns
					{
						printf("%3d", matrix[i][j]);
					}
					cout << endl;

				}
			
					break;
			case 4:
				for (int i = 0; i <size; i++)    //Rows.
				{

					for (int j = size-1; j >=0; j--) //Columns
					{
						printf("%3d", matrix[i][j]);
					}
					cout << endl;

				}
				
				break;
			case 5:
				for (int i = 0; i < size; i++)    //Rows.
				{
					for (int j = 0; j < size; j++) //Columns
					{
						printf("%3d", matrix[i][j]);
					}
					cout << endl;
				}
				break;
			case 6:
				for (int i = size - 1; i >= 0; i--)    //Rows.
				{

					for (int j = size - 1; j >= 0; j--) //Columns
					{
						printf("%3d", matrix[i][j]);
					}
					cout << endl;

				}
				break;
			case 7:
				for (int i = size - 1; i >= 0; i--)    //Rows.
				{

					for (int j = 0; j <size; j++) //Columns
					{
						printf("%3d", matrix[j][i]);
					}
					cout << endl;

				}
				break;
			case 8:
				for (int i = 0; i <size; i++)    //Rows.
				{

					for (int j = size - 1; j >= 0; j--) //Columns
					{
						printf("%3d", matrix[j][i]);
					}
					cout << endl;
					
				}
				
				rowSum(s, matrix);
				colSum(s, matrix);
				sumDiag(s, matrix);
				break;
			case 9:
				
				for (int i = size - 1; i >= 0; i--)    //Rows.
				{

					for (int j = size - 1; j >= 0; j--) //Columns
					{
						printf("%3d", matrix[j][i]);
					}
					cout << endl;
				}
					break;

			case 10:
				for (int i = 0; i < size; i++)    //Rows.
				{
					for (int j = 0; j < size; j++) //Columns
					{
						printf("%3d", matrix[j][i]);
					}
					cout << endl;
				}
				break;

				
			}
			
			
			
			cout << endl;
			count++;
		}
	}
			
	
int main() {
	
	
	cout << "Enter the size of a magic square: " << flush;
	int n=0;
	cin >> n;
	
	if (odder(n) == 1) {
		
		straightMagic(n);
		vector< vector<int> > m = holdV(n);
		
		flipit(n,m);
		
	
	}
	else {
		cout << "Not odd or betwwen 3-15"<<endl;
	}
	
	system("pause");
	return 0;
}
