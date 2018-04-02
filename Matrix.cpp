/* Name: Andrew Nguyen
 * WSU ID: u847r365
 * Assignment: 4
 * WSU E-mail: u847r365@wichita.edu
 */
 
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "Matrix.h"

Matrix::Matrix()
{
	numRows=0;
	numCols=0;
}

virtual Matrix::~Matrix()
{
	cout<<"Matrixes are not the same dimension. Deallocating space.";
	for (int i=0; i<numRows; i++)
	{
		delete[] mArray[i];
	}
	delete[] mArray;
	
	cout<<"Space deallocated.";
}

Matrix::Matrix(const Matrix& m1)
{
	cout<<"Matrix copy ctor: Allocated the matrix.\n"
	numRows=m1.numRows;
	numCols=m1.numCols;
	mArray=new double* [numRows];
	for (int i=0; i<numRows; i++)
	{
		mArray[i]=new double[numCols];
		*(mArray[i])=*(m1.mArray[i]);
	}
}

Matrix operator+(const Matrix& m1, const Matrix& m2)
{
	Matrix m(m1);
	for (int i=0; i<m.numRows; i++)
	{
		for (int j=0; j<m.numCols; j++)
		{
			m.mArray[i][j] = m.mArray[i][j] + m2.mArray[i][j];
		}
	}
}

ostream& operator<<(ostream& OSObj, Matrix& m)
{
	OSObj<<"This is a "<<m.numRows<<" by "<<m.numCols<<" matrix.\n";
	for (int i=0; i<m.numRows; i++)
	{
		for (int j=0; j<m.numCols; j++)
		{
			OSObj<<m.mArray[i][j];
		}
	}
}
	
istream& operator>>(istream& ISObj, Matrix& m)
{
	ISObj>>m.numRows>>m.numCols;
	for (int i=0; i<m.numRows; i++)
	{
		for (int j=0; j<m.numCols; j++)
		{
			ISObj>>m.mArray[i][j];
		}
	}
	return ISObj;
}

Matrix& Matrix::operator=(const Matrix& m2)
{
	if (numRows==m2.numRows && numCols==m2.numCols)
	{
		if (this != &m2)
		{
			
	        for (int i=0; i<numRows; i++)
	        {
		        for (int j=0; j<numCols; j++)
		        {
			        mArray[i][j]=m2.mArray[i][j];
		        }
	        }
		}
	    else
	    delete mArray;
	    numRows=m2.numRows;
	    numCols=m2.numCols;
	    for (int i=0; i<numRows; i++)
	    {
		    for (int j=0; j<numCols; j++)
		    {
			    mArray[i][j]=m2.mArray[i][j];
		    }
	    }
    }
    cout<<"Matrix operator=: Assigned the matrix.\n";
}

virtual void Matrix::printDiagonal() const
{
	cout<<"No diagonal,\n";
}
