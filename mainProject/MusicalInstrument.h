#pragma once
#include "main.h"

class MusicalInstrument
{
private:
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


public:
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
		string dateOfRelease);

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

	~MusicalInstrument();

	string getTypeOfMusicalInstrument();
	void setTypeOfMusicalInstrument(string typeOfMusicalInstrument);
	string getBrand();
	void setBrand(string brand);
	string getModel();
	void setModel(string model);
	string getModelOfPickups();
	void setModelOfPickups(string modelOfPickups);
	string getMaterialOfBody();
	void setMaterialOfBody(string materialOfBody);
	string getMaterialOfNeck();
	void setMaterialOfNeck(string materialOfNeck);
	string getMaterialOfFretboard();
	void setMaterialOfFretboard(string materialOfFretboard);
	string getModelOfBridge();
	void setModelOfBridge(string modelOfBridge);
	int getAmountOfStrings();
	void setAmountOfStrings(int amountOfStrings);
	int getAmountOfPickups();
	void setAmountOfPickups(int amountOfPickups);
	double getPrice();
	void setPrice(double price);
	bool getIsInOffer();
	void setIsInOffer(bool isInOffer);
	int getAmountInOffer();
	void setAmountInOffer(int amountInOffer);
	string getDateOfRelease();
	void setDateOfRelease(string dateOfRelease);


	string toString();
};

