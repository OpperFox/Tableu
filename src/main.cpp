#include <iostream>
#include <string>
#include <fstream>
#include "Eigen/Core"
#include "Eigen/LU"
#include "Eigen/Geometry"

using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[]){

  if (argc < 2){
    cout << "\nIngrese la ruta del archivo.\n";
    return 0;
  }

  string arch = argv[1];
  ifstream look(arch);

  string s = "";

  if (!look.is_open()){
    cerr << "\nError al abrir: " << arch << "\n";
    return 0;
  }

  getline(look, s);

  cout << s << "\n";

  MatrixXd m(2, 2);
  m(0, 0) = 3;
  m(1, 0) = 2.5;
  m(0, 1) = -1;
  m(1, 1) = m(1, 0) + m(0, 1);

  cout << m << endl;

  return 0;

}
