#include <iostream>
#include <fstream>

using namespace std;

int const n=1025;

int ile_rund(int s, int *A){
	int c=s, i=1, o=A[s];
	while(o!=c && i<n){
		o=A[o];
		i++;
	}
	return i;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/odbiorcy.txt");
	int rundaI[n];
	int i=1, start=0, najm_rund=n+1, nr_pakietu=0;

	for(i=1; i<n; i++){
		we>>rundaI[i];
	}
	
	for(i=1; i<n; i++){
		start=rundaI[i];
		if(ile_rund(start, rundaI)<najm_rund){
			najm_rund=ile_rund(start, rundaI);
			nr_pakietu=i;
		}
	}
	
	cout<<najm_rund<<" "<<nr_pakietu;
	
	return 0;
}
