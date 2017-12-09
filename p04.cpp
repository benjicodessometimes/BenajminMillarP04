//Benjamin Millar 12/8/17 CSCI project 4
//It has almost everything you wanted
//featuring User input and output, several Control flow constructs,
//multiple different types of iteration, 1 vector, 2 functions (I coud of modified to be
//void but I didn't want to just to fit your parameters), and no class.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

char maybe = 'Y';
int choice;
int rockctr, paperctr, scissorsctr, staplerctr, pencilctr;

//function #1
int computersBrain(int number) {
  srand ( time(NULL) );
  number = rand() % 5 + 1;
  return(number);
}

//function #2
int game(int player1,int comp1)
{
  int score = 0;
  if(player1 == comp1)
    cout << "It's a tie!"<<endl;
  if(player1 == 1 && comp1 == 2)
  {
    cout << "the computer picked paper"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
  if(player1 == 1 && comp1 == 3)
  {
    cout << "the computer picked scissors"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
  if(player1 == 1 && comp1 == 4)
  {
    cout << "the computer picked Stapler"<<endl;
    cout << "You win"<<endl;
    score++;
  }
  if(player1 == 1 && comp1 == 5)
  {
    cout << "the computer picked pencil"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
  if(player1 == 2 && comp1 == 1)
  {
    cout << "the computer picked rock"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
  if(player1 == 2 && comp1 == 3)
  {
    cout << "the computer picked scissors"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
  if(player1 == 2 && comp1 == 4)
  {
    cout << "the computer picked stapler"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
  if(player1 == 2 && comp1 == 5)
  {
    cout << "the computer picked pencil"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
  if(player1 == 3 && comp1 == 1)
  {
    cout << "the computer picked rock"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
  if(player1 == 3 && comp1 == 2)
  {
    cout << "the computer picked paper"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
  if(player1 == 3 && comp1 == 4)
  {
    cout << "the computer picked stapler"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
  if(player1 == 3 && comp1 == 5)
  {
    cout << "the computer picked pencil"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
  if(player1 == 4 && comp1 == 1)
  {
    cout << "the computer picked rock"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
  if(player1 == 4 && comp1 == 2)
  {
    cout << "the computer picked paper"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
  if(player1 == 4 && comp1 == 3)
  {
    cout << "the computer picked scissors"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
  if(player1 == 4 && comp1 == 5)
  {
    cout << "the computer picked pencil"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
  if(player1 == 5 && comp1 == 1)
  {
    cout << "the computer picked rock"<<endl;
    cout << "you win!"<<endl;
    score++;
  }
  if(player1 == 5 && comp1 == 2)
  {
    cout << "the computer picked paper"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
  if(player1 == 5 && comp1 == 3)
  {
    cout << "the computer picked scossors"<<endl;
    cout << "You win!"<<endl;
    score++;
  }
    if(player1 == 5 && comp1 == 4)
    {
    cout << "the computer picked stapler"<<endl;
    cout << "the computer wins"<<endl;
    score--;
  }
      cout<< "your courrent score is: "<< score<< endl;
}


int main()
{
  //this is a vecotr I made it doesn't do anything having in this code persay but it holds values
  vector<int>choices;

    cout << "Let's play Rock, Paper, Scissors, Stapler, Pencil!" << endl;
    do
    {
        cout << "Enter 1 for Rock, 2 for Paper, 3 for Scissors, 4 for Stapler, 5 for Pencil:" << endl;
        cin >> choice;
        switch(choice)
        {
        case 1:
           cout << "You chose Rock" << endl;
           game( 1 , computersBrain(0) );
           rockctr++;
	         break;
        case 2:
           cout << "You chose Paper" << endl;
           game( 2 , computersBrain(0) );
           paperctr++;
           break;

        case 3:
           cout << "You chose Scissors" << endl;
           game( 3 , computersBrain(0) );
           scissorsctr++;
           break;

        case 4:
           cout << "You chose Stapler" << endl;
           game( 4 , computersBrain(0) );
           staplerctr++;
           break;

        case 5:
           cout << "You chose Pencil" << endl;
           game( 5 , computersBrain(0) );
           pencilctr++;
           break;

        default:
           cout << choice << " is not a valid choice" << endl;
           break;
        }

     cout << "Would you like to play again (Y for yes, N for no)?" << endl;
     cin >> maybe;
     cout<< endl;
   } while (maybe == 'Y' || maybe == 'y');

  cout << "GG!! You picked rock:" << rockctr << ", paper:" << paperctr << ", scissors:" << scissorsctr << ", Stapler:" <<staplerctr << " and Pencil:" << pencilctr << endl;

  choices.push_back(rockctr);
  choices.push_back(paperctr);
  choices.push_back(scissorsctr);
  choices.push_back(staplerctr);
  choices.push_back(pencilctr);

  return(0);
}
