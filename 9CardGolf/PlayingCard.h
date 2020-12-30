#include <string>
using namespace std;


struct PlayingCard {
	string Suit;
	int FaceValue;
};

vector<PlayingCard> MakeDeck();
void ShuffleDeck(vector<PlayingCard> deck);