#include <iostream>
#include <queue>
using namespace std;
int main(){
  long int n,m;
  queue<int> fila;
  cin>>n>>m;
  for(int i=0; i<n; i++){
    int k;
    cin>>k;
    fila.push(k);
  }
  for (int i=0; i<m; i++){
    if(!fila.empty()){
    int aux = fila.front()-1;
    fila.pop();
    if (aux!=0)fila.push(aux);
    }
  }
  int testcase = fila.size();
  if(testcase==0){
    cout<<"pronto"<<endl;
  }
  else{
  cout<<testcase<<endl;
  for (int i=0;i<testcase;i++){
    cout<<fila.front()<<" ";
    fila.pop();
  }
  cout<<"\n";
  }
}
