#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> pkAsh;
	stack<int> pkGary;
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		int a,b;
		cin>>a>>b;
		pkAsh.push(a);
		pkGary.push(b);
	}
	int cont=0;
	while(1){
		if(pkAsh.top()>pkGary.top()){
			int aux = pkAsh.top()-pkGary.top();
			pkAsh.pop();
			pkGary.pop();
			pkAsh.push(aux);
			if(pkGary.empty())break;
		}
		if(pkAsh.top()==pkGary.top()){
			pkAsh.pop();
			pkGary.pop();
			cont++;
			if(pkGary.empty())break;
			if(pkAsh.empty())break;
		}
		if(pkAsh.top()<pkGary.top()){
			int aux = pkGary.top()-pkAsh.top();
			pkAsh.pop();
			pkGary.pop();
			pkGary.push(aux);
			cont++;
			if(pkAsh.empty())break;
		}
	}
	cout<<cont;	
}
