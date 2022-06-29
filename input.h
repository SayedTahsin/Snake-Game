void Input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
        case 'a':
            dir=LEFT;
            break;
        case 'd':
            dir=RIGHT;
            break;
        case 'w':
            dir=UP;
            break;
        case 's':
            dir=DOWN;
            break;
        case 'f':
            dir=STOP;
            break;
        case 'x':
            gameOver=true;
            break;
        }
    }
}

