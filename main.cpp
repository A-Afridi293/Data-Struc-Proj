//
//  main.cpp
//  AFRIDI2421PROJECT2
//
//  Created by ahmad afridi on 4/18/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "BSTree.h"
#include "Actor.h"
#include "Movie.h"
#include <vector>
using namespace std;
int main() {
    
    ifstream infile;
    infile.open("actor-actress.csv");
    string word,line;
    actorData tempData;
    
    BSTree<actorData, string> *actorTree = new BSTree<actorData, string>;
    BSTree<movieData, string> *movieTree = new BSTree<movieData, string>;
    
    
    
    getline (infile, word);
    while (getline(infile,line))
    {
        
        stringstream s(line);
        getline(s,word , ','); tempData.year = stoi(word);
        getline(s,word , ','); tempData.award = word;
        getline(s,word , ','); tempData.winner = stoi(word);
        getline(s,word , ','); tempData.name=word;
        getline(s,word , ','); tempData.film = word;
        
        // to_string(tempData.year);
        // stringstream(tempData.year) >> temp12;
        actorTree->addNode(tempData.name, tempData);
        //actorTree->addNode(tempData.year,tempData);
        //actorTree->addNode(tempData.film, tempData);
        
    }
    //R1/R2 Reading ActorCsv
    ifstream movieFile;
    movieFile.open("pictures.csv");
    movieData movieTempdata;
    getline (movieFile, word);
    while (getline(movieFile,line))
    {
        //name,year,nominations,rating,duration,genre1,genre2,release,metacritic,synopsis
        stringstream s(line);
        getline(s,word , ','); movieTempdata.name = word;
        getline(s,word , ','); movieTempdata.year = stoi(word);
        getline(s,word , ','); movieTempdata.nominations = stoi(word);
        getline(s,word , ','); movieTempdata.rating=stod(word);
        getline(s,word , ','); movieTempdata.duration = stoi(word);
        getline(s,word , ','); movieTempdata.genre1 = word;
        getline(s,word , ','); movieTempdata.genre2 = word;
        getline(s,word , ','); movieTempdata.release = word;
        getline(s,word , ','); movieTempdata.metacritic= stoi(word);
        getline(s,word , ','); movieTempdata.synopsis = word;
        
        // to_string(tempData.year);
        // stringstream(tempData.year) >> temp12;
        movieTree->addNode(movieTempdata.name, movieTempdata);
        //actorTree->addNode(tempData.year,tempData);
        //actorTree->addNode(tempData.film, tempData);
        
    }
    
    cout << "Tree creation successfully done" << endl;
    
    int menuInput;
    bool menuDone = false;
    while (!menuDone){
        cout << "What Option would you like? (Enter Numbers 1-3)" << endl;
        cout << "1. Choose movie" << endl;
        cout << "2. Exit" << endl;
        
        bool subDone = false;
        
        cin >> menuInput;
        switch (menuInput) {
            case 1:{
                
                while (!subDone){
                    cout << "Select the Movie" << endl;
                    cout << "1. Actor"<< endl;
                    cout << "2. Movie"<< endl;
                    cout << "3. Go back to main menu"<< endl;
                    
                    cin >> menuInput;
                    switch (menuInput) {
                        case 1:{
                            actor myActor;
                            bool subsubdone = false;
                            while(!subsubdone){
                                cout <<"Select the operation you want to do " << endl;
                                cout << "1. Add a record" << endl;
                                cout << "2. Search a Exact Search" << endl;
                                cout << "3. Search a partial search" << endl;
                                cout << "4. Search a record and modify" << endl;
                                cout << "5. Search a record and delete" << endl;
                                cout << "6. sort" << endl;
                                cout << "7. Export" << endl;
                                cout << "8. Go back to menu" << endl;
                                
                                cin >> menuInput;
                                
                                switch (menuInput) {
                                    case 1:{
                                        actorData data = myActor.addRecord();
                                        actorTree->addNode(data.name, data);
                                        cout<< "Data is added" << endl;
                                        break;
                                    }
                                        
                                    case 2:{
                                        bool found =  myActor.findRecord(*actorTree);
                                        
                                        
                                        
                                        
                                        break;
                                    }
                                    case 3:{
                                         myActor.findPartialRecord(*actorTree);
                                        
                                        
                                        
                                        
                                        break;
                                    }
                                    case 4:{
                                        
                                        string searchString = myActor.findActor();
                                        string change = myActor.modifyRecord();
                                        cout << "change " << change <<endl;
                                        
                                        actorTree->modifyNodeKey(searchString, change);
                                       
                                        
                                        break;
                                    }
                                    case 5:{
                                        
                                        string searchString = myActor.findActor();
                                        actorTree->deleteNode(searchString);
                                        
                                         break;
                                    }
                                    case 6:{
                                        vector<actorData> dataset1;
                                        actorTree->getData(dataset1);
                                        
                                        for (int i=0; i<dataset1.size(); i++)
                                        {
                                            cout << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                                        }
                                        
                                        break;
                                    }
                                    case 7:{
                                        
                                        string fielname = myActor.exportAct();
                                        vector<actorData> dataset1;
                                        actorTree->getData(dataset1);
                                        ofstream outfile;
                                        outfile.open(fielname);
                                        for (int i=0; i<dataset1.size(); i++)
                                        {
                                            outfile << dataset1[i].year << "," << dataset1[i].award << "," << dataset1[i].winner << "," << dataset1[i].name << "," << dataset1[i].film << endl;
                                        }
                                        outfile.close();
                                        
                                        
                                        break;
                                    }
                                        
                                    default:{
                                        subsubdone = true;
                                        break;
                                    }
                                        
                                }
                            }
                            break;
                        }
                        case 2:
                        {
                            movie myMovie;
                            bool subsubdone2 = false;
                            while(!subsubdone2){
                                cout <<"Select the operation you want to do for Movie " << endl;
                                cout << "1. Add a record" << endl;
                                cout << "2. Search a exact" << endl;
                                cout << "3. Search a partial" << endl;
                                cout << "4. Search a record and modify" << endl;
                                cout << "5. Search a record and delete" << endl;
                                cout << "6. sort" << endl;
                                cout << "7. Export" << endl;
                                cout << "8. Go back to menu" << endl;
                                
                                cin >> menuInput;
                                
                                switch (menuInput) {
                                    case 1:{
                                        movieData data = myMovie.addMovieRecord();
                                        movieTree->addNode(data.name, data);
                                        cout<< "Data is added" << endl;
                                        break;
                                    }
                                        
                                    case 2:{
                                        bool found = myMovie.findMovieRecord(*movieTree);
                                        //actor a;
                                        //a.findRecord();
                                        
                                
                                        
                                        break;
                                    }
                                    case 3:{
                                        
                                        myMovie.findMoviePartialRecord(*movieTree);
                                        //actor a;
                                        //a.findRecord();
                                        
                                        
                                        
                                        break;
                                    }
                                    case 4:{
                                        
                                        string searchString = myMovie.findMovie();
                                        string change = myMovie.modifyMovieRecord();
                                        cout << "change " << change <<endl;
                                        movieTree->modifyNodeKey(searchString, change);
                                        
                                        break;
                                    }
                                    case 5:{
                                        
                                        string searchString = myMovie.findMovie();
                                        movieTree->deleteNode(searchString);
                                        
                                        break;
                                    }
                                    case 6:{
                                        vector<movieData> dataset1;
                                        movieTree->getData(dataset1);
                                        
                                        for (int i=0; i<dataset1.size(); i++)
                                        {
                                            cout  << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< "," << dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                                        }
                                        break;
                                    }
                                    case 7:{
                                        string filename = myMovie.exportMovie();
                                        vector<movieData> dataset1;
                                        movieTree->getData(dataset1);
                                        ofstream outfile;
                                        outfile.open(filename);
                                        for (int i=0; i<dataset1.size(); i++)
                                        {
                                            outfile << dataset1[i].name << "," << dataset1[i].year << "," << dataset1[i].nominations << "," << dataset1[i].rating << "," << dataset1[i].duration<< dataset1[i].genre1 << "," << dataset1[i].genre2 << "," << dataset1[i].release << "," << dataset1[i].metacritic << "," << dataset1[i].synopsis << endl;
                                        }
                                        outfile.close();
                                        break;
                                    }
                                        
                                    default:{
                                        subsubdone2 = true;
                                        break;
                                    }
                                        
                                }
                            }
                            break;
                            
                            
                        }
                        
                        default:{
                            subDone = true;
                            break;
                        }
                    }
                }
                break;
            }
            case 2:{
                cout << "Exit" << endl;
                menuDone = true;
                break;
            }
            default:{
                cout<< "Wrong Input." <<endl;
                break;
            }
        }
    }
    
    /*
     
     */
    return 0;
}
