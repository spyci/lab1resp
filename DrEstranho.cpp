#include <iostream>
#include <vector>

int main(){
	int k;
	std::cin>>k;
	std::vector<std::vector<int> > vec;
	vec.resize(3);
	for (int i=0; i<3; i++){
		vec[i].resize(k);
		for (int j=0; j<k; j++){
			std::cin>>vec[i][j];	
		}
	}
	for (int i=0; i<k; i++){
		if(vec[0][i]+vec[1][i]!=vec[2][i]){
			std::cout<<"NOPE :(";
			exit(0);
		}
	}
	std::cout<<"OK";	
}
