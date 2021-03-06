#include "includes.h"

int main(int argc, char const *argv[])
{

  //initialize with identity
  mat3 mat = mat3(1.0f);


  //print the identity matrix
  cout << endl << "Identity matrix:" << endl << endl;
  print_matrix(mat);


  //this is the std::random setup

  std::random_device rd;  //Will be used to obtain a seed for the random number engine
  std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
  std::uniform_int_distribution<> dis(1, 15);

  // dis(gen) now gives a random number between 1 and 15 - try different numbers if you want
  for (int col = 0; col < 3; col++)
    for (int row = 0; row < 3; row++)
      mat[col][row] = dis(gen); //reference is done with mat[column][row]



  //print the matrix with the random changes
  cout << "Change some values:" << endl << endl;
  print_matrix(mat);


  //compute the inverse of mat
  mat3 matinv = inverse(mat);


  //print the inverse of mat
  cout << "Compute the inverse:" << endl << endl;
  print_matrix(matinv);


  //confirm that mat*mat^-1 = I
  cout << "Confirm the matrix times its inverse is in fact the identity matrix:" << endl << endl;
  print_matrix(mat*matinv);


  cout << endl << endl << endl;
  cout << "Matrix times a vector:" << endl << endl;


  //some random vector to use
  vec3 vec; vec[0] = 1; vec[1] = 2; vec[2] = 3;


  //multiply that by your randomly generated matrix - the function returns the result of the multiplication
  vec3 result_vec = print_matrix_times_vector(mat, vec);


  //this is just illustrating a basic property of inverses - the same way that n*(1/n) = 1
  cout << "and the result of that, times the inverse matrix:" << endl << endl;
  print_matrix_times_vector(matinv, result_vec);


  //you should see the vector the same as it was initialized
  cout << "gives that vector back." << endl << endl;

  return 0;
}
