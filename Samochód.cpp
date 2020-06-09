#include "Samochód.h"

Samochód::Samochód(string kolorNadwozia, int pojemnoscSilnika, int iloscDrzwi, long cena, int rokProdukcji, string markaSamochodu, string modelSamochodu)
{
	this->kolorNadwozia = kolorNadwozia;
	this->pojemnoscSilnika = pojemnoscSilnika;
	this->iloscDrzwi = iloscDrzwi;
	this->cena = cena;
	this->rokProdukcji = rokProdukcji;
	this->wiekSamochodu = 2020 - rokProdukcji;
	this->markaSamochodu = markaSamochodu;
	this->modelSamochodu = modelSamochodu;
	
}
