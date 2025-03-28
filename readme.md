# Rock-Paper-Scissors Game

Welcome to the Rock-Paper-Scissors game implemented in C++! This simple text-based game lets you play against a computer (bot). The objective of the game is to choose one of three options: Rock, Paper, or Scissors, and the computer will randomly pick one as well. The winner is determined based on the classic rules:

- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock

## Features

- Play against the bot by choosing from Rock, Paper, or Scissors.
- The bot randomly chooses one of the three options.
- Displays the result: whether you win, lose, or tie.
- Option to quit the game at any time.

## Game Flow

1. The user is presented with four options: Rock, Paper, Scissors, and Quit.
2. The user picks an option (1 for Rock, 2 for Paper, 3 for Scissors, or 4 to Quit).
3. The bot randomly selects an option.
4. The game compares the user's choice with the bot's choice and displays the result.
5. If the user chooses to quit (option 4), the game ends with a "Thanks for playing!" message.

## How to Play

### 1. **Run the Program**: Compile and run the `rock_paper_scissors.cpp` file using any C++ compiler (e.g., g++, Visual Studio, etc.).
   
   ```bash
   g++ rock_paper_scissors.cpp -o rock_paper_scissors
   ./rock_paper_scissors
   ```

### 2. **Game Instructions**: Once the game starts, follow the on-screen prompts:

Type ```1``` for Rock, ```2``` for Paper, or ```3``` for Scissors.

To quit the game, type ```4```.

### 3. **Game Outcome**: After each round, the program will display:

What you and the bot chose.

Whether you won, lost, or tied.

### 4. **Exit**: The game will end when you choose to quit (option 4).

## Example

Here’s an example of how the game will look when you play:

```
Welcome to Rock-Paper-Scissors Game
***********************************
1. Rock
2. Paper
3. Scissors
4. Quit: 1
You chose: Rock
Bot chose: Scissors
You win!

1. Rock
2. Paper
3. Scissors
4. Quit: 3
You chose: Scissors
Bot chose: Paper
You win!

1. Rock
2. Paper
3. Scissors
4. Quit: 4
Thanks for playing! Hope you enjoyed the game!
```
## Code Explanation

menuOption(): This function prompts the user to choose an option between 1 and 4. It keeps asking for input until the user selects a valid option.

choiceDisplay(): This function prints the selected option (Rock, Paper, or Scissors) for both the user and the bot.

compare(): This function compares the user's choice with the bot's choice and prints whether the user wins, loses, or ties.

## Requirements

A C++ compiler that supports C++11 or higher.

The C++ Standard Library (used for iostream and ctime).

## License
This project is open-source and available under the MIT License.
