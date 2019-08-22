#include <iostream>
#include <vector>
int main(){
	int a;
	std::cin>>a;
	std::vector<int> vec;
	for (int i=0; i<a; i++){
		int l;
		std::cin>>l;
		vec.push_back(l);
	}
	int t;
	std::cin >> t;
	for (int i : vec){
		if(t==vec[i]){
			std::cout<<t;
			exit(0);
		}
	}
	std::cout<<-1;
}
