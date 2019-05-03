
#include <iostream>
#include <string>
#include "deckofcards.h"
#include "Player.h"




using namespace std;



int main() {

	int dealer_rank;
	int player_rank;
	char choice;
	Card card;
	Player player = Player();



	cout << "Player, what is your name? ";
	cin >> player.name;

	card = Card();
	dealer_rank = card.get_rank();



	cout << "You draw a " << card.get_rank_string()

		<< " of " << card.get_suit_string() << ".\n";

	cout << "Would you like another card? "

		<< "Enter \"y\" for yes or \"n\" for no: ";

	cin >> choice;



	card = Card();

	player_rank = card.get_rank();



	cout << "You draw a " << card.get_rank_string()

		<< " of " << card.get_suit_string() << ".\n";



	if ((choice == 'y' && dealer_rank > player_rank) ||

		(choice == 'n' && dealer_rank < player_rank))




		cout << "LOSE!!! Too bad " + player.name;


	else



		cout << "WIN!!! Congratulations " + player.name;
	


	return 0;

}