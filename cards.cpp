#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

class Rummy {
private:
int numplayer;
int numcards;
int card;
string suit;
string cardset;
string cardname;

public:
//Rummy();
//~Rummy();
int getPlayer() {return numplayer;}
void getCards(int numcard, int numplayer);
void getNumCards(int numplayer, int numcards);
void setPlayers(int innumplayer) {numplayer = innumplayer;}
void setNumCards(int innumcards) {numcards = innumcards;}
void setSuit(string insuit){suit = insuit;}
void CreateSuit(int numcard, string suit); 
void CreateNumberCard(int numcard, string cardset);
void CreateCardSet(string cardset, string suit, string cardname);
};
//	Rummy:: Rummy(int nn) : numplayerz(nn){}
	
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
}
}
	void Rummy:: CreateSuit(int numcard, string suit){
		suit = "♦";					
		suit = "♠";
		suit = "❤"
		suit = "☘";	
}
}

	void Rummy:: getNumCards(int numplayer, int numcards){
		if (numplayer == 2){
			numcards = 10;}
		else if (numplayer == 3) {
			numcards = 7;}
		else if (numplayer == 4){
			numcards = 7;}
		else if (numplayer == 5){
			numcards = 6;}
		else if (numplayer == 6){
			numcards = 6;}
		else {
			cout << "Error too less or too many players" << endl;
			}
			}

	void Rummy::getCards(int card,int numplayer){
		int i = 0;
		srand(0);

		if (numplayer == 2){
		for(i=0; i< 10; ++i){
		numcard = rand()%50 + 1;
		cout << card << " ";
 		
		}
		}
		else if ((numplayer == 3) || (numplayer == 4)){
		for(i=0; i<7; ++i){
		numcard = rand()%50 + 1;
		cout << card << " ";
		}

		}
		else if ((numplayer == 5) || (numplayer == 6)){
		for(i=0; i <6 ; ++i){
		numcard = rand()%50 + 1;
		cout << card << " ";
		
		}
		}
		else
		cout << "Error too less or too many players"<<endl;}

int main() {
	vector<int> firstvec;
	Rummy player1rummy;
	cout << "How many players?" <<endl;
	player1rummy.getPlayer();
	player1rummy.getCards();



//Draw a card




}
