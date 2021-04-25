//
//  Movie.cpp
//  AFRIDI2421PROJECT2
//
//  Created by ahmad afridi on 5/1/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include "BSTree.h"
#include"Movie.h"
#include<string>
using namespace std;
void movie:: setMovieTree(){
    // this->actorTree = actorTree;
}
movieData movie:: addMovieRecord()
{
    movieData movie;
    cout <<"Please give me the name (a string)" << endl;
    cin.get();
    getline(cin, movie.name);
    
    cout <<"Please give me the year (an int)" << endl;
    cin>> movie.year;
    
    cout <<"Please give me the number of nominations (an int)" << endl;
    cin >> movie.nominations;
    
    cout <<"Please give me the rating (a double)" << endl;
    cin >> movie.rating;
    
    cout <<"Please give me the duration (an int)" << endl;
    cin >> movie.duration;
    
    cout <<"Please give me genre 1 (a string)" << endl;
    cin.get();
    getline(cin, movie.genre1);;
    
    cout <<"Please give genre 2 (a string)" << endl;

    getline(cin, movie.genre2);
    
    cout <<"Please give me the month of the release (a String)" << endl;
    getline(cin, movie.release);
    
    cout <<"Please give me the metacritic (an int)" << endl;
    cin>>movie.metacritic;
    
    cout <<"Please give me the synopsis (a string)" << endl;
    cin.get();
   getline(cin, movie.synopsis);
    
    
    return movie;
    //actorTree.addNode(actor.name, actor);
    //cout << "data is added" << endl;
}

void movie::showMovieMenu()
{
    
    
}
string movie::modifyMovieRecord(){
    
    string userInput;
    cout << "what record do you want to change" << endl;
    getline(cin, userInput);
    
    return userInput;
}
void movie::deleteMovieRecord()
{
    
    
    
    
    
    
}
bool movie::findMovieRecord(BSTree<movieData, string>& movieTree){
    //take input user
    int userColumnInput;
    cout << "what field do you want to search by string" << endl;
    cout << "1. name" << endl;
    cout << "2. year" << endl;
    cout << "3. nominations" << endl;
    cout << "4. rating" << endl;
    cout << "5. duration" << endl;
    cout << "6. genre1" << endl;
    cout << "7. genre2" << endl;
    cout << "8. release" << endl;
    cout << "9. metacritic" << endl;
    cout << "10. synopsis" << endl;
    //----
    cin>> userColumnInput;
    //take input user
    string userInput;
    cout << "what record do you want to search by string" << endl;
    cin.get();
    getline(cin, userInput);
    
    vector<movieData> dataset1;
    movieTree.getData(dataset1);
    for (int i=0; i<dataset1.size(); i++)
    {
        //cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
        
        if(userColumnInput==1){
            if(userInput == dataset1[i].name){
                 cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        
        if(userColumnInput==2){
            if(stoi(userInput) == dataset1[i].year){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        
        if(userColumnInput==3){
            if(stoi(userInput) == dataset1[i].nominations){
                 cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        if(userColumnInput==4){
            if(stoi(userInput) == dataset1[i].rating){
                 cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        if(userColumnInput==5){
            if(stoi(userInput) == dataset1[i].duration){
                 cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        
        if(userColumnInput==6){
            if(userInput == dataset1[i].genre1){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        if(userColumnInput==7){
            if(userInput == dataset1[i].genre2){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        if(userColumnInput==8){
            if(userInput == dataset1[i].release){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        if(userColumnInput==9){
            if(stoi(userInput) == dataset1[i].metacritic){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        if(userColumnInput==10){
            if(userInput == dataset1[i].synopsis){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                return true;
            }
        }
        //5 for this
        
    }
    cout<< "Not found" << endl;
    return false;
}




void movie::findMoviePartialRecord(BSTree<movieData, string>& movieTree){
    //take input user
    int counter = 0;
    int userColumnInput;
    cout << "what field do you want to search by string" << endl;
    cout << "1. name" << endl;
    cout << "2. year" << endl;
    cout << "3. nominations" << endl;
    cout << "4. rating" << endl;
    cout << "5. duration" << endl;
    cout << "6. genre1" << endl;
    cout << "7. genre2" << endl;
    cout << "8. release" << endl;
    cout << "9. metacritic" << endl;
    cout << "10. synopsis" << endl;
    //----
    cin>> userColumnInput;
    //take input user
    string userInput;
    cout << "what record do you want to search by string" << endl;
    cin.get();
    getline(cin, userInput);
    
    vector<movieData> dataset1;
    movieTree.getData(dataset1);
    for (int i=0; i<dataset1.size(); i++)
    {
        //cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
        
        if(userColumnInput==1){
            if( dataset1[i].name.find(userInput) !=string::npos ){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                counter++;
            }
        }
        
        if(userColumnInput==2){
            if(to_string(dataset1[i].year).find(userInput) !=string::npos){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                counter++;
            }
        }
        
        if(userColumnInput==3){
            if(to_string(dataset1[i].nominations).find(userInput) !=string::npos){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
              counter++;
            }
        }
        if(userColumnInput==4){
            if(to_string(dataset1[i].rating).find(userInput) !=string::npos){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
               counter++;
            }
        }
        if(userColumnInput==5){
            if(to_string(dataset1[i].duration).find(userInput) !=string::npos){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                counter++;
            }
        }
        
        if(userColumnInput==6){
            if(dataset1[i].genre1.find(userInput) !=string::npos ){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
               counter++;
            }
        }
        if(userColumnInput==7){
            if(dataset1[i].genre2.find(userInput) !=string::npos){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                counter++;
            }
        }
        if(userColumnInput==8){
            if(dataset1[i].release.find(userInput) !=string::npos){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                counter++;
            }
        }
        if(userColumnInput==9){
            if(to_string(dataset1[i].metacritic).find(userInput) !=string::npos){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                counter++;
                
            }
        }
        if(userColumnInput==10){
            if(dataset1[i].synopsis.find(userInput) !=string::npos){
                cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                counter++;
            
            }
        }
        //5 for this
        
    }
    if (counter == 0)
    {
        
        
    }

}



string movie::exportMovie()
{
    string userfileInput;
    cout << "What is the file name" << endl;
    cin.get();
    getline(cin, userfileInput);
    
    
    
    return userfileInput;
}

string movie:: findMovie()
{
    string userfileInput;
    cout << "what record do you want to search by string" << endl;
    cin.get();
    getline(cin, userfileInput);
    
    
    
    return userfileInput;
    
}
