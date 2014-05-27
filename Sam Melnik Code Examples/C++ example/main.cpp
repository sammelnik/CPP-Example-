//
//  main.cpp
//  CS474proj5
//
//  Created by Sam Melnik on 11/30/13.
//  Copyright (c) 2013 Sam Melnik. All rights reserved.
//

#include <iostream>
#include <string>
#include <locale>
#include "Ops.h"

//using namespace std;

/*
 *Instructions on how to enter data
 */
void help(){
    std::cout<<"R-RESET PROBLEM"<<std::endl;
    std::cout<<"X-Enter Value for X"<<std::endl;
    std::cout<<"Y-Enter Value for Y"<<std::endl;
    std::cout<<"Z-Enter Value for Z"<<std::endl;
    std::cout<<"S-Step By Step execution"<<std::endl;
    std::cout<<"E-Complete Execution"<<std::endl;
    std::cout<<"D-Display current sequence"<<std::endl;
    std::cout<<"Q-QUIT"<<std::endl;
    std::cout<<std::endl;
}

void userInput(){
    Ops test = *new Ops();
    std::string findWord = "";  //var for to hold the word user enters
    while (true) {          //loop for user to enter input.
        std::string command; //var to hold user input
        std::cout<<"Enter new command: ";
        std::cin>>command;//read in the user command
        if ((command.compare("R") == 0)||(command.compare("r") == 0)){
            std::cout<<"Refreshing"<<std::endl;
            test.clear(); //clear items
        }else if ((command.compare("X") == 0)||(command.compare("x") == 0)){
            std::cout<<"Enter a value for x:";
            std::cin.ignore(500,'\n');//ignore previous input
            int x;
            std::cin>>x; //get value of x
            test.X=x;
        }else if ((command.compare("Y") == 0)||(command.compare("y") == 0)){
            std::cout<<"Enter a value for y:";
            std::cin.ignore(500,'\n');//ignore previous input
            int y;
            std::cin>>y;//get value of y
            test.Y=y;
        }else if ((command.compare("Z") == 0)||(command.compare("z") == 0)){
            std::cout<<"Enter a value for z:";
            std::cin.ignore(500,'\n');//ignore previous input
            int z;
            std::cin>>z;//get value of z
            test.Z=z;
        }else if ((command.compare("S") == 0)||(command.compare("s") == 0)){
            test.step(); //step through PC
        }else if ((command.compare("E") == 0)||(command.compare("e") == 0)){
            test.solve(); //solve current
        }else if ((command.compare("D") == 0)||(command.compare("d") == 0)){
            test.current(); //solve current line
        }else if ((command.compare("Q") == 0)||(command.compare("q") == 0)){
            std::cout<<"EXITING"<<std::endl;
            exit(0);//exits program
        }
    }
}


void name(){
    std::cout<<"Sam Melnik"<<std::endl;
    std::cout<<"652620936"<<std::endl;
    std::cout<<"CS 474 proj 4"<<std::endl;
    std::cout<<std::endl;
    
}

int main(int argc, const char * argv[])
{
    name();
    help();
    userInput();
    return 0;
}
