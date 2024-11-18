#include "main.h"
#include <iostream>
using namespace std;


void pendu_game(const char* word)
{
    char letter;
    int num_trials = 0,g = 0,len = length(word),a = 0,b[len] = {};
    bool h,q;
    int pendu[10][10] = {
                        {0,0,0,1,1,1,1,0,0,0},
                        {0,0,0,1,0,0,1,0,0,0},
                        {0,0,0,1,1,1,1,0,0,0},
                        {0,1,1,1,1,1,1,1,1,0},
                        {1,0,0,0,1,1,0,0,0,1},
                        {1,0,0,0,1,1,0,0,0,1},
                        {0,0,0,0,1,1,0,0,0,0},
                        {0,0,0,1,0,0,1,0,0,0},
                        {0,0,1,0,0,0,0,1,0,0},
                        {1,1,0,0,0,0,0,0,1,1}
                        };

    int pendu_head[3][10] = {
                            {0,0,0,1,1,1,1,0,0,0},
                            {0,0,0,1,0,0,1,0,0,0},
                            {0,0,0,1,1,1,1,0,0,0}
                            };
   int pendu_body[7][10] = {
                           {0,0,0,1,1,1,1,0,0,0},
                           {0,0,0,1,0,0,1,0,0,0},
                           {0,0,0,1,1,1,1,0,0,0},
                           {0,0,0,0,1,1,0,0,0,0},
                           {0,0,0,0,1,1,0,0,0,0},
                           {0,0,0,0,1,1,0,0,0,0},
                           {0,0,0,0,1,1,0,0,0,0}
                           };
    int pendu_hand1[7][10] = {
                           {0,0,0,1,1,1,1,0,0,0},
                           {0,0,0,1,0,0,1,0,0,0},
                           {0,0,0,1,1,1,1,0,0,0},
                           {0,1,1,1,1,1,0,0,0,0},
                           {1,0,0,0,1,1,0,0,0,0},
                           {1,0,0,0,1,1,0,0,0,0},
                           {0,0,0,0,1,1,0,0,0,0}
                           };
    int pendu_hand12[7][10] = {
                           {0,0,0,1,1,1,1,0,0,0},
                           {0,0,0,1,0,0,1,0,0,0},
                           {0,0,0,1,1,1,1,0,0,0},
                           {0,1,1,1,1,1,1,1,1,0},
                           {1,0,0,0,1,1,0,0,0,1},
                           {1,0,0,0,1,1,0,0,0,1},
                           {0,0,0,0,1,1,0,0,0,0}
                           };
    int pendu_leg1[10][10] = {
                        {0,0,0,1,1,1,1,0,0,0},
                        {0,0,0,1,0,0,1,0,0,0},
                        {0,0,0,1,1,1,1,0,0,0},
                        {0,1,1,1,1,1,1,1,1,0},
                        {1,0,0,0,1,1,0,0,0,1},
                        {1,0,0,0,1,1,0,0,0,1},
                        {0,0,0,0,1,1,0,0,0,0},
                        {0,0,0,0,0,0,1,0,0,0},
                        {0,0,0,0,0,0,0,1,0,0},
                        {0,0,0,0,0,0,0,0,1,1}
                        };
    for(int i = 0; i < len; i++)  cout << "_" << " ";
    cout << endl;
    do
    {
        h = false;
        q = true;
        cout<< "Enter a letter" << endl;
        cin >> letter;
        for(int i = 0; word[i] != '\0'; i++)
        {
            if(word[i] == letter) 
            {
                b[i] = 1;
                h = true;
            }
        }
        if(!h) g++;
        if(g == 1)
        {
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    if(pendu_head[i][j] == 1) cout << "*";
                    else cout << " ";
                }
                cout <<  endl;
            }
        }
        else if (g == 2)
        {
            for(int i = 0; i < 7; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    if(pendu_body[i][j] == 1) cout << "*";
                    else cout << " ";
                }
                cout <<  endl;
            }   
        }
        else if (g == 3)
        {
            for(int i = 0; i < 7; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    if(pendu_hand1[i][j] == 1) cout << "*";
                    else cout << " ";
                }
                cout <<  endl;
            } 
        }
        else if ( g == 4)
        {
            for(int i = 0; i < 7; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    if(pendu_hand12[i][j] == 1) cout << "*";
                    else cout << " ";
                }
                cout <<  endl;
            }
        }
        else if (g == 5)
        {
            for(int i = 0; i < 10; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    if(pendu_leg1[i][j] == 1) cout << "*";
                    else cout << " ";
                }
                cout <<  endl;
            }
        }
        else if (g == 6)
        {
            for(int i = 0; i < 10; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    if(pendu[i][j] == 1) cout << "*";
                    else cout << " ";
                }
                cout <<  endl;
            }
        }
        cout << endl << endl; 
        for(int i = 0; word[i] != '\0'; i++)
        {
            if(b[i] == 1) cout << word[i] << " ";
            else cout << "_" << " ";
        }
        for(int i = 0; i < len; i++)
        {
            if(b[i] != 1) q = false;
        }
        cout << endl;
        num_trials++;
        a++;
    }  
    while(num_trials <= 20 && g < 6 && !q);

    if(g == 6 || !q) cout << "you lose" ;
    else cout << "you won";
}
