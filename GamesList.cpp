#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string input;

    vector<string>::const_iterator iter;

    cout << "Your Favorite Video Games: \n";
    vector<string> games;
    games.push_back("God of War");
    games.push_back("Final Fantasy 16");
    games.push_back("Yakuza: Like A Dragon");
    games.push_back("Final Fantasy 7: Ribirth");

    for (iter = games.begin(); iter != games.end(); ++iter)
    {
        cout << *iter << endl;
    }

    //prompt user to add game 

    cout << "Would you like to add a game to the list? Y/N \n" << endl;
    getline(cin, input); 
    
    if (input == "Y"){

        cout << "Please enter the name of the game: \n" << endl;
        getline(cin, input);
        games.insert(games.begin(), input);
    }
    else {

        cout << "Would you like remove a game from the list? Y/N? \n" << endl;
        getline(cin, input);
        if(input == "Y"){
            cout << "Please enter the name of the game you would like to remove: " << endl;
            getline(cin, input);
            
            auto obj = find(games.begin(), games.end(), input);

            if (obj != games.end()){

                games.erase(obj);
                cout << input << " is no longer a favorite game. \n" << endl;
            } else {

                cout << "Could not locate " << input << " in the list" << endl;
            }

        }
    }

    cout << "Current list is: \n";
    for (iter = games.begin(); iter != games.end(); ++iter)
    {
        cout << *iter << endl;
    }

    return 0;

}