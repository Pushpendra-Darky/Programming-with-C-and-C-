/*
		Author:	Pushpendra
		Title:	Write a C++ program to build a mini cricket application named Gully Cricket App
		Module: C++
*/

// Include required header files and define namespaces as required

#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

void greet();
void displayTeams(string [], string []);
void selectBatsmanAndBowler(string [], string []);
void startInnings(int , string , string);
int playInnings();
void displayScore(string, int);
void decideWinner(int , int );


class Teams {

	public:
			int runsScored;
			string teamName;
			string players[3];

};

string currentBatsman;
string currentBowler;
int main() {

	greet();
	Teams teamA;
		teamA.teamName = "Team A";
		teamA.players[0] = "Virat Kohli";
		teamA.players[1] = "Kl Rahul";
		teamA.players[2] = "Hardik Pandya";

		Teams teamB;
		teamB.teamName = "Team B";
		teamB.players[0] = "MS Dhoni";
		teamB.players[1] = "Ravindra Jadeja";
		teamB.players[2] = "Jasprit Bumrah";


		displayTeams(teamA.players, teamB.players);
		cout << "Starting Match..." << endl;
		sleep(5);

		selectBatsmanAndBowler(teamA.players, teamB.players);
		startInnings(1, teamA.teamName, teamB.teamName);
		sleep(5);

		teamA.runsScored = playInnings();
		displayScore(teamA.teamName, teamA.runsScored);
		cout << "End of First Innnings!" << endl;
		sleep(5);

		selectBatsmanAndBowler(teamB.players, teamA.players);
		startInnings(2, teamB.teamName, teamA.teamName);
		sleep(5);

		teamB.runsScored = playInnings();
		displayScore(teamB.teamName, teamB.runsScored);
		cout << "End of Second Innnings!" << endl;
		sleep(5);

		cout << "Result:\n";
		sleep(2);
		decideWinner(teamA.runsScored, teamB.runsScored);

		return 0;
}

void greet(){

		cout << "\tWelcome To The Gully Cricket...\n";
}

void displayTeams(string team1[], string team2[]) {

		cout << "Players of Team A:" << endl;

		for(int i=0; i< 3; i++) {

			cout << "Player " << i+1 << ": " << team1[i] << endl;
		}

		cout << endl << "Players of Team B:" << endl;

				for(int j=0; j< 3; j++) {

					cout << "Player " << j+1 << ": " << team2[j] << endl;
				}
}

void selectBatsmanAndBowler(string team1[], string team2[]) {

	srand(time(NULL));

	int idx = rand()%3;
	currentBatsman = team1[idx];

	idx = rand()%3;
	currentBowler = team2[idx];
}

void startInnings(int innNo, string battingTeam, string bowlingTeam) {

	cout << "Innings " << innNo << "\n" << endl;
	cout << "Batting: \t " << battingTeam  <<"\t Bowling: \t " << bowlingTeam << endl;
	cout << "Current Batsman:\t " << currentBatsman  << endl << "Current Bowler:\t " << currentBowler << endl;
}

int playInnings() {

	int totalRuns = 0;
	srand(time(NULL));

	cout << "Ball \t \t" << "Runs" << endl;

	for(int i = 0; i< 6; i++) {

		int run = rand()%7;
		cout << i+1 << "\t \t" << run << endl;
		totalRuns += run;
		sleep(2);
	}

	return totalRuns;
}

void displayScore(string team, int totalRuns) {

	cout << "Total Runs scored by " << team << ": \t\t" << totalRuns << endl;
}

void decideWinner(int team1Score, int team2Score) {

	if (team1Score > team2Score) {

		cout << "Team A wins!" << endl;
	}
	else if (team2Score > team1Score) {

		cout << "Team B wins!!" << endl;
		}
	else {

		cout << "Match Tied!" << endl;
	}
}
