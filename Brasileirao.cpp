#include <iostream>
#include <vector>
#include <string>
int main(){
	int l;
	std::cin>>l;
	std::vector<std::string> vec;
	for (int i=0; i<=l; i++){
		std::string s;
		std::getline(std::cin, s);
		vec.push_back(s);
	}
	for (int i=1; i<=l/2; i++){
		std::cout<<vec[i]<<" X "<<vec[l-i+1]<<std::endl;
	}
}
