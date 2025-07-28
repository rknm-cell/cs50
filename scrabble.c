#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int score(string word);
void winner(int player1_score, int player2_score);

int main(void)
{
    //while loop
    while(true)
    {
        printf("Scrabble \n");
        string player1 = get_string("Player 1 word: ");
        printf("\n");
        string player2 = get_string("Player 2 word: ");
        printf("\n");
        int player1score = score(player1);
        int player2score = score(player2);
        winner(player1score, player2score);

    }

}

int score(char *word)
{
    //declare totalscore variable
    int totalscore = 0;
    //for loop iterating through letters of word
    for (int i = 0, length = strlen(word); i < length; i++)
    {
        char letter = tolower(word[i]);
        if (
            letter == 'a' ||
            letter == 'e' ||
            letter == 'i' ||
            letter == 'l' ||
            letter == 'n' ||
            letter == 'o' ||
            letter == 'r' ||
            letter == 's' ||
            letter == 't' ||
            letter == 'u'
        )
        {
            totalscore += 1;
        }
        else if (
            letter == 'd' ||
            letter == 'g'
        )
        {
            totalscore += 2;
        }
        else if (
            letter == 'b' ||
            letter == 'c' ||
            letter == 'm' ||
            letter == 'p'
        )
        {
            totalscore += 3;
        }
        else if (
            letter == 'f' ||
            letter == 'h' ||
            letter == 'v' ||
            letter == 'w' ||
            letter == 'y'
        )
        {
            totalscore += 4;
        }
        else if (
            letter == 'k'
        )
        {
            totalscore += 5;
        }
        else if (
            letter == 'j' ||
            letter == 'x'
        )
        {
            totalscore += 8;
        }
        else if (
            letter == 'q' ||
            letter == 'z'
        )
        {
            totalscore += 10;
        }
        //calculate each letter
        //AEILNORSTU == 1 point
        //DG == 2 points
        //BCMP == 3 points
        //FHVWY == 4 points
        //K == 5 points
        //JX == 8 points
        //QZ == 10 points
    }
        //return totalscore
    return totalscore;
}

    //create function comparing player scores to see who wins
void winner(int player1, int player2)
{
    if(player1 > player2)
    {
        printf("Player 1 wins! \n");
    }
    else if (player1 < player2)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("It's a tie! \n");
    }
}
