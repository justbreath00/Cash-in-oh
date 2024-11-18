#include <iostream>
#include <cstdlib>
#include "messages.cpp"
using namespace std;



void table(){
    cout<<"         _________________________________________     "<<endl;
    cout<<"        |                                         |    "<<endl;
    cout<<"        |                                         |    "<<endl;
    cout<<"        |                                         |    "<<endl;
    cout<<"        |                                         |    "<<endl;
    cout<<"        |                                         |    "<<endl;
    cout<<"        |                                         |    "<<endl;
    cout<<"        |                                         |    "<<endl;
    cout<<"        |                                         |    "<<endl;
    cout<<"        |_________________________________________|     "<<endl;
    cout<<"             "<<endl;

}

void cards(){
  
     cout<<"                                     "<<endl;
    cout<<"         _______      _______         "<<endl;
    cout<<"        |       |    |       |         "<<endl;
    cout<<"        |       |    |       |          "<<endl;
    cout<<"        |       |    |       |           "<<endl;
    cout<<"        |_______|    |_______|            "<<endl;
    cout<<"                                           "<<endl;
  }


void add_card(){

    cout<<"                                                 "<<endl;
    cout<<"         _______      _______       _______     "<<endl;
    cout<<"        |       |    |       |     |       |     "<<endl;
    cout<<"        |       |    |       |     |       |     "<<endl;
    cout<<"        |       |    |       |     |       |     "<<endl;
    cout<<"        |_______|    |_______|     |_______|      "<<endl;
    cout<<"                                                 "<<endl;

}



int lucky9_main(){
    
    int lucky9_score;
    int card;
    int chip=1000;
    int play = 1;
    int pcard1, pcard2, pcard3;
    int dcard1, dcard2, dcard3;
    
    

    

    while (play == 1)
    {
        system("cls");
        cout<<"play";
        
        cards();


        cout<<"add one more card?"<<endl;
        cout<<"[1] Yes "<<endl;
        cout<<"[2] No "<<endl;
        cin>>card;

        
        if(card == 1){
            add_card();
        }


         int player_card = pcard1 + pcard2 + pcard3;
         int dealer_card = dcard1 + dcard2 + dcard3;

        if( player_card == 9){
            lucky9();

        }
        else if(player_card >=  dealer_card ){
            win();
        }
        else{
            loss();
        }

        cout<<"play again?"<<endl;
        cout<<"[1] Yes "<<endl;
        cout<<"[2] No "<<endl;
        cin>>play;

        if (play == 2){
            system("cls");
            break;
            
            return lucky9_score;
        }

         

    }


}