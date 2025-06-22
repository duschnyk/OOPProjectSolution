#pragma once
#include "main.h"

class MusicalInstrument
{
public:
	string typeOfMusicalInstrument;
	string brand;
	string model;
	string pickups;
	string materialOfBody;
	string materialOfNeck;
	string materialOfFretboard;
	string modelOfBridge;
	int amountOfStrings;
	int amountOfPickups;
	double price;
	bool isInOffer;
	int amountInOffer;
	string dateOfRelease;

	MusicalInstrument() {
		typeOfMusicalInstrument = "instrument not found...";
		brand = "none";
		model = "none";
		pickups = "none";
		materialOfBody = "none";
		materialOfNeck = "none";
		materialOfFretboard = "none";
		modelOfBridge = "none";
		amountOfStrings = 0;
		amountOfPickups = 0;
		price = 0;
		isInOffer = false;
		amountInOffer = 0;
		dateOfRelease = "no date";
	}

	string toString() {
		string s = typeOfMusicalInstrument + ", ";
		s += "brand: " + brand + ", ";
		s += "model: " + model + ", ";
		s += "pickups: " + pickups + ", ";
		s += "materialOfBody: " + materialOfBody + ", ";
		s += "materialOfNeck: " + materialOfNeck + ", ";
		s += "materialOfFretboard: " + materialOfFretboard + ", ";
		s += "materialOfFretboard: " + materialOfFretboard + ", ";
		s += "amount of strings: " + to_string(amountOfStrings) + ", ";
		s += "amount of pickups: " + to_string(amountOfPickups) + ", ";
		s += "price: " + to_string(price) + ", ";
		s += "is in offer? ";
		s += (isInOffer ? "Yes!" : "No");
		s += "amount in offer: " + to_string(amountInOffer) + ", ";
		s += "date of release: " + dateOfRelease + ", ";

		return s;
	}
};

