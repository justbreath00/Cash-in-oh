#include <iostream>
#include "lucky9.cpp"
#include "player.cpp"
using namespace std;


int main(){
    
    int score;
    int game_mode;
   
    player();

    while ( bool null_loop = true) {

    cout<<"your current score: "<<score<<endl;
    br();
    intro();
    cin>>game_mode;

    if(game_mode==1){
        lucky9_main();
    }

    }
    
   

    return 0;
}