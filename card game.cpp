#include <iostream>
#include <array>

enum CardSuit
{
	SUITS_CLUBS,		// 0
	SUITS_SPADES,		// 1
	SUITS_DIAMONDS,		// 2
	SUITS_HEARTS,		// 3
	MAX_SUIT,		// 4
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
	RANK_VALET, 		// 9
	RANK_QUEEN, 		// 10
	RANK_KING,  		// 11
	RANK_ACE,   		// 12
	MAX_RANK,   		// 13
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

int main() 
{
	namespace std;
	
	array <Card 52> deck;
	
	int cardIndex = 0;
	
	// çŕďîëíĺíčĺ ěŕńńčâŕ ęŕđŕňŕěč 
	for (int suit = 0; suit < MAX_SUIT; ++suit)
	{
		for (int rank = 0; rank < MAX_RANK; ++rank)
		{
			deck[cardIndex].rank = static_cast<CardRank>(rank);
			deck[cardIndex].suit = static_cast<CardSuit>(suit);
		
			++cardIndex;
		} 
	}
	
	return 0;
}
