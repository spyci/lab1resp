#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
typedef struct data{
	int d;
	int m;
	int a;
} data;
bool _comp(data d1, data d2){
	if (d1.a<d2.a)return 1;
	if (d1.a>d2.a)return 0;
	else{
		if (d1.m<d2.m)return 1;
		if (d1.m>d2.m)return 0;
		else{
			if(d1.d<d2.d)return 1;
			if (d1.d>d2.d)return 0;
			else return 0;	
		};
			
	}
}
int main(){
	int w,s,x;
	int p=0;
	vector<data> vec;
	while(cin>>w){
		cin>>s>>x;
		data k;
		k.d=w;
		k.m=s;
		k.a=x;
		vec.push_back(k);
	}
	sort(vec.begin(), vec.end(), _comp);
	for (int i=0; i<vec.size(); i++){
		cout<<vec[i].d<<" "<<vec[i].m<<" "<<vec[i].a<<endl;
	}
}
