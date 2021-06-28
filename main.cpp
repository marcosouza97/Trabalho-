#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;

//função de gravar em arquivo de textto
void funcaoDeGravar(int valor){

  int lado1=0, lado2=0, lado3;

  cout << "Digite o primeiro lado"<< endl;
  cin >> lado1;

  cout << "Digite o segundo lado" << endl;
  cin >> lado2;

  cout << "Digite o terceiro lado" << endl;
  cin >> lado3;

  ofstream gravar;

  gravar.open("valores.txt",ios::out);

  gravar << lado1<<endl;
  gravar << lado2<<endl;
  gravar << lado3;

  gravar.close();
}

void funcaoDeLer (int valor){
  ifstream ler;
  int lado1=0, lado2=0, lado3=0;

  ler.open ("valores.txt", ios::in);
  while(!ler.eof()){
    ler >>lado1;
    ler >>lado2;
    ler >>lado3;
  }
}

int main() {
  int opcao=0;


  // Solicitando a opção para o usuario
  cout <<"qual opção você deseja:" << endl;
  cout << "1 - gravar"<< endl;
  cout << "2 - ler" << endl;
  cin >> opcao;


  if (opcao == 1){
    funcaoDeGravar (opcao);
  }
  if(opcao == 2){
    funcaoDeLer(opcao);
  }
}
