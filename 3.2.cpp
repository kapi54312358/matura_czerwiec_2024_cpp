#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=1000;

string cezar13(string a){
	char l=0;
	string w="";
	for(int i=0; i<a.size(); i++){
		l=a[i];
		if(l+13>122)
			w+=l+13-26;
		else
			w+=l+13;
	}
	return w;
}

bool paindrom(string a, string b){
	char p=0, d=0;
	int i=0;
	
	for(i=0; i<a.size()/2+1; i++){
		p=a[i];
		d=b[a.size()-i-1];
		if(p!=d)
			return false;
	}
	
	return true;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/slowa.txt");
	string slowa[n];
	string a="", najdl_slowo="";
	int i=0, j=0, licznik=0, najdl=0;
	
	for(i=0; i<n; i++){
		we>>slowa[i];	
	}
	
	for(i=0; i<n; i++){
		a=slowa[i];
		if(paindrom(a, cezar13(a))){
			licznik++;
			if(a.size()>najdl){
				najdl=a.size();
				najdl_slowo=a;
			}	
		}
	}
	
	cout<<licznik<<endl<<najdl_slowo;
	
	return 0;
}
