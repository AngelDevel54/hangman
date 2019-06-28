#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;
string wordState = "";	//For the current word state
string defaultWords[12] = {"Programming", "Language", "C Plus Plus", "Recursion", "UML", "Class Inheritance", 
						"Asymptotic Notation", "Space Complexity", "Exchange Sort", "Quick Sort", "Templates", "Operator Overloading"};
vector<char> lettersUsed;	//To keep track of letters used
vector<string> wordsUsed;	//FOR HARD MODE ONLY!!
int SIZE;

//Display the current stick figure state:
void displayCurFigure(int max, int guessNum){
	switch(max){
		case 12:	//EASY
			if(guessNum == 10 || guessNum == 9){
				cout << "\t O "<< endl;
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
			}
			else if(guessNum == 8 || guessNum == 7){
				cout << "\t O "<< endl;
				cout << "\t | "<< endl;
				cout << "\t | "<< endl;
				cout << "\t   "<< endl;
			}
			else if(guessNum == 6 || guessNum == 5){
				cout << "\t O "<< endl;
				cout << "\t\\| "<< endl;
				cout << "\t | "<< endl;
				cout << "\t   "<< endl;
			}
			else if(guessNum == 4|| guessNum == 3){
				cout << "\t O "<< endl;
				cout << "\t\\|/"<< endl;
				cout << "\t | "<< endl;
				cout << "\t   "<< endl;
			}
			else if(guessNum == 2 || guessNum == 1){
				cout << "\t O "<< endl;
				cout << "\t\\|/"<< endl;
				cout << "\t | "<< endl;
				cout << "\t/  "<< endl;
			}
			else if(guessNum == 0){
				cout << "\t O "<< endl;
				cout << "\t\\|/"<< endl;
				cout << "\t | "<< endl;
				cout << "\t/ \\"<< endl;
			}
			else{
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
			}
			break;
		case 6:		//NORMAL and HARD
			if(guessNum == 5){
				cout << "\t O "<< endl;
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
			}
			else if(guessNum == 4){
				cout << "\t O "<< endl;
				cout << "\t | "<< endl;
				cout << "\t | "<< endl;
				cout << "\t   "<< endl;
			}
			else if(guessNum == 3){
				cout << "\t O "<< endl;
				cout << "\t\\| "<< endl;
				cout << "\t | "<< endl;
				cout << "\t   "<< endl;
			}
			else if(guessNum == 2){
				cout << "\t O "<< endl;
				cout << "\t\\|/"<< endl;
				cout << "\t | "<< endl;
				cout << "\t   "<< endl;
			}
			else if(guessNum == 1){
				cout << "\t O "<< endl;
				cout << "\t\\|/"<< endl;
				cout << "\t | "<< endl;
				cout << "\t/  "<< endl;
			}
			else if(guessNum == 0){
				cout << "\t O "<< endl;
				cout << "\t\\|/"<< endl;
				cout << "\t | "<< endl;
				cout << "\t/ \\"<< endl;
			}
			else{
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
				cout << "\t   "<< endl;
			}
			break;
	}
}

//Create the starting wordState
void createWordState(string word){
	for(int i = 0; i < word.length(); i++){
		if(word[i] == ' '){
			wordState.append(" ");
		}
		else{
			wordState.append("_");
		}
	}
}

bool finishedWord(string word){
	return (wordState == word);
}
bool letterExists(char letter, string tempWord){
	return (tempWord.find_first_of(letter) != string::npos);
}




