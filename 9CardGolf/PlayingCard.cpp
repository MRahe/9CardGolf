#include <string>
#include <vector>
#include <algorithm>
#include "PlayingCard.h"

using namespace std;

//This function is used to make a 52 card deck.
vector<PlayingCard> MakeDeck() {
	vector<PlayingCard> deck;
	string suitArray[4] = { "Clubs", "Spades", "Hearts", "Diamonds" };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			struct PlayingCard card = {suitArray[i], j};
			deck.push_back(card);
		}
	}
	return deck;
}

//This function is used to shuffle a 52 card deck in a random order.
void ShuffleDeck(vector<PlayingCard> deck) {
	for (int i = 0; i < 150; i ++) {
		int numb = rand() % 52;

		iter_swap(deck.begin(), deck.begin() + numb);

	}
	//select a random card to move to the front of the deck

}