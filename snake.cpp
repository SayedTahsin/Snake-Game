#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

bool gameOver;
const int width=50;
const int height=25;
int x,y,fruitX,fruitY,score;
int tailX[100],tailY[100];
int nTail,spd=20;
enum eDirection {STOP=0,LEFT,RIGHT,UP,DOWN};
eDirection dir;

#include "setup.h"
#include "logic.h"
#include "draw.h"
#include "input.h"


int main()
{

    setup();
    while(!gameOver)
    {
        Draw();
        Input();
        Logic();
        if(gameOver)
        {
            system("cls");
            cout<<"\n\n\t\tGAMEOVER\n\n";
            cout<<"\t\tscore: "<<score<<endl;
            system("pause");
        }
        Sleep(spd);
    }
    return 0;
}
