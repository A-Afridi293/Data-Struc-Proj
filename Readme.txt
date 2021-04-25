*******************************************************
*  Name      : Ahmad Afridi         
*  Student ID: 107576832                
*  Class     :  CSC 2421           
*  HW#       :  Final Project                
*  Due Date  :  May. 10, 2019
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program of main cpp and actor cpp and movie cpp take input from 2 css files and turn the program into a data base for actors/actresses the awards the receive in a specific year and different movies 

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read data from an input file.  Then prints the functions to the console in which the user will decide whether to add a record, delete a record, modify a record, search a record by exact search, or partial search a record like a IMDB movie website
Name:  Node.h
   Contains the nodes for the entire program

Name:actor.cpp
   Contains the functions to add a record, delete a record, modify a record, search a record by exact search, or partial search a record for actors

Name: actor.h
   Contains the building blocks for actor cpp

Name:movie.cpp
   Contains the functions to add a record, delete a record, modify a record, search a record by exact search, or partial search a record for movies

Name: movie.h
   Contains the building blocks for movie cpp

Name: BtsTree.h
   Contains the nodes and the templates to construct the nodes and then put the nodes into a binary tree

Name: BtsTree.hpp
   Contains the templates to construct the binary tree

   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [AFRIDI2421Project2]

   Now you should see a directory named homework with the files:
        main.cpp
        BTsTree.h
	BTStree.hpp
	Actor.cpp
	Actor.h
	Movie.h
	Movie.cpp
        Readme.txt
	make file

2. Build the program.

    Change to the directory that contains the file by:
    % cd [HW7AFRIDI2421] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[tree]

4. Delete the obj files, executables, and core dump by
   %./make clean
