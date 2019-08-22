#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef struct lut{
	string name;
	int poder;
} g;

bool poder(g p1, g p2){
	return ((p1.poder) > (p2.poder));
}
int main(){
	int a,b;
	cin>>a>>b;
	vector<g> vec;
	vec.resize(a);
	for (int i=0; i<a; i++){
		string s;
		int hold;
		cin>>s>>hold;
		vec[i].name=s;
		vec[i].poder=hold;
	}
	sort(vec.begin(), vec.end(), poder);
	for (int i=0; i<b; i++){
		cout<<vec[i].name<<" "<<vec[i].poder<<endl;
	}
}
