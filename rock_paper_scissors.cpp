// Rock paper scissors 
#include <iostream>
#include <ctime>

using namespace std;

void compare(int userChoice, int botChoice); 
int menuOption();
void choiceDisplay(int choice, string user);


int main() {
	
	srand(time(0));
	int botChoice;
	int userChoice;
	
	cout << "Welcome to Rock-Paper-Scissors Game" << endl;
	cout << "***********************************" << endl;
	
	do {
		userChoice = menuOption();
		botChoice = rand() % 3 + 1;
		if (userChoice == 4){
			break;
		}
		choiceDisplay(userChoice, "You ");
		choiceDisplay(botChoice, "Bot ");	
		compare(userChoice, botChoice);
	} while(userChoice != 4);
	
	cout << "Thanks for playing!\nCome again!";
	return 0;
}

int menuOption() {
    
    int option;
    
	do {
        cout << "1. Rock\n2. Paper\n3. Scissors\n4. Quit: ";
        cin >> option;
        
        // Validate input to make sure it's between 1 and 4
        if (option < 1 || option > 4) {
            cout << "Invalid option, please choose between 1 and 4.\n";
        }

    } while (option < 1 || option > 4); // Loop until a valid option (1 to 4) is selected

    return option;
}

void compare(int userChoice, int botChoice){
	// logical comprasion would be 
	// rock > scissors
	// scissors > paper
	// paper > rock
	// same = same
	
	if (userChoice == botChoice){
		cout << "It is a tie!" << endl;
	}
	else if ((userChoice == 1 && botChoice == 3) || (userChoice == 3 && botChoice == 2) || (userChoice == 2 && botChoice == 1)) {	
		cout << "You win!" << endl;
	}
	else 
	{
		cout << "You lose!" << endl;
	}
}

void choiceDisplay(int choice, string user){
	switch (choice)
	{
		case 1:
			cout << user << "chose: Rock" << endl;
			break;
		case 2:
			cout << user << "chose: Paper" << endl;
			break;
		case 3:
			cout << user << "chose: Scissors" << endl;
			break;
	}
}

