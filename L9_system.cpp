#include<iostream>
#include<ctime>
using namespace std;

int random_cards(){
     int random_card = (rand() % 10) + 1; 
     srand(time(NULL));

     return random_card;
}






int main(){


    int dropcard;
    int added_card;
    int pcard1 = random_cards();
    int pcard2 = random_cards();
    int pcard3 = random_cards();
    int pcard_total = pcard1 + pcard2 ;



    int dcard1 = random_cards();
    int dcard2 = random_cards();
    int dcard3 = random_cards();
    int dcard_total = dcard1 + dcard2 ;


    cout<<"your cards is: "<<pcard1<<" "<<pcard2<<endl;


    while(true){
        cout<<"add card ?"<<endl;
        cout<<"[1] Yes "<<endl;
        cout<<"[2] No "<<endl;
        cin>>added_card;
        
        if(added_card == 1){
            cout<<"your cards is: "<<pcard1<<" "<<pcard2<<" "<<pcard3<<endl;
            pcard_total = pcard1 + pcard2 + pcard3;
        }
        else if(added_card == 2){
            cout<<"your cards is still: "<<pcard1<<" "<<pcard2<<endl;
            
        }

        cout<<"drop your cards?"<<endl;
        cout<<"[1] Yes "<<endl;
        cout<<"[2] No "<<endl;
        cin>>dropcard;

        if (dropcard == 1){
            break;
        }

    }


    cout<<"your cards is: "<<pcard1<<" "<<pcard2<<" "<<pcard3<<endl;
    cout<<"dealer cards is: "<<dcard1<<" "<<dcard2<<endl;
   
    
    

    if (pcard_total == 9){
        cout<<"Lucky 9!!";
    }
    else if (pcard_total >= dcard_total){
        cout<<"winner!!";
    }
    else{
        cout<<"lose";
    }
   

}