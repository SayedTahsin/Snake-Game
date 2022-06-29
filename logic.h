void Logic()
{
    int prevX=tailX[0];
    int prevY=tailY[0];
    int prev2x,prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for(int i=1; i<nTail; i++)
    {
        prev2x=tailX[i]; ///tail <-prevX <- prev2X
        prev2Y=tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2x;
        prevY=prev2Y;
    }
    switch(dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }
    // if(x>width || x<0 || y>height || y<0)
    //   gameOver=true;
    if(x>=width)
        x=0;
    else if(x<0)
        x=width-1;
    if(y>=height)
        y=0;
    else if(y<0)
        y=height-1;

    for(int i=0; i<nTail; i++)
    {
        if(tailX[i]==x && tailY[i]==y)
            gameOver=true;
    }
    if(x==fruitX && y==fruitY)
    {
        score++;
        if(spd!=0)spd--;
        fruitX=rand()%width;
        fruitY=rand()%height;
        nTail++;
    }
}
