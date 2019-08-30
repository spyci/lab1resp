#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;
typedef struct pessoa{
  string nome;
  char g;
} pess;
int main(){
  queue<pess> Homem;
  queue<pess> Mulher;
  stack<pess> HomemLixo;
  stack<pess> MulherLixo;
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
      pess pessoa;
      string nome;
      char g;
      cin>>nome;
      cin>>g;
      pessoa.nome = nome;
      pessoa.g = g;
      Mulher.push(pessoa);
  }
  for(int i=0; i<n; i++){
      pess pessoa;
      string nome;
      char g;
      cin>>nome;
      cin>>g;
      pessoa.nome = nome;
      pessoa.g = g;
      Homem.push(pessoa);
  }
  for(int i=0; i<n; i++){
    pess aux;
    aux = Mulher.front();
    if (aux.g='H'){
      Mulher.pop();
      Homem.push(aux);
    }
  }
}
