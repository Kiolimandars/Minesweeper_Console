#include <iostream>
#include "headers/demineurboard.hpp"


using namespace std;
int main()
{
    DemineurBoard B;
    int i,j;
    char c;

    B.create();
    B.affichei();
    B.affiche();
    do{
        cout<<"Choose a tile to play: "<<endl;
        cin>>i;
        cin>>j;
        if (B[i][j].isBomb())

            cout<<"YOU FAILED!! ya bhim(a) "<<endl;

        else{
                if (B[i][j].getNum()==0){
                    B.Ines(B[i][j]);
                }
                else
                    B[i][j].setPlayed();
            }

        B.affiche();
        cout<<"Continue? ";
        cin>>c;
    }while(c!='q');
return 0;
}
