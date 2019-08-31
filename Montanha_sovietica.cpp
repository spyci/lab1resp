#include <iostream>
#include <queue>
using namespace std;
typedef struct pessoa{
	long int id;
	int dinheiro;
}p;
int main(){
	int n,m,valor;
	cin>>n>>m>>valor;
	queue<p> fila;
	for (int i=0; i<n; i++){
		p p;
		cin>>p.id>>p.dinheiro;
		if(p.dinheiro>=valor)fila.push(p);
	}
	for (int i=0; i<m; i++){
		if(fila.front().dinheiro>=valor){
			p aux=fila.front();
			aux.dinheiro=aux.dinheiro-valor;
			fila.push(aux);
		}
		fila.pop();
	}
	int fila_tam = fila.size();
	for (int i=0; i<fila_tam; i++){
		if(fila.front().dinheiro>=valor)fila.push(fila.front());
		fila.pop();
	}
	if(fila.empty())cout<<"SEM FILA"<<endl;
	else{
		fila_tam=fila.size();
		for(int i=0; i<fila_tam; i++){
			cout<<fila.front().id<<" "<<fila.front().dinheiro<<endl;
			fila.pop();
		}
	
	}

}
