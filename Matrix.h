/* Name: Andrew Nguyen
 * WSU ID: u847r365
 * Assignment: 4
 * WSU E-mail: u847r365@wichita.edu
 */
 
#ifndef MATRIX_CPP
#define MATRIX_CPP
 
class Matrix
{
  public:
	Matrix();
	~Matrix();
	Matrix(const Matrix& m1);
	friend Matrix operator+(const Matrix& m1, const Matrix& m2);
	friend ostream& operator<<(ostream& OSObj, Matrix& m);
	friend istream& operator>>(istream& ISObj, Matrix& m);
	Matrix& operator=(const Matrix& m2);
	
  private:
	int numRows;
	int numCols;
	double **mArray;
};

Matrix operator+(Matrix& m1, Matrix& m2);
ostream& operator<<(ostream& OSObj, Matrix& m);
istream& operator>>(istream& ISObj, Matrix& m);

#endif
