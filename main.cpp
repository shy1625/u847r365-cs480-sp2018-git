#include <iostream>
using namespace std;

#include "Matrix.h"

int main()
{  Matrix m1, m2, m3;
   cin >> m1 >> m2 >> m3;

   cout << "m3 is:\n" << m3 << endl;

   Matrix m4(m1);
   cout << "m4 is:\n" << m4 << endl;

   m4 = m4;
   cout << "m4 is:\n" << m4 << endl;

   Matrix m5;
   m4 = m5 = m2;
   cout << "m4 is:\n" << m4 << endl;

   Matrix m6;
   m6 = m1+m3;
   cout << "m6 is:\n" << m6 << endl;
}
