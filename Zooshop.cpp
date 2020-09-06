#include "Zooshop.h"

void Zooshop :: set_zooshop_name(string set_zooshop_name) {
	zooshop_name = set_zooshop_name;
}

void Zooshop :: set_amount_of_kinds_of_animals(int set_amount_of_kinds_of_animals) {
	amount_of_kinds_of_animals = set_amount_of_kinds_of_animals;
}

void Zooshop :: set_names_of_animals(vector<string> set_names_of_animals) {
	names_of_animals = set_names_of_animals;
}

void Zooshop :: set_amount_of_animals(vector<int> set_amount_of_animals) {
	amount_of_animals = set_amount_of_animals;
}

void Zooshop :: set_prices_of_animals(vector<float> set_prices_of_animals) {
	prices_of_animals = set_prices_of_animals;
}

/*Zooshop Zooshop :: keyboard_input() {
	cout << "Enter name of your zooshop >>> ";
	string zooshop_name;
	getline(cin, zooshop_name);

	cout << "Enter amount of kinds of animals in your zooshop >>> ";
	int amount_of_kinds_of_animals;
	cin >> amount_of_kinds_of_animals;

	vector <string> names_of_animals;
	vector <int> amount_of_animals;
	vector <float> prices_of_animals;

	cout << "Enter info about animals:" << endl;

	for (int i = 0; i < amount_of_kinds_of_animals; i++) {
		string name_of_animal = NULL;
		int amount = NULL;
		float price_of_animal = NULL;

		cout << "Enter name of " << i + 1 << " animal >>> ";
		getline(cin, name_of_animal);
		names_of_animals.push_back(name_of_animal);

		cout << "Enter amount of animals >>> ";
		cin >> amount;
		amount_of_animals.push_back(amount);

		cout << "Enter price of animal >>> ";
		cin >> price_of_animal;
		prices_of_animals.push_back(price_of_animal);

		Zooshop zooshop(zooshop_name, amount_of_kinds_of_animals, names_of_animals, amount_of_animals, prices_of_animals);

		return zooshop;
	}
}*/

string Zooshop :: get_zooshop_name() {
	return zooshop_name;
}

int Zooshop :: get_amount_of_kinds_of_animals() {
	return amount_of_kinds_of_animals;
}

vector <string> Zooshop :: get_names_of_animals() {
	return names_of_animals;
}

vector <int> Zooshop :: get_amount_of_animals() {
	return amount_of_animals;
}

vector <float> Zooshop :: get_prices_of_animals() {
	return prices_of_animals;
}

Zooshop :: Zooshop() {
	zooshop_name = "Maxon Zooshop";
	amount_of_kinds_of_animals = 0;
	
	names_of_animals.push_back("XXX---EMPTY LIST---XXX");
	amount_of_animals.push_back(0);
	prices_of_animals.push_back(0);
}

Zooshop :: Zooshop(

	string zooshop_name, 
	int amount_of_kinds_of_animals, 
	vector <string> names_of_animals,
	vector <int> amount_of_animals,
	vector <float> prices_of_animals

)
{

	set_zooshop_name(zooshop_name);
	set_amount_of_kinds_of_animals(amount_of_kinds_of_animals);
	set_names_of_animals(names_of_animals);
	set_amount_of_animals(amount_of_animals);
	set_prices_of_animals(prices_of_animals);

}

Zooshop :: Zooshop(const Zooshop& obj) {
	set_zooshop_name(obj.zooshop_name);
	set_amount_of_kinds_of_animals(obj.amount_of_kinds_of_animals);
	set_names_of_animals(obj.names_of_animals);
	set_amount_of_animals(obj.amount_of_animals);
	set_prices_of_animals(obj.prices_of_animals);
}

