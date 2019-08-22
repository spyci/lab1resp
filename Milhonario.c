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
	std::sort(vec.begin(), vec.end());
	std::cout<<vec[(a/2)]<<std::endl;
}
