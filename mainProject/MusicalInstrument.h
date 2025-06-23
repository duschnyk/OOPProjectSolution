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
	MusicalInstrument() {
		typeOfMusicalInstrument = "instrument not found...";
		brand = "none";
		model = "none";
		modelOfPickups = "none";
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
	//constructor with arguments
	MusicalInstrument(string typeOfMusicalInstrument, string brand, string model, bool isInOffer, int amountInOffer) {
		this->typeOfMusicalInstrument = typeOfMusicalInstrument;
		this->brand = brand;
		this->model = model;
		modelOfPickups = "none";
		materialOfBody = "none";
		materialOfNeck = "none";
		materialOfFretboard = "none";
		modelOfBridge = "none";
		amountOfStrings = 0;
		amountOfPickups = 0;
		price = 0;
		this->isInOffer = isInOffer;
		this->amountInOffer = amountInOffer;
		dateOfRelease = "no date";
	}

	//canonical constructor
	MusicalInstrument(string typeOfMusicalInstrument, string brand, string model,
		string modelOfPickups, string materialOfBody, string materialOfNeck,
		string materialOfFretboard, string modelOfBridge, int amountOfStrings,
		int amountOfPickups, bool price, bool isInOffer, int amountInOffer,
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
	MusicalInstrument(const MusicalInstrument& musicalInstrument) {
		this->typeOfMusicalInstrument = musicalInstrument.typeOfMusicalInstrument;
		this->brand = musicalInstrument.brand;
		this->model = musicalInstrument.model;
		this->modelOfPickups = musicalInstrument.modelOfPickups;
		this->materialOfBody = musicalInstrument.materialOfBody;
		this->materialOfNeck = musicalInstrument.materialOfNeck;
		this->materialOfFretboard = musicalInstrument.materialOfFretboard;
		this->modelOfBridge = musicalInstrument.modelOfBridge;
		this->amountOfStrings = musicalInstrument.amountOfStrings;
		this->amountOfPickups = musicalInstrument.amountOfPickups;
		this->price = musicalInstrument.price;
		this->isInOffer = musicalInstrument.isInOffer;
		this->amountInOffer = musicalInstrument.amountInOffer;
		this->dateOfRelease = musicalInstrument.dateOfRelease;
	}

	~MusicalInstrument() {};

	string toString() {
		string s = typeOfMusicalInstrument + ", ";
		s += "brand: " + brand + ", ";
		s += "model: " + model + ", ";
		s += "pickups: " + modelOfPickups + ", ";
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

