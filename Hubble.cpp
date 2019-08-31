#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	stack<int> fila;
	for (int i=0; i<n; i++){
		int k;
		cin>>k;
		if(k==-1){
			if(!fila.empty())fila.pop();
		}
		else{
			fila.push(k);
		}
	}
	int a=0;
	int fila_tam = fila.size();
	for(int i=0; i<fila_tam; i++){
		a = a+fila.top();
		fila.pop();
	}
	cout<<a;
}
