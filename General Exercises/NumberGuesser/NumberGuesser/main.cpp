#include<iostream>
#include<random>
#include<ctime>

using namespace std;
namespace MyRandom {
	mt19937 mersenne{ static_cast<mt19937::result_type>(time(nullptr)) };
}

int getRandomNumber(int min, int max) {
	uniform_int_distribution<>die{ min, max };
	return die(MyRandom::mersenne);
}

int numberOfTries() {
	return 7;
}

void introduction() {
	cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have " << numberOfTries() << " to guess what it is. " << "\n";
}

int userGuessNumber() {
	while (true) {

		int guess{};
		cin >> guess;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Oops, that is not a valid input. Try again! " << "\n";
		}
		else {
			cin.ignore(32767, '\n');
			return guess;
		}
	}
}

void guess(int count, int userGuess) {
	cout << "Guess #" << count << ": " << userGuess << '\n';
}

void printResult(int userGuess, int randomNumber, bool guessing) {
	if (userGuess < randomNumber) {
		cout << "Your guess is too low. " << '\n';
	}
	else if (userGuess > randomNumber) {
		cout << "Your guess is too high. " << '\n';
	}
	else if (userGuess == randomNumber) {
		cout << "Correct! You win! " << '\n';
		guessing = false;
	}
}

char playAgain(bool startNew) {
	cout << "Want to play again (y/n)?: ";
	char again{};
	cin >> again;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Oops, not a correct alternative. Please try again!: " << "\n";
	}
	else {
		cin.ignore(32767, '\n');
		return again;
	}
	if (again == 'y') {
		startNew = true;
	}
	else if (again == 'n') {
		startNew = false;
	}
}

int main() {

	// Get a random number between 1 and 100
	bool startNew{ true };

	while (startNew) {
		int randomNumber{ getRandomNumber(1,100) };
		int count{ 1 };

		introduction();
		bool guessing{ true };
		while (guessing) {
			int userGuess{ userGuessNumber() };
			guess(count, userGuess);
			++count;
			if (userGuess == randomNumber) {
				cout << "Correct! You win! " << '\n';
				//guessing = false;
				break;
			}
			else if (userGuess < randomNumber) {
				cout << "Your guess is too low. " << '\n';
			}
			else if (userGuess > randomNumber) {
				cout << "Your guess is too high. " << '\n';
			}
			if (count == 8) {
				cout << "Sorry, you lose. The correct number was " << randomNumber << "." << '\n';
				//guessing = false;
				break;
			}	
		}
		cout << "Want to play again (y/n)?: ";
		char again{};
		cin >> again;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Oops, not a correct alternative. Please try again!: " << "\n";
		}
		else {
			cin.ignore(32767, '\n');
		}
		if (again == 'y') {
			continue;
		}
		else if (again == 'n') {
			startNew = false;
			cout << "Thanks for playing! " << "\n";
		}
	}
	return 0;
}
