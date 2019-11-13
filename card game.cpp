#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>


enum CardSuit
{
	SUITS_CLUBS,		// 0
	SUITS_SPADES,		// 1
	SUITS_DIAMONDS,		// 2
	SUITS_HEARTS,		// 3
	MAX_SUIT,			// 4
};

enum CardRank
{
	RANK_2,			// 0
	RANK_3, 		// 1
	RANK_4, 		// 2
	RANK_5, 		// 3
	RANK_6, 		// 4
	RANK_7, 		// 5
	RANK_8, 		// 6
	RANK_9, 		// 7
	RANK_10, 		// 8
	RANK_VALET, 	// 9
	RANK_QUEEN, 	// 10
	RANK_KING,  	// 11
	RANK_ACE,   	// 12
	MAX_RANK,   	// 13
};

struct Card
{
	CardRank rank;
	CardSuit suit;
};

void printCard(const Card &card)
{
	char suit;
	char rank;
	
	switch (card.suit)
	{
		case 0:		suit = 'C';		break;
		case 1:		suit = 'S';		break;
		case 2:		suit = 'D';		break;
		case 3:		suit = 'H';		break;
		default:	suit = 'N';		break;
	}
	
	switch (card.rank)
	{
		case 0:		rank = '2';		break;
		case 1:		rank = '3';		break;
		case 2:		rank = '4';		break;
		case 3:		rank = '5';		break;
		case 4:		rank = '6';		break;
		case 5:		rank = '7';		break;
		case 6:		rank = '8';		break;
		case 7:		rank = '9';		break;
		case 8:		rank = 'X';		break;
		case 9:		rank = 'V';		break;	
		case 10:	rank = 'Q';		break;
		case 11:	rank = 'K';		break;
		case 12:	rank = 'A';		break;
		default:	rank = 'N';		break;
	}
	
	std::cout << rank + suit << std::endl; 
}

void printDeck(const std::array<Card, 52> &deck)
{
	for (const auto &card : deck)
	{
		printCard(card);
		std::cout << ' ';
	}
	
	std::cout << std::endl;
}

void swapCard(const Card &card1, const Card &card2)
{
	Card temp = card1;
	card1 = card2;
	card2 = temp;
}

int getRandomNumber(const int &min, const int &max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
    
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array<Card, 52> &deck)
{
	for (int index = 0; index < 52; ++index)
	{
		int rand = getRandomNumber(0, 51);
		
		swapCard(deck[rand], deck[index]);
	}
}

int getCardValue(const Card &card)
{
	swtich card.rank
	{
		case 0:			return 2;
		case 1:			return 3;
		case 2:			return 4;
		case 3:			return 5;
		case 4:			return 6;
		case 5:			return 7;
		case 6:			return 8;
		case 7:			return 9;
		case 12:		return 11;
		default:		
			if (card.rank > 7 && card.rank < 12)
				return 10;
	}
	
	return 0;
}

int main() 
{
	namespace std;
	
	srand(static_cast<unsigned int>(time(0)));
	
	array <Card, 52> deck;
	
	int cardIndex = 0;
	
	// заполнение массива картами 
	for (int rank = 0; rank < MAX_RANK; ++rank)
	{
		for (int suit = 0; suit < MAX_SUIT; ++suit)
		{
			deck[cardIndex].rank = static_cast<CardRank>(rank);
			deck[cardIndex].suit = static_cast<CardSuit>(suit);
		
			++cardIndex;
		} 
	}
	
	printDeck(deck);
	
	shuffleDeck(deck);
	
	printDeck(deck);
	
	return 0;
}
