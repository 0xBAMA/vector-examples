#include "includes.h"

int main(int argc, char const *argv[])
{

  mat3 mat = mat3(1.0f);    //initialize with identity

  cout << endl << "Identity matrix:" << endl << endl;
  print_matrix(mat);        //print the identity matrix

  //reference is done with mat[column][row]
  // here just setting first column, first and second row values to 5
  mat[0][0] = 5.0f;
  mat[0][1] = 5.0f;

  cout << "Change some values:" << endl << endl;
  print_matrix(mat);          //print the matrix with the changes

  mat3 matinv = inverse(mat); //compute the inverse of mat

  cout << "Compute the inverse:" << endl << endl;
  print_matrix(matinv);       //print the inverse of mat

  cout << "Confirm the matrix times its inverse is in fact the identity matrix:" << endl << endl;
  print_matrix(mat*matinv);   //confirm that mat*mat^-1 = I

  cout << endl << endl << endl;

  cout << "Matrix times a vector:" << endl << endl;

  vec3 vec; vec[0] = 1; vec[1] = 2; vec[2] = 3;

  vec3 result_vec = print_matrix_times_vector(mat, vec);

  cout << "and the result of that, times the inverse matrix:" << endl << endl;

  print_matrix_times_vector(matinv, result_vec);

  cout << "gives that vector back." << endl << endl;

  return 0;
}
