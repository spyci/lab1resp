#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef struct casq{
	string name;
	int poder;
} casq;

bool comp_w(casq c1,casq c2){
	for (int i=0; i<c1.name.size(); i++){
		if (c1.name[i]<c2.name[i])return 1;
		if (c1.name[i]>c2.name[i])return 0;
	}
	return (c1.poder>c2.poder);
}
int main(){
	int a;
	cin>>a;
	vector<casq> vec;
	for (int i=0; i<a; i++){
		casq aux;
		string s;
		int ts;
		cin>>s>>ts;
		aux.name=s;
		aux.poder=ts;
		vec.push_back(aux);
	}
	sort(vec.begin(), vec.end(), comp_w);
	for (int i=0; i<a; i++){
		cout<<vec[i].name<<" "<<vec[i].poder<<endl;
	}
}
