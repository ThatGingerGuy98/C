#include <stdio.h>
#include <string.h>
int main()
{
  char myGuess[255];
  printf("Please input the phrase to be brute forced: "); gets (myGuess);
  char myGuessed[strlen(myGuess)+1];
  int totalGuesses = 0;
  int j = 0;
  char k;
  for (int i = strlen(myGuess); j < i; j++)
  {
    for (k = ' '; k; k++)
    {
      if (myGuess[j] == k)
      {
        printf("Hit!  %s %c\n",myGuessed,k);
        myGuessed[j] = k;
        myGuessed[j+1] = '\0';
        k = 0;
        totalGuesses++;
        break;
      }
      else
      {
        printf("Miss! %s %c\n",myGuessed,k);
        totalGuesses++;
      }
    }
  }
  printf("The phrase is: %s\nTotal Guesses: %i",myGuessed,totalGuesses);
  return 0;
}
//Inspired by https://preview.redd.it/qk435uksis191.gif?format=mp4&s=bd12170d0ac6708538bc581aa46f9150550c6b2c
