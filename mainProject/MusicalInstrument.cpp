#include "MusicalInstrument.h"


//canonical constructor
MusicalInstrument::MusicalInstrument(string typeOfMusicalInstrument, string brand, string model,
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

MusicalInstrument::~MusicalInstrument() {};

string MusicalInstrument::getTypeOfMusicalInstrument() {
	return typeOfMusicalInstrument;
}

void MusicalInstrument::setTypeOfMusicalInstrument(string typeOfMusicalInstrument) {
	this->typeOfMusicalInstrument = typeOfMusicalInstrument;
}

string MusicalInstrument::getBrand() {
	return brand;
}

void MusicalInstrument::setBrand(string brand) {
	this->brand = brand;
}

string MusicalInstrument::getModel() {
	return model;
}

void MusicalInstrument::setModel(string model) {
	this->model = model;
}

string MusicalInstrument::getModelOfPickups() {
	return modelOfPickups;
}

void MusicalInstrument::setModelOfPickups(string modelOfPickups) {
	this->modelOfPickups = modelOfPickups;
}

string MusicalInstrument::getMaterialOfBody() {
	return materialOfBody;
}

void MusicalInstrument::setMaterialOfBody(string materialOfBody) {
	this->materialOfBody = materialOfBody;
}

string MusicalInstrument::getMaterialOfNeck() {
	return materialOfNeck;
}

void MusicalInstrument::setMaterialOfNeck(string materialOfNeck) {
	this->materialOfNeck = materialOfNeck;
}


string MusicalInstrument::getMaterialOfFretboard() {
	return materialOfFretboard;
}

void MusicalInstrument::setMaterialOfFretboard(string materialOfFretboard) {
	this->materialOfFretboard = materialOfFretboard;
}

string MusicalInstrument::getModelOfBridge() {
	return modelOfBridge;
}

void MusicalInstrument::setModelOfBridge(string modelOfBridge) {
	this->modelOfBridge = modelOfBridge;
}

int MusicalInstrument::getAmountOfStrings() {
	return amountOfStrings;
}

void MusicalInstrument::setAmountOfStrings(int amountOfStrings) {
	this->amountOfStrings = amountOfStrings;
}

int MusicalInstrument::getAmountOfPickups() {
	return amountOfPickups;
}

void MusicalInstrument::setAmountOfPickups(int amountOfPickups) {
	this->amountOfPickups = amountOfPickups;
}

double MusicalInstrument::getPrice() {
	return price;
}

void MusicalInstrument::setPrice(double price) {
	this->price = price;
}

bool MusicalInstrument::getIsInOffer() {
	return isInOffer;
}

void MusicalInstrument::setIsInOffer(bool isInOffer) {
	this->isInOffer = isInOffer;
}

int MusicalInstrument::getAmountInOffer() {
	return amountInOffer;
}

void MusicalInstrument::setAmountInOffer(int amountInOffer) {
	this->amountInOffer = amountInOffer;
}

string MusicalInstrument::getDateOfRelease() {
	return dateOfRelease;
}

void MusicalInstrument::setDateOfRelease(string dateOfRelease) {
	this->dateOfRelease = dateOfRelease;
}

string MusicalInstrument::toString() {
	string s = typeOfMusicalInstrument + ", " + "\n";
	s += "brand: " + brand + ", " + "\n";
	s += "model: " + model + ", " + "\n";
	s += "pickups: " + modelOfPickups + ", " + "\n";
	s += "materialOfBody: " + materialOfBody + ", " + "\n";
	s += "materialOfNeck: " + materialOfNeck + ", " + "\n";
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