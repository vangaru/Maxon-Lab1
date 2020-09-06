#pragma once

#include <string>
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;

class Zooshop{

private: 

	string zooshop_name;
	
	int amount_of_kinds_of_animals;
	
	vector <string> names_of_animals;
	vector <int> amount_of_animals;
	vector <float> prices_of_animals;

	void set_zooshop_name(string zooshop_name);
	void set_amount_of_kinds_of_animals(int set_amount_of_kinds_of_animals);
	void set_names_of_animals(vector <string> set_names_of_animals);
	void set_amount_of_animals(vector <int> set_amount_of_animals);
	void set_prices_of_animals(vector <float> set_prices_of_animals);

public:

	static Zooshop keyboard_input();


	string get_zooshop_name();
	int get_amount_of_kinds_of_animals();
	vector <string> get_names_of_animals();
	vector <int> get_amount_of_animals();
	vector <float> get_prices_of_animals();

	Zooshop();

	Zooshop(

		string zooshop_name,
		int amount_of_kinds_of_animals,
		vector <string> names_of_animals,
		vector <int> amount_of_animals,
		vector <float> prices_of_animals

	);

	Zooshop(const Zooshop& obj);
	
	~Zooshop() {};
};

