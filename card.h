
#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

using namespace std;

class card
{
    public:
        card();
        card( int x , string y);
         string toshort (string o);
    enum suitt {CLUB, DIAMOND, HEART, SPADE};



    private:
         int ranks ;
         string suits;
};

#endif // CARD_H
