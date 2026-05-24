#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=1000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/slowa.txt");
	string a="";
	int i=0, j=0, licznik=0;

	for(i=0; i<n; i++){
		we>>a;
		if(a.size()>=3){
			for(j=0; j<a.size()-2; j++){
				if(a[j]=='k'&& a[j+2]=='t')
					licznik++;
			}
		}
	}

	cout<<licznik;

	return 0;
}
