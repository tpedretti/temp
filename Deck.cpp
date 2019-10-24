#include "Deck.h"

Deck::Deck()
{
	m_MaximumNumberOfCards = 52;
	m_NumberOfCards = 0;
	m_pCards = new vector<Card>();    //creates heap space for 52 cards.
	PopulateDeck();
	shuffleCards();
}


Deck::~Deck()
{

}

Card Deck::GetCard(Card& card)
{
	Card tempCard = m_pDeck->top();
	m_pDeck->pop();
	return tempCard;
}

void Deck::shuffleCards()
{
	while (m_pCards->size() > 0)
	{
		//Randomly pick crd from m_pCards
		//v1 = rand() % m_pCards->sie();

		//Put random card into stack
		//m_pDeck->push(m_pCard[v1];

		//Delete card out of m_pCards
		//m_pCards->erase(m_pCard.begin()+v1);
	}
}

void Deck::addCard(Card& cardToAdd) {
	m_pCards->push_back(cardToAdd); //add a card to the deck. same as (*m_pCards).cardToAdd
}

void Deck::PopulateDeck() {
	for (int i = 0; i < 13; ++i) {
		for (int j = 0; j < 4; ++j) {
			Card card(j, i);
			m_pCards->push_back(card);
		}
	}
}