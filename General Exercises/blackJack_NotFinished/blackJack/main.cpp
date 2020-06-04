#include <algorithm>
#include <array>
#include <cassert>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

enum CardRanks {
	Rank_1,
	Rank_2,
	Rank_3,
	Rank_4,
	Rank_5,
	Rank_6,
	Rank_7,
	Rank_8,
	Rank_9,
	Rank_10,
	Rank_Jack,
	Rank_Queen,
	Rank_King,
	Rank_Ace,

	Max_Rank
};

enum CardSuits {
	Suit_Clubs,
	Suit_Diamonds,
	Suit_Hearts,
	Suit_Spades,

	Max_Suit
};

struct Card {
	CardRanks rank;
	CardSuits suit;
};

void printCard(const Card& card) {
	switch (card.rank) {
	case CardRanks::Rank_1:
		cout << '1';
		break;
	case CardRanks::Rank_2:
		cout << '2';
		break;
	case CardRanks::Rank_3:
		cout << '3';
		break;
	case CardRanks::Rank_4:
		cout << '4';
		break;
	case CardRanks::Rank_5:
		cout << '5';
		break;
	case CardRanks::Rank_6:
		cout << '6';
		break;
	case CardRanks::Rank_7:
		cout << '7';
		break;
	case CardRanks::Rank_8:
		cout << '8';
		break;
	case CardRanks::Rank_9:
		cout << '9';
		break;
	case CardRanks::Rank_10:
		cout << '10';
		break;
	case CardRanks::Rank_Jack:
		cout << 'J';
		break;
	case CardRanks::Rank_Queen:
		cout << 'Q';
		break;
	case CardRanks::Rank_King:
		cout << 'K';
		break;
	case CardRanks::Rank_Ace:
		cout << 'A';
		break;
	}

	switch (card.suit) {
	case CardSuits::Suit_Clubs:
		cout << 'C';
		break;
	case CardSuits::Suit_Diamonds:
		cout << 'D';
		break;
	case CardSuits::Suit_Hearts:
		cout << 'H';
		break;
	case CardSuits::Suit_Spades:
		cout << 'S';
		break;
	}
};



int main() {

	Card card;
	card.rank = CardRanks::Rank_5;
	card.suit = CardSuits::Suit_Diamonds;
	printCard(card);

	return 0;

}




