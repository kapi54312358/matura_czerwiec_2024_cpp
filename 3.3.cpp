#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=1000;

int ile_wystapien(string a, char l){
	int w=0;
	for(int i=0; i<a.size(); i++){
		if(a[i]==l) w++;
	}
	return w;
}

bool czy_wypisac(string a){
	int j=0, dl=a.size();
	if(dl%2==1)
		dl++;
	for(j=0; j<a.size(); j++){
		if(ile_wystapien(a, a[j])>=dl/2)
			return true;
	}
	return false;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/slowa.txt");
	string slowa[n];
	string a="";
	int i=0, j=0, licznik=0;
	
	for(i=0; i<n; i++){
		we>>slowa[i];	
	}
	
	for(i=0; i<n; i++){
		a=slowa[i];
		if(czy_wypisac(a))
			cout<<a<<endl;
	}
	
	return 0;
}
