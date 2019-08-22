#include <iostream>
#include <vector>
#include <algorithm>
int main(){
	int a;
	std::cin>>a;
	std::vector<int> vec;
	for (int i=0; i<a; i++){
		int g;
		std::cin>>g;
		vec.push_back(g);
	}
	int b=0;
	std::sort(vec.begin(), vec.end());
	for (int i=0; i<a-1; i++){
		b+=vec[i+1]-vec[i]-1;
	}
	std::cout<<b<<std::endl;
}
