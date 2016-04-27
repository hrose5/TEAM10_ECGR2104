#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
// feel free to change any variables you like like i know numcard is slightly confusing


class Rummy {
private:
int numplayer; //number of players
int numberofcards; // the number the cards each play er gets
int numcard; // the card number from 1-50
string suit; // the suit like heart, spade, clover,etc...
public:
//Rummy();
//~Rummy();
//shuffle function
//delete card function
// cpu function
//storage function
//hand function
//leftover card function
// discard function
//meld function (holds melds possibilities)
// meld pile (melds already utilized)
// order function (who plays first)



int getPlayer() {return numplayer;} // gets number of players
void getCards(int numcard, int numplayer); // uses the number of players to determine which card from 1-52 is drawn
void getNumCards(int numplayer, int numberofcards); // just determines how many cards each player gets
void setPlayers(int innumplayer) {numplayer = innumplayer;} 
void setNumberOfCards(int innumcards) {numberofcards = innumcards;}
void setSuit(string insuit){suit = insuit;}
void CreateSuit(int numcard, string suit); // determines the suit
void CreateNumberCard(int numcard, string cardset); // determines the actual card lik 1 ,2,jack, king, etc....
};
	void Rummy:: CreateNumberCard(int numcard, string cardset){
		switch(numcard) {
		case 1:
		cardset = 1;
		break;
		case 2:
		cardset = 2;
		break;
		case 3:
		cardset = 3;
		break;
		case 4:
		cardset = 4;
		break;
		case 5:
		cardset = 5;
		break;
		case 6:
		cardset = 6;
		break;
		case 7:
		cardset = 7;
		break;
		case 8:
		cardset = 8;
		break;
		case 9:
		cardset = 9;
		break;
		case 10:
		cardset = 10;
		break;
		case 11:
		cardset = "Jack";
		break;
		case 12:
		cardset = "Queen";
		break;
		case 13:
		cardset = "King";
		break;
		case 14:
		cardset = 1;
		break;
		case 15:
		cardset = 2;
		break;
		case 16:
		cardset = 3;
		break;
		case 17:
		cardset = 4;
		break;
		case 18:
		cardset = 5;
		break;
		case 19:
		cardset = 6;
		break;
		case 20:
		cardset = 7;
		break;
		case 21:
		cardset = 8;
		break;
		case 22:
		cardset = 9;
		break;
		case 23:
		cardset = 10;
		break;
		case 24:
		cardset = "Jack";
		break;
		case 25:
		cardset = "Queen";
		break;
		case 26:
		cardset = "King";
		break;
		case 27:
		cardset = 1;
		break;
		case 28:
		cardset = 2;
		break;
		case 29:
		cardset = 3;
		break;
		case 30:
		cardset = 4;
		break;
		case 31:
		cardset = 5;
		break;
		case 32:
		cardset = 6;
		break;
		case 33:
		cardset = 7;
		break;
		case 34:
		cardset = 8;
		break;
		case 35:
		cardset = 9;
		break;
		case 36:
		cardset = 10;
		break;
		case 37:
		cardset = "Jack";
		break;
		case 38:
		cardset = "Queen";
		break;
		case 39:
		cardset = "King";
		break;	
		case 40:
		cardset = 1;
		break;
		case 41:
		cardset = 2;
		break;
		case 42:
		cardset = 3;
		break;
		case 43:
		cardset = 4;
		break;
		case 44:
		cardset = 5;
		break;
		case 45:
		cardset = 6;
		break;
		case 46:
		cardset = 7;
		break;
		case 47:
		cardset = 8;
		break;
		case 48:
		cardset = 9;
		break;
		case 49:
		cardset = 10;
		break;
		case 50:
		cardset = "Jack";
		break;
		case 51:
		cardset = "Queen";
		break;
		case 52:
		cardset = "King";
		break;
}
}
	void Rummy:: CreateSuit(int numcard, string suit){
		if (numcard <= 13){
		suit = "♦";	}
		else if (numcard <= 26){
		suit = "♠";}
		else if (numcard <= 39){
		suit = "❤"}
		else
		suit = "☘";	
}
}

	void Rummy:: getNumCards(int numplayer, int numberofcards){
		if (numplayer == 2){
			numberofcards = 10;}
		else if (numplayer == 3) {
			numberofcards = 7;}
		else if (numplayer == 4){
			numberofcards = 7;}
		else if (numplayer == 5){
			numberofcards = 6;}
		else if (numplayer == 6){
			numberofcards = 6;}
		else {
			cout << "Error too less or too many players" << endl;
			}
			}

	void Rummy::getCards(int numcard,int numberofcards){
		int i = 0;
		srand(0);
		for(i=0; i<numberofcards; ++i){
		numcard = rand()%52 + 1;
		cout << numcard << " " << endl;
int main() {
	Rummy player1rummy;
	cout << "How many players?" <<endl;
	player1rummy.getPlayer();
	player1rummy.getCards();



//Draw a card




}
