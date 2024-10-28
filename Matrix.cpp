#include "Matrix.h"

Matrix::Matrix(int n_column, int n_row)
{
  this->n_column = n_column;
  this->n_row = n_row;
}

int Matrix::get_n_column()
{
  return this->n_column;
}

int Matrix::get_n_row()
{
  return this->n_row;
}