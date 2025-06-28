#pragma once
#include "MusicalInstrument.h"

class GroupOfElectricGuitars
{
private:
	MusicalInstrument* electricGuitars;
	int size;
public:
	GroupOfElectricGuitars() : electricGuitars(nullptr), size(0) {}
	GroupOfElectricGuitars(MusicalInstrument* musicalInstruments, int size);
	~GroupOfElectricGuitars();


};

