Program: Matrix.o main.o
    g++ -g -std=c++11 Matrix.o main.o
    
Matrix.o: Matrix.cpp Matrix.h
    g++ -g -std=c++11 Matrix.cpp
    
SqMatrix.o: SqMatrix.cpp SqMatrix.h
    g++ -g -std=c++11 SqMatrix.cpp
    
main.o: Matrix.h SqMatrix.h main.cpp
    g++ -g -std=c++11 main.cpp
