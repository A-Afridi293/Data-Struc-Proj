//
//  Actor.cpp
//  AFRIDI2421PROJECT2
//
//  Created by ahmad afridi on 5/1/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include "BSTree.h"
#include"Actor.h"
#include<string>
using namespace std;

void actor :: setActorTree(){
   // this->actorTree = actorTree;
}
actorData actor::addRecord()
{
    actorData actor;
    cout <<"Please give me the year (an int)" << endl;
    cin >> actor.year;
    
    cout <<"Please give me the award (a string )" << endl;
    cin.get();
    getline(cin, actor.award);
    
    cout <<"Please give me the winner 1 for a win 0 for loss(a int)" << endl;
    
    cin >> actor.winner;
    
    cout <<"Please give me the name of the actor (a string)" << endl;
    cin.get();
    getline(cin, actor.name);
    
    cout <<"Please give me the name of the film (a string)" << endl;
    cin.get();
    getline(cin, actor.film);
    
    return actor;
    //actorTree.addNode(actor.name, actor);
    //cout << "data is added" << endl;
}

void actor::showMenu()
{
    
    
}
string actor::modifyRecord(){
    
    string userInput;
    cout << "what record do you want to change" << endl;
    getline(cin, userInput);
    
    return userInput;
}
void actor::deleteRecord()
{
   
    
    
    
    
    
}
bool actor::findRecord(BSTree<actorData, string>& actorTree){
    
    //take input user
    int userColumnInput;
    cout << "what field do you want to search by string" << endl;
    cout << "1. Year" << endl;
    cout << "2. Award" << endl;
    cout << "3. winner" << endl;
    cout << "4. Name" << endl;
    cout << "5. Film" << endl;
    //----
    cin>> userColumnInput;
    //take input user
    string userInput;
    cout << "what record do you want to search by string" << endl;
    cin.get();
    getline(cin, userInput);
    
    vector<actorData> dataset1;
    actorTree.getData(dataset1);
    for (int i=0; i<dataset1.size(); i++)
    {
        //cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
        
        if(userColumnInput==1){
            if(stoi(userInput) == dataset1[i].year){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                return true;
            }
        }
        
        if(userColumnInput==2){
            if(userInput == dataset1[i].award){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                return true;
            }
        }
        
        if(userColumnInput==3){
            if(stoi(userInput) == dataset1[i].winner){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                return true;
            }
        }
        if(userColumnInput==4){
            if(userInput == dataset1[i].name){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                return true;
            }
        }
        if(userColumnInput==5){
            if(userInput == dataset1[i].film){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                return true;
            }
        }
        //5 for this
        
    }
    cout<< "Not found" << endl;
    return false;

    
    
    
}
void actor::sortRecord()
{
    
    
    
    
    
}

string actor::exportAct()
{
    string userfileInput;
    cout << "What is the file name" << endl;
    cin.get();
    getline(cin, userfileInput);
    
    
    
    return userfileInput;
}

void actor::findPartialRecord(BSTree<actorData, string>& actorTree){
    
    //take input user
    int userColumnInput;
    cout << "what field do you want to search by string" << endl;
    cout << "1. Year" << endl;
    cout << "2. Award" << endl;
    cout << "3. winner" << endl;
    cout << "4. Name" << endl;
    cout << "5. Film" << endl;
    //----
    cin>> userColumnInput;
    //take input user
    string userInput;
    cout << "what record do you want to search by stringfffff" << endl;
    cin.get();
    getline(cin, userInput);
    
    vector<actorData> dataset1;
    actorTree.getData(dataset1);
   // cout<< dataset1.size() <<endl;
    int count =0;
    for (int i=0; i<dataset1.size(); i++)
    {
        //cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
        
        if(userColumnInput==1){
            if(to_string(dataset1[i].year).find(userInput) !=string::npos){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                count++;
            }
        }
        
        if(userColumnInput==2){
            if(dataset1[i].award.find(userInput) !=string::npos){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                count++;
            }
        }
        
        if(userColumnInput==3){
            if(to_string(dataset1[i].winner).find(userInput) !=string::npos){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
            count++;
            }
        }
        if(userColumnInput==4){
           // cout<< userInput <<endl;
           // cout<< dataset1[i].name <<endl;
            if(dataset1[i].name.find(userInput) !=string::npos){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
            count++;
            }
        }
        if(userColumnInput==5){
            if(dataset1[i].film.find(userInput) !=string::npos){
                cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                count++;
            }
        }
        //5 for this
        
    }
    
    
    if (count ==0){
        cout << "Not found" << endl;
    }
    
    
    
}

string actor::findActor()
{
    string userfileInput;
    cout << "what record do you want to search by string" << endl;
    cin.get();
    getline(cin, userfileInput);
    
    
    
    return userfileInput;
    
    
}
