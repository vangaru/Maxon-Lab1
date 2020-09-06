#include "Zooshop.h"

int main() {

	string zooshop_name  = "xxx";
	int amount_of_kinds_of_animals = 10;
	vector <string> names_of_animals;
	names_of_animals.push_back("Bird");
	vector <int> amount_of_animals;
	amount_of_animals.push_back(3);
	vector <float> prices_of_animals;
	prices_of_animals.push_back(10.5);



	Zooshop zooshop(zooshop_name, amount_of_kinds_of_animals, names_of_animals, amount_of_animals, prices_of_animals);

	//= Zooshop::keyboard_input();

	cout << zooshop.get_zooshop_name() << endl << zooshop.get_amount_of_kinds_of_animals() << endl << zooshop.get_names_of_animals().at(0) << endl << zooshop.get_amount_of_animals().at(0) << endl << zooshop.get_prices_of_animals().at(0);

	//Zooshop zooshop2(zooshop);
	//cout << zooshop2.get_zooshop_name() << endl << zooshop2.get_amount_of_kinds_of_animals() << endl << zooshop2.get_names_of_animals().at(0) << endl << zooshop2.get_amount_of_animals().at(0) << endl << zooshop2.get_prices_of_animals().at(0);

	return 0;
}