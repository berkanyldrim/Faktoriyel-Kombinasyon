Faktoriyel.h

#ifndef FAKTORIYEL_H
#define FAKTORIYEL_H

class Faktoriyel
{

public:

int hesapla(int);

};

#endif


Faktoriyel.cpp


#include "Faktoriyel.h"

using namespace std;

int Faktoriyel::hesapla(int k)
{
	int fakt = 1;

	for (int i=2; i<=k; i++) fakt=fakt*i;

	return fakt;

}




Kombinasyon.h

#ifndef KOMBINASYON_H
#define KOMBINASYON_H

class Kombinasyon
{

public:

int hesapla(int, int);

};

#endif


Kombinasyon.cpp


#include "Kombinasyon.h"
#include "Faktoriyel.h"

using namespace std;

int Kombinasyon::hesapla(int n, int r)
{

Faktoriyel f;

	return f.hesapla(n)/(f.hesapla(r)*f.hesapla(n-r));
}

Yurutucu.cpp

#include <iostream>
#include "Kombinasyon.h"

using namespace std;

int main() 
{

	int n,r;
Kombinasyon k;

	cin >> n >> r;

	cout << k.hesapla(n,r) << endl;

	return 0;
