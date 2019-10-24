#ifndef DECK_H
#define DECK_H

#include <vector>
#include <stack>
#include "Card.h"

using namespace std;

class Deck
{
public:
	Deck();
	Card GetCard(Card& card);
	void addCard(Card& card);
	void shuffleCards();
	vector<Card> drawCards(short cardsToDraw);
	void PopulateDeck();
	~Deck();

private:
	stack <Card>* m_pDeck;
	vector <Card>* m_pCards;
	short m_NumberOfCards;
	short m_MaximumNumberOfCards;
	Card m_card;
};
#endif