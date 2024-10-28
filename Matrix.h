#pragma once
class Matrix
{
private:
  int n_column;
  int n_row;

public:
  Matrix(int n_column, int n_row);
  // todo: return value should be a 2d array (matrix that is transposed)
  // void transpose();

  // getters
  int get_n_column();
  int get_n_row();
};