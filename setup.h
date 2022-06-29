void setup()
{
    srand(time(NULL));
    gameOver=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    fruitX=rand()%width;
    fruitY=rand()%height;
    score=0;
}
