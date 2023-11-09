/*
 	 Author:		Pushpendra
 	 Project Title: CRICK-IN Virtual Cricket Application
 	 Language Used: C++
 */

#include "game.h"
using namespace std;

int main() {

	Game gameobj;

	gameobj.welcome();

	cout << "\nPress Enter To Continue....";
	getchar();

	gameobj.showAllPlayers();

	cout << "\nPress Enter To Continue....";
	getchar();

	gameobj.selectPlayers();
	gameobj.showTeamPlayers();

	cin.ignore(numeric_limits<streamsize>::max(),'\n'); //clear input buffer

	cout << "\nPress Enter To Toss";
	getchar();

	gameobj.toss();
	gameobj.startFirstInnings();
	gameobj.startSecondInnings();
	gameobj.showMatchSummary();

	return 0;
}
