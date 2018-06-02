// Class to perform matrix manipulation calculations
// for the Neural Network library.

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix {
public:

	//Constructor takes #rows, #columns, and fill value
	Matrix(int rows, int cols, int init_num = 0);

	//Copy Constructor, makes a copy of the parsed object
	Matrix(const Matrix &M);

	//Populate elements of a matrix with value
	void Fill(double value);

	//Randomize all elements in a matrix
	void Randomize(); // could replace this with special case of fill

	//Set all values to 0
	void Empty();

	//Returns true if matrix is all 0's
	bool isEmpty();

	//Print the content of the matrix to the console
	void print();

	//Invert the matrix
	void Invert();

	//Get #rows
	int get_rows();

	//Get #columns
	int get_columns();

	//Matrix Addition and subtraction operators
	Matrix operator+(const Matrix& M);
	Matrix operator-(const Matrix& M);

	//Matrix multiplication operator
	Matrix operator*(const Matrix& M);

	//Linearised matrix in vector form;
	std::vector<double> data_;

	//Rows and columns of matrix
	int rows_;
	int cols_;

};

#endif //MATRIX_H
