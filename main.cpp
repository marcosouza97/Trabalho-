#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;

//função de gravar em arquivo de textto
void funcaoDeGravar(int valor){
  
  ofstream gravar;

  gravar.open("valores.txt",ios::out);
  


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
}
