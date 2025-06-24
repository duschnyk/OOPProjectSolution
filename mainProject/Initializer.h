#pragma once
#include "MusicalInstrument.h"

class Initializer
{
public:
	void init(MusicalInstrument* musicalInstruments, int size) {

		const string typeOfMusicalInstrument = "Electric guitar";

		const int brandsSize = 10;

		const string brands[]{ "IBANEZ", "JACKSON", "SOLAR", "FENDER",
			"GIBSON", "CORT", "YAMAHA", "EPIPHONE", "SQUIER", "HARLEY BENTON" };

		const int modelsSize = 20;
		const string models[]{ "GRG2458", "STAR", "SUPERSTRAT", "TELECASTER",
		"STRATOCASTER", "JAGUAR", "LESPAUL", "JAZZMASTER", "SG", "Rhoads",
		"Soloist", "Dinky", "Warrior", "Kelly", "Dominion", "Type A",
		"Type S", "Type E", "Type V", "Type G" };

		const int modelsOfPickupsSize = 6;
		const string modelsOfPickups[]{ "DiMarzio", "Bellcat", "Musiclily",
			"Seymour", "Shadow", "Quntum" };

		const int materialsOfBodySize = 10;
		const string materialsOfBody[]{ "Koa", "Ash", "Walnut", "Alder", "Maple",
			"Basswood", "Mahogany", "Agathis", "Poplar","Spruce" };

		const int materialsOfNeckSize = 10;
		const string materialsOfNeck[]{ "Koa", "Ash", "Walnut", "Alder", "Maple",
			"Basswood", "Mahogany", "Agathis", "Poplar","Spruce" };

		const int materialsOfFretboardSize = 8;
		const string materialsOfFretboard[]{ "Maple", "Rosewood", "Walnut",
			"Ebony", "Jatoba", "Mahogany", "Wenge", "Magatis" };


		const int modelsOfBridgeSize = 8;
		const string modelsOfBridge[]{ "F106", "F107", "F108", "F88", "F0909",
			"G300", "Mg-500", "ASDF1234" };

		const int dateOfReleaseSize = 16;
		const string datesOfRelease[]{ "1960","1961", "1969","1970", "1974", "1979",
			"2000", "2001", "2002", "2007", "2009", "2011", "2015", "2021",
			"2022", "2025" };

		int amountOfStringsMAX = 8;
		int amountOfStringsMIN = 6;

		int amountOfPickupsMAX = 3;
		int amountOfPickupsMIN = 2;

		int priceMAX = 2400;
		int priceMIN = 240;

		for (int i = 0; i < size; i++)
		{
			MusicalInstrument temp;
			temp.typeOfMusicalInstrument = typeOfMusicalInstrument;
			temp.brand = brands[rand() % brandsSize];
			temp.model = models[rand() % modelsSize];
			temp.modelOfPickups = modelsOfPickups[rand() % modelsOfPickupsSize];
			temp.materialOfBody = materialsOfBody[rand() % materialsOfBodySize];
			temp.materialOfNeck = materialsOfNeck[rand() % materialsOfNeckSize];
			temp.materialOfFretboard = materialsOfFretboard[rand() % materialsOfFretboardSize];
			temp.modelOfBridge = modelsOfBridge[rand() % modelsOfBridgeSize];
			temp.amountOfStrings = rand() % (amountOfStringsMAX - amountOfStringsMIN + 1) + amountOfStringsMIN;
			temp.amountOfPickups = rand() % (amountOfPickupsMAX - amountOfPickupsMIN + 1) + amountOfPickupsMIN;
			temp.price = rand() % (priceMAX - priceMIN + 1) + priceMIN;
			temp.isInOffer = rand() % 2;
			temp.isInOffer == true ? temp.amountInOffer = rand() % 100 + 1 : temp.amountInOffer = 0;
			temp.dateOfRelease = datesOfRelease[rand() % dateOfReleaseSize];


			musicalInstruments[i] = temp;
		}
	}
};

