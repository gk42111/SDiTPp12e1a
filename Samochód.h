#pragma once
#include <string>
using namespace std;
class Samochód
{
private:
	string kolorNadwozia;
	int pojemnoscSilnika;
	int iloscDrzwi;
	long cena;
	int rokProdukcji;
	int wiekSamochodu;
	string markaSamochodu;
	string modelSamochodu;
public:
	Samochód(string, int, int, long, int, string, string);
};

