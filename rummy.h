#ifndef RUMMY_H
#define RUMMY_H
class Rummy {
private:
int i;
public:
int getPlayer() {return numplayer;} 
void getNumCards(int numplayer, int numberofcards); // just determines how many cards each player gets
void setPlayers(int innumplayer) {numplayer = innumplayer;} 
vector<int>deck;
list<int> remaining;
int turnCard;
vector<int>newDeck();
char getSuit(int i);
char getCardNumber(int i);
void PrintYourDeck(vector<int>hand);
void shuffle(vector<int> &deck);
void swapCards(vector<int> &card, int pos1, int pos2);
void dealCards(vector<int> &deck, vector<int> &user, vector<int> &CPUS);
void printTurnCard(int v);
void meldsSorted(vector<int> &discard, int startInArray, int finishInArray);
bool isWinner(vector<int> hand)
vector<int> nonMatches;
void playUserTurn(Rummy &rummy)
void merge(vector<int> discard, int a1, int m, int b2, vector<int> &output);
bool gameOver(Rummy rummy)
int evaluate(Rummy rummy)
Rummy initializeRummy()
};






#endif
