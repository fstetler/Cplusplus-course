#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
using namespace std;

enum class Ranks {
	two,
	three,
	four,
	five,
	six,
	seven,
	eight,
	nine,
	ten,
	jack,
	queen,
	king,
	ace,
	max_ranks
};

enum class Suits {
	clubs,
	diamonds,
	hearts,
	spades,
	max_suits
};

struct Card {
	Ranks rank{};
	Suits suit{};
};

void printCard(Card card) {
	switch (card.rank) {
	case Ranks::two:
		cout << '2';
		break;
	case Ranks::three:
		cout << '3';
		break;
	case Ranks::four:
		cout << '4';
		break;
	case Ranks::five:
		cout << '5';
		break;
	case Ranks::six:
		cout << '6';
		break;
	case Ranks::seven:
		cout << '7';
		break;
	case Ranks::eight:
		cout << '8';
		break;
	case Ranks::nine:
		cout << '9';
		break;
	case Ranks::ten:
		cout << '10';
		break;
	case Ranks::jack:
		cout << 'J';
		break;
	case Ranks::queen:
		cout << 'Q';
		break;
	case Ranks::king:
		cout << 'K';
		break;
	case Ranks::ace:
		cout << 'A';
		break;
	}
	switch (card.suit) {
	case Suits::clubs:
		cout << 'C';
		break;
	case Suits::spades:
		cout << 'S';
		break;
	case Suits::hearts:
		cout << 'H';
		break;
	case Suits::diamonds:
		cout << 'D';
		break;
	}
}

array<Card, 52> createDeck() {

	array<Card, 52> allCards{};

	array<Card, 52>::size_type card{ 0 };

	auto suits{ static_cast<array<Card, 52>::size_type>(Suits::max_suits) };
	auto ranks{ static_cast<array<Card, 52>::size_type>(Ranks::max_ranks) };

	for (int i{ 0 }; i < suits; ++i) {
		for (int j{ 0 }; j < ranks; ++j) {
			allCards[card].suit = static_cast<Suits>(i);
			allCards[card].rank = static_cast<Ranks>(j);
			++card;
		}
	}

	return allCards;
}

void printDeck(array<Card, 52> deck) {
	for (int i{ 0 }; i < deck.size(); ++i) {
		printCard(deck[i]);
		cout << ' ';
	}
}


int main() {

	Card card{};
	card.rank = Ranks::four;
	card.suit = Suits::diamonds;
	auto deck{ createDeck() };
	printDeck(deck);
	return 0;
}




