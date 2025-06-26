#pragma once
#include "MusicalInstrument.h"

class Manager
{
public:
	MusicalInstrument findInstrumentInOffer(
		MusicalInstrument* musicalInstruments, int size) {

		for (int i = 0, j = 0; i < size; i++)
		{
			if (musicalInstruments[i].isInOffer == true)
			{
				return musicalInstruments[i];
			}
		}

		return MusicalInstrument();
	}

	MusicalInstrument findTheCheapestInstrument(
		MusicalInstrument* musicalInstruments, int size) {
		int indexOfTheCheapestInstrument = 0;
		int priceTemp = INT_MAX;

		for (int i = 0; i < size; i++)
		{
			if (musicalInstruments[i].price < priceTemp) {
				indexOfTheCheapestInstrument = i;
				priceTemp = musicalInstruments[i].price;
			}
		}

		return musicalInstruments[indexOfTheCheapestInstrument];
	}

	MusicalInstrument findTheMostExpensiveInstrument(
		MusicalInstrument* musicalInstruments, int size) {
		int indexOfTheMostExpensiveInstrument = 0;
		int priceTemp = INT_MIN;

		for (int i = 0; i < size; i++)
		{
			if (musicalInstruments[i].price > priceTemp) {
				indexOfTheMostExpensiveInstrument = i;
				priceTemp = musicalInstruments[i].price;
			}
		}

		return musicalInstruments[indexOfTheMostExpensiveInstrument];
	}

	double findAveragePriceOfAnInstrumet(
		MusicalInstrument* musicalInstruments, int size) {
		double avg = 0;

		for (int i = 0; i < size; i++)
		{
			avg += musicalInstruments[i].price;
		}

		return avg / size;
	}



};

