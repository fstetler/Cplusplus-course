#include<iostream>
#include<string>
#include<list>
#include<vector>
using namespace std;

struct Person {
	double weight;
	string haircolor;
	double height;
};

string nameInput() {
	string name{};
	cout << "Please input the name of the person, wrote \'done\' when finished: " << "\n";
	getline(cin, name);
	return name;
}

int main() {
	bool run = true;
	vector<string> nameList;
	while (run) {
		string name{ nameInput() };
		if (name == "done")
			run = false;
		else{
			Person name;
			
			cout << "Please enter their weight, haircolor, and height: " << "\n";
			
			double weight{};
			string haircolor{};
			double height{};

			cin >> weight;
			cin >> haircolor;
			cin >> height;

			name.weight = weight;
			name.haircolor = haircolor;
			name.height = height;
			
			// WHY DOESNT THIS WORK
			nameList.push_back(name);


			}

	run = false;



	
	}
		

	return 0;
}


