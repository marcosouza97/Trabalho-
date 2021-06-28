#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;

//função de gravar em arquivo de textto
void funcaoDeGravar(int valor, int x){

  int lado1[x], lado2[x], lado3[x];
  int i=0;

  for(int i=0 ; i <x ;  i++){

  cout <<"Vamos calulcar a area do " << i+1<<"º triangulo"<<endl; 

  cout << "Digite o primeiro lado"<< endl;
  cin >> lado1[i];

  cout << "Digite o segundo lado" << endl;
  cin >> lado2[i];

  cout << "Digite o terceiro lado" << endl;
  cin >> lado3[i];
  cout << endl;
  }

  ofstream gravar;
  gravar.open("valores.txt",ios::out);
  
  for(int n=0; n <x; n++){
  gravar << lado1[n]<<endl;
  gravar << lado2[n]<<endl;
  gravar << lado3[n]<<endl;
  }

  gravar.close();
}

void funcaoDeLer (int valor, int x){
  ifstream ler;
  int lado1[x], lado2[x], lado3[x];
  int y=0;

  ler.open ("valores.txt", ios::in);
  while(!ler.eof()){
    ler >>lado1[y];
    ler >>lado2[y];
    ler >>lado3[y];
    y++;
  }
  for (int i=0;i <x; i++){
    cout <<lado1[i]<< endl;
    cout <<lado2[i]<< endl;
    cout <<lado3[i]<< endl;
    cout <<endl;
  }
}

int main() {
  int opcao=0, n=0;


  // Solicitando a opção para o usuario
  cout <<"qual opção você deseja:" << endl;
  cout << "1 - gravar"<< endl;
  cout << "2 - ler" << endl;
  cin >> opcao;

  cout << "Quantas areas de diferentes triangulos deseja calcular?" << endl;
  cin >> n;
  cout <<endl;


  if (opcao == 1){
    funcaoDeGravar (opcao, n);
  }
  if(opcao == 2){
    funcaoDeLer(opcao, n);
  }

}
