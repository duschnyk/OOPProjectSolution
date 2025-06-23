#pragma once
#include "main.h"

class MusicalInstrument
{
public:
	string typeOfMusicalInstrument;
	string brand;
	string model;
	string modelOfPickups;
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

	//default constructor
	MusicalInstrument() : MusicalInstrument("instrument not found...",
		"none", "none", false, 0) {
	}

	//constructor with arguments
	MusicalInstrument(string typeOfMusicalInstrument, string brand,
		string model, bool isInOffer, int amountInOffer)
		: MusicalInstrument(typeOfMusicalInstrument, brand, model,
			"none", "none", "none", "none", "none", 0, 0, 0,
			isInOffer, amountInOffer, "no date") {
	}

	//canonical constructor
	MusicalInstrument(string typeOfMusicalInstrument, string brand, string model,
		string modelOfPickups, string materialOfBody, string materialOfNeck,
		string materialOfFretboard, string modelOfBridge, int amountOfStrings,
		int amountOfPickups, double price, bool isInOffer, int amountInOffer,
		string dateOfRelease) {
		this->typeOfMusicalInstrument = typeOfMusicalInstrument;
		this->brand = brand;
		this->model = model;
		this->modelOfPickups = modelOfPickups;
		this->materialOfBody = materialOfBody;
		this->materialOfNeck = materialOfNeck;
		this->materialOfFretboard = materialOfFretboard;
		this->modelOfBridge = modelOfBridge;
		this->amountOfStrings = amountOfStrings;
		this->amountOfPickups = amountOfPickups;
		this->price = price;
		this->isInOffer = isInOffer;
		this->amountInOffer = amountInOffer;
		this->dateOfRelease = dateOfRelease;
	}

	//copy constructor
	MusicalInstrument(const MusicalInstrument& musicalInstrument)
		: MusicalInstrument(
			musicalInstrument.typeOfMusicalInstrument,
			musicalInstrument.brand,
			musicalInstrument.model,
			musicalInstrument.modelOfPickups,
			musicalInstrument.materialOfBody,
			musicalInstrument.materialOfNeck,
			musicalInstrument.materialOfFretboard,
			musicalInstrument.modelOfBridge,
			musicalInstrument.amountOfStrings,
			musicalInstrument.amountOfPickups,
			musicalInstrument.price,
			musicalInstrument.isInOffer,
			musicalInstrument.amountInOffer,
			musicalInstrument.dateOfRelease) {
	}

	~MusicalInstrument() {};

	string toString() {
		string s = typeOfMusicalInstrument + ", " + "\n";
		s += "brand: " + brand + ", " + "\n";
		s += "model: " + model + ", " + "\n";
		s += "pickups: " + modelOfPickups + ", " + "\n";
		s += "materialOfBody: " + materialOfBody + ", " + "\n";
		s += "materialOfNeck: " + materialOfNeck + ", " +"\n";
		s += "materialOfFretboard: " + materialOfFretboard + ", " + "\n";
		s += "amount of strings: " + to_string(amountOfStrings) + ", " + "\n";
		s += "amount of pickups: " + to_string(amountOfPickups) + ", " + "\n";
		s += "price: " + to_string(price) + ", " + "\n";
		s += "is in offer? ";
		s += (isInOffer ? "Yes! " : "No ");
		s += "\n";
		s += "amount in offer: " + to_string(amountInOffer) + ", " + "\n";
		s += "date of release: " + dateOfRelease + ", " + "\n";

		return s;
	}
};

