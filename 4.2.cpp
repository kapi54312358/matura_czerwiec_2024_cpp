#include <iostream>
#include <fstream>

using namespace std;

int const n=1024;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/odbiorcy.txt");
	int rundaI[n];
	int i=0, j=0, licznik=0;
	bool komputery[n];
	for(i=0; i<n; i++){
		komputery[i]=false;
	}

	for(i=0; i<n; i++){
		we>>rundaI[i];
		komputery[rundaI[i]]=true;
	}
	
	for(i=1; i<n; i++){
		if(!komputery[i])
			licznik++;
	}
	
	cout<<licznik;
	
	return 0;
}
