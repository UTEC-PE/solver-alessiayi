#include <iostream>
#include "tree.h"

using namespace std;
/*
void menu() {
  system("cls");
  cout<<"==========================================================="<<endl;
  cout<<"\t\tPractica Operaciones"<<endl;
  cout<<"==========================================================="<<endl;

  //char* str="7/4*((a+b)*a)+3";
  //char* str="7/4*((a+-+--b)*a)+3";
  //char* str="2+(3)";
  char* str="7/4*((a+b)^4*a)+3";
}

void


int main(int argc, char const *argv[]) {
  menu();

  cout << "\nPress enter to continue ...";
  cin.get();
  return EXIT_SUCCESS;
}*/

// Faltan operaciones grandes, variables, operadores unarios
int main(int argc, char const *argv[]) {
    string equation;
    if (argc == 2) {
        equation = argv[1];
    }
    else {
      throw "One argument expected";
    }
  tree Tree;
  Tree.constructTree(equation);
  cout << endl;
  return 0;
}
