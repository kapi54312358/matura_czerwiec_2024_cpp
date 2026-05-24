#include <iostream>
#include <fstream>

using namespace std;

int const n=1025;

void runda2(int *R1, int *K){//pierwsza runda, końcowa runda
	int i=0, l=0;
	
	for(i=1; i<n; i++){
		l=R1[i];
		K[i]=R1[l];	
	}	
}

void runda4(int *R2, int *K, int*R1){//  runda 2, końcowa runda, runda 1
	int i=0, l=0;
	int R3[n]; 
	
	for(i=1; i<n; i++){
		l=R2[i];
		R3[i]=R1[l];	
	}
	
	for(i=1; i<n; i++){
		l=R3[i];
		K[i]=R1[l];	
	}
}

void runda8(int *R4, int *K, int*R1){// runda 4, końcowa runda, runda 1
	int i=0, l=0;
	int R5[n], R6[n], R7[n]; 
	
	for(i=1; i<n; i++){
		l=R4[i];
		R5[i]=R1[l];	
	}
	
	for(i=1; i<n; i++){
		l=R5[i];
		R6[i]=R1[l];	
	}
	
	for(i=1; i<n; i++){
		l=R6[i];
		R7[i]=R1[l];	
	}
	
	for(i=1; i<n; i++){
		l=R7[i];
		K[i]=R1[l];	
	}
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/odbiorcy.txt");
	int rundaI[n], rundaII[n], rundaIV[n], rundaVIII[n], Licznik[n];
	int i=1, l=0, najw=0, pom=0;
	
	for(i=1; i<n; i++)//runda 1
		Licznik[i]=0;
	for(i=1; i<n; i++){
		we>>rundaI[i];
		l=rundaI[i];
		pom=Licznik[l];
		pom++;
		Licznik[l]=pom;
	}
	for(i=1; i<n; i++){
		if(Licznik[i]>najw)
			najw=Licznik[i];
	}
	cout<<najw<<" ";
	
	najw=0;//runda 2
	for(i=1; i<n; i++)
		Licznik[i]=0;
	runda2(rundaI, rundaII);
	for(i=1; i<n; i++){
		l=rundaII[i];
		pom=Licznik[l];
		pom++;
		Licznik[l]=pom;
	}
	for(i=1; i<n; i++){
		if(Licznik[i]>najw)
			najw=Licznik[i];
	}
	cout<<najw<<" ";
	
	najw=0;//runda 4
	for(i=1; i<n; i++)
		Licznik[i]=0;
	runda4(rundaII, rundaIV, rundaI);
	for(i=1; i<n; i++){
		l=rundaIV[i];
		pom=Licznik[l];
		pom++;
		Licznik[l]=pom;
	}
	for(i=1; i<n; i++){
		if(Licznik[i]>najw)
			najw=Licznik[i];
	}
	cout<<najw<<" ";
	
	najw=0;//runda 8
	for(i=1; i<n; i++)
		Licznik[i]=0;
	runda8(rundaIV, rundaVIII, rundaI);
	for(i=1; i<n; i++){
		l=rundaVIII[i];
		pom=Licznik[l];
		pom++;
		Licznik[l]=pom;
	}
	for(i=1; i<n; i++){
		if(Licznik[i]>najw)
			najw=Licznik[i];
	}
	cout<<najw<<" ";
	
	return 0;
}
