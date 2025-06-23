#include "MusicalInstrument.h"

int main() {
	MusicalInstrument test01;
	//MusicalInstrument electricGuitar1("Electric Guitar", "IBANEZ", "RGRT421", true, 26);
	//MusicalInstrument electricGuitar1("Test01", "Test01", "Test01", true, 26);
	//MusicalInstrument electricGuitar2("Electric Guitar", "FLIGHT", "SUPERSTRAT", false, 0);
	MusicalInstrument electricGuitar2("Test02", "Test02", "Test02", false, 0);

	MusicalInstrument electricGuitar1("Electric Guitar", "IBANEZ",
		"RGRT421", "QUANTUM", "NYATOH", "MAPLE/NUT",
		"JATOBA", "F106", 6, 2, 253.33, true, 26,
		"21.12.21");

	cout << test01.toString() << endl;
	cout << electricGuitar1.toString() << endl;
	cout << electricGuitar2.toString() << endl;


	return 0;
}
