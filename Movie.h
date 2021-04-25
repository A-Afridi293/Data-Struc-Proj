//
//  Movie.h
//  AFRIDI2421PROJECT2
//
//  Created by ahmad afridi on 5/6/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#ifndef Movie_h
#define Movie_h
#include <string>
#include <iostream>
using namespace std;
class movie
{
private:
    
public:
    void setMovieTree();
    movieData addMovieRecord();
    void showMovieMenu();
    string modifyMovieRecord();
    void deleteMovieRecord();
    bool findMovieRecord(BSTree<movieData, string>& movieTree);
    void findMoviePartialRecord(BSTree<movieData, string>& movieTree);
    string exportMovie();
    string findMovie();
    
    
    
};

#endif /* Movie_h */
