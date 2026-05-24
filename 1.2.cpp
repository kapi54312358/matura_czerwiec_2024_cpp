#include <iostream>

using namespace std;

int dectobin(int n){
	int w=0, c=0, pot=1;
	while(n>0){
		c=n%2;
		n/=2;
		w+=c*pot;
		pot*=10;
	}
	return w;
}


int dl_bin(int bin){
	int dl_bin=0;
	
	while(bin>0){
		bin/=10;
		dl_bin++;
	}
	
	return dl_bin;
}

int funkcja(int bin, int w, int k){
	int i=0, dl_b=dl_bin(bin), mod=0, cyfra=0;
	
	mod=w*k%dl_b;
	
	for(i=0; i<mod+1; i++){
		cyfra=bin%10;
		bin/=10;	
	}
	
	return cyfra;
}

int main(int argc, char** argv) {
	int n=19, w=5, k=3;
	cout<<funkcja(dectobin(n), w, k);
	return 0;
}
