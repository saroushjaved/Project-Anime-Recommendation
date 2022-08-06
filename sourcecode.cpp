#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;


int main(void){

    string name = "temp";
    string password = "temp";
    string login_name = "temp_1";
    string login_password = "temp_2";
    int input;
    string genre_in;
    bool air_in;
    int counter = 0;
    string output_name[2];
    int output_score[2];
    bool flag = false;

     struct {
        string name;
        string genre;
        int score;
        bool air;
    } anime[4][4];


    struct {
        string name;
        string genre;
        int score;
        bool air;
    } database[4][4];

    // name
    database[0]->name = "aot";
    database[1]->name = "death note";
    database[2]->name = "hero academia";
    database[3]->name = "haikyu";
    database[4]->name = "beyblade";
    // genre
    database[0]->genre = "action";
    database[1]->genre = "thrill";
    database[2]->genre = "action";
    database[3]->genre = "thrill";
    database[4]->genre = "action";
    // score 
    database[0]->score = 10;
    database[1]->score = 8;
    database[2]->score = 10;
    database[3]->score = 7;
    database[4]->score = 5;
    //air 
    database[0]->air = true;
    database[1]->air = false;
    database[2]->air = true;
    database[3]->air = true;
    database[5]->air = false;







    cout << "Welcome to anime recommednation engine !" << endl;
    cout << "Please register below to continue !" << endl;
    cout << endl;
    cout<<"Enter a user name: "<<flush;
    cin >> name;
    cout<< "Enter a password "<<flush;
    cin>>password;

    cout << " Thank you for registering !" << endl;
    cout << "Now you have to login !" <<endl;
    
    do{
        cout<<"username: "<< flush;
        cin>>login_name;
        cout<<"password: "<< flush;
        cin>>login_password;

        if((password==login_password) && (name==login_name)){
            cout<<"thank you logging in"<<endl;
            break;
        }
        else {
            cout<<"Please try again with correct information"<<endl;
        }
    } while (password!=login_password);





    cout<<"Welcome to the recommendtion engine!"<<endl;
    cout<<"what genre of anime you like ?" <<endl;
    cout<<"1- Action 2- Thrill (Enter 1 or 2): "<<endl;
    cin>>input;

    if (input == 1){
            genre_in = "action";
            
        }
    else if(input == 2){
            genre_in = "thrill";
        }

    cout<<"Do you want it to be on air ?" <<endl;
    cout<<"1- Yes 2- No (Enter 1 or 2): "<<endl;
    cin >> input;
    if (input == 1){
            air_in = true;
        
            
        }
    else if (input == 2){
            air_in = false;
          
        }


     for(int i = 0; i < 4 ; i++){
        if(database[i]->genre==genre_in){
            if(database[i]->air==air_in){
                output_name[counter] = database[i]->name;
                output_score[counter] = database[i]->score;
                counter++;
            }
        }
    }

    
    for(int j = 0; j < 2 ;j++){
        cout<<"Recommendation " << j << ": "<< output_name[j] << " Score: " << output_score[j]<<endl;
    }

   

    return 0;
}