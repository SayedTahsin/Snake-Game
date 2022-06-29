void Draw()
{
    system("cls");
    cout<<"\nscore: "<<score<<endl;
    for(int i=0; i<=width+1; i++)
        cout<<"*";
    cout<<endl;

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            if(j==0)
                cout<<"*";
            if(i==y &&j==x)
                cout<<"O";
            else if(i==fruitY && j==fruitX)
                cout<<'F';
            else
            {
                bool print =false;
                for(int k=0; k<nTail; k++)
                {
                    if(tailX[k]==j && tailY[k]==i)
                    {
                        cout<<'o';
                        print=true;
                    }
                }
                if(!print)
                    cout<<' ';
            }
            if(j==width-1)
                cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<=width+1; i++)
        cout<<"*";
    cout<<endl;

}
