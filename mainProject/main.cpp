#include "MusicalInstrument.h"
#include "Initializer.h"
#include "Manager.h"

int main() {
	//MusicalInstrument test01;
	////MusicalInstrument electricGuitar1("Electric Guitar", "IBANEZ", "RGRT421", true, 26);
	////MusicalInstrument electricGuitar1("Test01", "Test01", "Test01", true, 26);
	////MusicalInstrument electricGuitar2("Electric Guitar", "FLIGHT", "SUPERSTRAT", false, 0);
	//MusicalInstrument electricGuitar2("Test02", "Test02", "Test02", false, 0);

	//MusicalInstrument electricGuitar1("Electric Guitar", "IBANEZ",
	//	"RGRT421", "QUANTUM", "NYATOH", "MAPLE/NUT",
	//	"JATOBA", "F106", 6, 2, 253.33, true, 26,
	//	"21.12.21");


	////MusicalInstrument test03(electricGuitar1);
	////cout << "	copy constructor"	 << test03.toString() << endl;

	//cout << test01.toString() << endl;
	//cout << electricGuitar1.toString() << endl;
	//cout << electricGuitar2.toString() << endl;



	int size;

	cout << "Input size of musical instruments: ";
	cin >> size;

	MusicalInstrument* musicalInstruments = new MusicalInstrument[size];

	Initializer initializer;

	initializer.init(musicalInstruments, size);

	for (int i = 0; i < size; i++)
	{
		cout << musicalInstruments[i].toString() << endl;
	}

	Manager manager;

	MusicalInstrument cheapestInstrument = 
		manager.findTheCheapestInstrument(musicalInstruments, size);
	MusicalInstrument TheMostExpensiveInstrument =
		manager.findTheMostExpensiveInstrument(musicalInstruments, size);
	double average = manager.findAveragePriceOfAnInstrumet(musicalInstruments, size);

	cout << "The cheapest instrument is: " << cheapestInstrument.toString() << endl;
	cout << "The most expensive instrument is: " << TheMostExpensiveInstrument.toString() << endl;
	cout << "The average price of an instrument is: " << average << endl;

	delete[] musicalInstruments;


	return 0;
}
