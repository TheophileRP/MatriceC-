//
//  matrice.hpp
//  NeuralNet
//
//  Created by Theophile Rousic--Plantec on 19/08/2020.
//  Copyright © 2020 Trompette. All rights reserved.
//

#ifndef matrice_hpp
#define matrice_hpp

#include <stdio.h>
#include <vector>

class Matrix{
public:
    //Constructeur Destructeur
    Matrix(int _row, int _col, double _initialVal);
    Matrix(int _row, int _col);
    Matrix(const Matrix& _m);
    Matrix();
    ~Matrix();
    //Affichage
    void print();
    //Attribute Access
    int get_rows();
    int get_cols();
    
    Matrix transpo();
    
    Matrix& operator=(const Matrix& _m);

private:
    int m_rowSize;
    int m_colSize;
    std::vector<std::vector<double> > m_matrix;
};



#endif /* matrice_hpp */

//#ifndef __QS_MATRIX_H
//#define __QS_MATRIX_H
//
//#include <vector>
//
//template <typename T> class QSMatrix {
// private:
//  std::vector<std::vector<T> > mat;
//  unsigned rows;
//  unsigned cols;
//
// public:
//  QSMatrix(unsigned _rows, unsigned _cols, const T& _initial);
//  QSMatrix(const QSMatrix<T>& rhs);
//  virtual ~QSMatrix();
//
//  // Operator overloading, for "standard" mathematical matrix operations
//  QSMatrix<T>& operator=(const QSMatrix<T>& rhs);
//
//  // Matrix mathematical operations
//  QSMatrix<T> operator+(const QSMatrix<T>& rhs);
//  QSMatrix<T>& operator+=(const QSMatrix<T>& rhs);
//  QSMatrix<T> operator-(const QSMatrix<T>& rhs);
//  QSMatrix<T>& operator-=(const QSMatrix<T>& rhs);
//  QSMatrix<T> operator*(const QSMatrix<T>& rhs);
//  QSMatrix<T>& operator*=(const QSMatrix<T>& rhs);
//  QSMatrix<T> transpose();
//
//  // Matrix/scalar operations
//  QSMatrix<T> operator+(const T& rhs);
//  QSMatrix<T> operator-(const T& rhs);
//  QSMatrix<T> operator*(const T& rhs);
//  QSMatrix<T> operator/(const T& rhs);
//
//  // Matrix/vector operations
//  std::vector<T> operator*(const std::vector<T>& rhs);
//  std::vector<T> diag_vec();
//
//  // Access the individual elements
//  T& operator()(const unsigned& row, const unsigned& col);
//  const T& operator()(const unsigned& row, const unsigned& col) const;
//
//  // Access the row and column sizes
//  unsigned get_rows() const;
//  unsigned get_cols() const;
//
//};
//
//#include "matrice.cpp"
//
//#endif
