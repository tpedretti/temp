#include "Card.h"


Card::Card(Suit suit, short value) {
	this->m_cardSuit = suit;
	this->m_cardValue = static_cast<Value>(value);
}

Card::Card(int suit, int value) {
	this->m_cardSuit = static_cast<Suit>(suit);
	this->m_cardValue = static_cast<Value>(value);
}

Card::Card(Suit suit, Value value) {
	this->m_cardSuit = suit;
	this->m_cardValue = value;
}

void Card::SetSuit(Suit suit) {
	this->m_cardSuit = suit;
}

//this is needed to get enum from .h class!!
Card::Suit Card::GetSuit() {
	return m_cardSuit;
}

//Value Card::GetValue() {
//	return m_cardValue;
//}

void Card::SetValue(Value value) {
	this->m_cardValue = static_cast<Value>(value);
}

Card::Suit& operator ++(Card::Suit& e)
{
	e = Card::Suit(int(e) + 1);
	return e;
}

Card::Value& operator ++(Card::Value& e)
{
	e = Card::Value(int(e) + 1);
	return e;
}