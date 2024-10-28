#include "Matrix.h"
#include <iostream>

using namespace std;

int main()
{
    int n_row;
    int n_column;

    cout << "Please enter the number of columns of the matrix" << endl;
    cin >> n_column;
    cout << "Please enter the number of columns of the matrix" << endl;
    cin >> n_row;

    Matrix m(n_column, n_row);
    cout << "Matrix m size: " << m.get_n_column() << "x" << m.get_n_row() << endl;

    return 0;
}
