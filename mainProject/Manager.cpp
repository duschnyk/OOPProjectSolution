#include "Manager.h"

MusicalInstrument Manager::findInstrumentInOffer(
	MusicalInstrument* musicalInstruments, int size) {

	for (int i = 0, j = 0; i < size; i++)
	{
		if (musicalInstruments[i].getIsInOffer() == true)
		{
			return musicalInstruments[i];
		}
	}

	return MusicalInstrument();
}

MusicalInstrument Manager::findTheCheapestInstrument(
	MusicalInstrument* musicalInstruments, int size) {
	int indexOfTheCheapestInstrument = 0;
	double priceTemp = INT_MAX;

	for (int i = 0; i < size; i++)
	{
		if (musicalInstruments[i].getPrice() < priceTemp) {
			indexOfTheCheapestInstrument = i;
			priceTemp = musicalInstruments[i].getPrice();
		}
	}

	return musicalInstruments[indexOfTheCheapestInstrument];
}

MusicalInstrument Manager::findTheMostExpensiveInstrument(
	MusicalInstrument* musicalInstruments, int size) {
	int indexOfTheMostExpensiveInstrument = 0;
	double priceTemp = INT_MIN;

	for (int i = 0; i < size; i++)
	{
		if (musicalInstruments[i].getPrice() > priceTemp) {
			indexOfTheMostExpensiveInstrument = i;
			priceTemp = musicalInstruments[i].getPrice();
		}
	}

	return musicalInstruments[indexOfTheMostExpensiveInstrument];
}

double Manager::findAveragePriceOfAnInstrumet(
	MusicalInstrument* musicalInstruments, int size) {
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += musicalInstruments[i].getPrice();
	}

	return avg / size;
}