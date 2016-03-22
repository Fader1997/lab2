#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "lab2.h"

using namespace std;

int main()
{
	float h, m;
	BMI bmibmi;
	ifstream Filein("file.in", ios::in);
	ofstream Fileout("file.out", ios::out);
	if(!Filein){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	
	if(!Fileout){
                cerr << "Failed opening" << endl;
                exit(1);
        }
	while(Filein >> h >> m && h != 0 && m != 0){
		bmibmi.setheight(h);
		bmibmi.setmass(m);
		Fileout << bmibmi.setbmi(bmibmi.setheight(h), bmibmi.setmass(m)) << "\t" << bmibmi.setcategory(bmibmi.setbmi(bmibmi.setheight(h), bmibmi.setmass(m))) << endl;
	}
	return 0;
}
