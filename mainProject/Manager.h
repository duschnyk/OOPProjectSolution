#pragma once
#include "MusicalInstrument.h"

class Manager
{
public:
	MusicalInstrument findInstrumentInOffer(
		MusicalInstrument* musicalInstruments, int size);

	MusicalInstrument findTheCheapestInstrument(
		MusicalInstrument* musicalInstruments, int size);

	MusicalInstrument findTheMostExpensiveInstrument(
		MusicalInstrument* musicalInstruments, int size);

	double findAveragePriceOfAnInstrumet(
		MusicalInstrument* musicalInstruments, int size);
};

