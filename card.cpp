#include <cstring>
#include "card.h"
enum suitt {CLUB, DIAMOND, HEART, SPADE};

card::card()
{
        suitt  suit = CLUB ;
        int  ACE =0, KING =13;
        char *arr[10] = { "C", "D", "H", "S"};
        for ( suitt suit = CLUB ; suit < SPADE ; suit = suitt(suit + 1)  )
        {
            for (int rankk = ACE ; rankk < KING ; rankk++ )
            {

                for (int i = 1 ; i <= 13 ; i++)
                {
                    if (i==1)
                    {
                        cout <<  i << "A" << " ";

                    }
                    else if (i==11)
                    {
                        cout << i << "Q" <<" ";
                    }
                    else if (i==12)
                    {
                        cout << i <<"J" << " ";
                    }
                    else if (i==13)
                    {
                        cout <<  i  <<"K"<< " ";
                    }
                    else
                    {
                        cout <<  i << arr[rankk] << " ";
                    }



                }
                cout << endl;
            }
            break;
        }
    }

card::card(int x ,string y)
{
    ranks = x ;
    suits = y ;
    cout << " your rank " << ranks <<endl;
    cout  << "your suits " << suits <<endl;

}
string card::toshort(string o )
{
    return suits;
}
