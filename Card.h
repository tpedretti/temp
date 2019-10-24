#ifndef CARD_H
#define CARD_H

class Card
{
public:
	enum class Suit { HEARTS, CLUBS, SPADES, DIAMONDS };
	enum class Value { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
		JACK, QUEEN, KING, ACE };

	Card() {  }
	Card(Suit suit, Value value);
	Card(Suit suit, short value);
	Card(int suit, int value);
	~Card() { }

	Suit GetSuit();
	void SetSuit(Suit suit);
	Value GetValue() 
	{
		return m_cardValue;
	}
	void SetValue(Value value);
private:
	Suit m_cardSuit;
	Value m_cardValue;
};

#endif 