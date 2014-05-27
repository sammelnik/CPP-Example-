//
//  Ops.cpp
//  CS474proj5
//
//  Created by Sam Melnik on 11/30/13.
//  Copyright (c) 2013 Sam Melnik. All rights reserved.
//
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include "Ops.h"


/*
 * Defualt contructor
 */
Ops::Ops(){
    Ops::ops.reserve(3);
    Ops::X=0;
    Ops::Y=0;
    Ops::Z=0;
    Ops::opCounter=0;
}

/*
 * read in file
 */
void Ops::read(){
    std::ifstream infile("./program.txt");
    std::string line;
    while (std::getline(infile, line)) //read in file
    {
        line = line.substr(0,line.size()-1); //remove period at the end of sentence
        ops.push_back(line);  //store to vector
    }
}

/*
 * performs add calculation
 */
void Ops::add(std::vector<std::string> line){
    if ((line[0].compare("X")==0)||(line[0].compare("x")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = X + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = X + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = X + Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = Y + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = Y + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = Y + Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = Z + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = Z + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = Z + Z;
            }
        }
    }else if ((line[0].compare("Y")==0)||(line[0].compare("y")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = X + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = X + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = X + Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = Y + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = Y + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = Y + Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = Z + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = Z + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = Z + Z;
            }
        }
        
    }else if ((line[0].compare("Z")==0)||(line[0].compare("z")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = X + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = X + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = X + Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = Y + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = Y + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = Y + Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = Z + X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = Z + Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = Z + Z;
            }
        }
    }
}

/*
 * performs subtract calculation
 */
void Ops::sub(std::vector<std::string> line){
    if ((line[0].compare("X")==0)||(line[0].compare("x")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = X - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = X - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = X - Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = Y - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = Y - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = Y - Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = Z - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = Z - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = Z - Z;
            }
        }
    }else if ((line[0].compare("Y")==0)||(line[0].compare("y")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = X - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = X - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = X - Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = Y - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = Y - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = Y - Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = Z - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = Z - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = Z - Z;
            }
        }
        
    }else if ((line[0].compare("Z")==0)||(line[0].compare("z")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = X - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = X - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = X - Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = Y - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = Y - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = Y - Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = Z - X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = Z - Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = Z - Z;
            }
        }
    }
}

/*
 * performs multiply
 */
void Ops::multiply(std::vector<std::string> line){
    if ((line[0].compare("X")==0)||(line[0].compare("x")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = X * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = X * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = X * Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = Y * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = Y * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = Y * Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = Z * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = Z * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = Z * Z;
            }
        }
    }else if ((line[0].compare("Y")==0)||(line[0].compare("y")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = X * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = X * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = X * Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = Y * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = Y * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = Y * Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = Z * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = Z * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = Z * Z;
            }
        }
        
    }else if ((line[0].compare("Z")==0)||(line[0].compare("z")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = X * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = X * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = X * Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = Y * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = Y * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = Y * Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = Z * X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = Z * Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = Z * Z;
            }
        }
    }
}

/*
 * performs divide calc
 */
void Ops::divide(std::vector<std::string> line){
    if ((line[0].compare("X")==0)||(line[0].compare("x")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = X / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = X / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = X / Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = Y / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = Y / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = Y / Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                X = Z / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                X = Z / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                X = Z / Z;
            }
        }
    }else if ((line[0].compare("Y")==0)||(line[0].compare("y")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = X / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = X / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = X / Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = Y / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = Y / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = Y / Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Y = Z / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Y = Z / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Y = Z / Z;
            }
        }
        
    }else if ((line[0].compare("Z")==0)||(line[0].compare("z")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = X / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = X / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = X / Z;
            }
        }else if ((line[2].compare("Y")==0)||(line[2].compare("y")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = Y / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = Y / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = Y / Z;
            }
        }else if ((line[2].compare("Z")==0)||(line[2].compare("z")==0)) {
            if ((line[4].compare("X")==0)||(line[4].compare("x")==0)) {
                Z = Z / X;
            }else if((line[4].compare("Y")==0)||(line[4].compare("y")==0)){
                Z = Z / Y;
            }else if((line[4].compare("Z")==0)||(line[4].compare("z")==0)){
                Z = Z / Z;
            }
        }
    }
}

/*
 * gets current line and prints it out
 */
void Ops::current(){
    if(opCounter == 0){  //has not started it
        std::cout<<"counter is not running"<<std::endl;
    }else{//otherwise print it
        std::cout<<opCounter<<" "<<ops[opCounter-1]<<std::endl;
    }
}

void Ops::clear(){
    Ops::X=0;
    Ops::Y=0;
    Ops::Z=0;
    Ops::opCounter=0;
    ops.clear();
    
}

void Ops::three(std::vector<std::string> line){
    if ((line[0].compare("X")==0)||(line[0].compare("x")==0)) {
        X=std::atoi(line[2].c_str());
    }else if ((line[0].compare("Y")==0)||(line[0].compare("y")==0)) {
        Y=std::atoi(line[2].c_str());
    }else if ((line[0].compare("Z")==0)||(line[0].compare("z")==0)) {
        Z=std::atoi(line[2].c_str());
    }
}

void Ops::four(std::vector<std::string> line){
    if ((line[0].compare("X")==0)||(line[0].compare("x")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            X=std::log10(X);
        }else if((line[2].compare("Y")==0)||(line[2].compare("y")==0)){
            X=std::log10(Y);
        }else if((line[2].compare("Z")==0)||(line[2].compare("z")==0)){
            X=std::log10(Z);
        }
    }else if ((line[0].compare("Y")==0)||(line[0].compare("y")==0)) {
        if ((line[2].compare("X")==0)||(line[4].compare("x")==0)) {
            Y=std::log10(X);
        }else if((line[2].compare("Y")==0)||(line[2].compare("y")==0)){
            Y=std::log10(Y);
        }else if((line[2].compare("Z")==0)||(line[2].compare("z")==0)){
            Y=std::log10(Z);
        }
        
    }else if ((line[0].compare("Z")==0)||(line[0].compare("z")==0)) {
        if ((line[2].compare("X")==0)||(line[2].compare("x")==0)) {
            Z=std::log10(X);
        }else if((line[2].compare("Y")==0)||(line[2].compare("y")==0)){
            Z=std::log10(Y);
        }else if((line[2].compare("Z")==0)||(line[2].compare("z")==0)){
            Z=std::log10(Z);
        }
    }
}

void Ops::five(std::vector<std::string> line){
    if (line[3].compare("*")==0) {
        multiply(line);
    }else if (line[3].compare("+")==0) {
        add(line);
    }else if (line[3].compare("-")==0) {
        sub(line);
    }else if (line[3].compare("/:")==0){
        divide(line);
    }
}

void Ops::solve(){
    ops.clear();
    read();
    std::vector<std::string> line;
    for(int i = 0; i<ops.size();i++){
        char * cstr = new char [ops[i].length()+1];
        std::strcpy (cstr, ops[i].c_str());
        char * p = std::strtok (cstr," ");
        int count = 0;
        while (p!=0)        //tokenize string
        {
            std::string temp(p);
            //std::cout<<temp<<std::endl;
            line.push_back(temp);
            p = strtok(NULL," ");
            count++;
        }
        if (line.size()==3) {
            three(line);
            line.clear();
        }else if(line.size()==4){
            four(line);
            line.clear();
        }else if(line.size()==5){
            five(line);
            line.clear();
        }
    }
    std::cout<<"Values of X=" <<X<<" Values of Y=" <<Y<<" Values of Z=" <<Z<<std::endl;
}

void Ops::step(){
    ops.clear();
    read();
    std::vector<std::string> line;
    if(opCounter<ops.size()){
        char * cstr = new char [ops[opCounter].length()+1];
        std::strcpy (cstr, ops[opCounter].c_str());
        char * p = std::strtok (cstr," ");
        int count = 0;
        while (p!=0)        //tokenize string
        {
            std::string temp(p);
            //std::cout<<temp<<std::endl;
            line.push_back(temp);
            p = strtok(NULL," ");
            count++;
        }
        if (line.size()==3) {
            three(line);
            line.clear();
        }else if(line.size()==4){
            four(line);
            line.clear();
        }else if(line.size()==5){
            five(line);
            line.clear();
        }
        std::cout<<"Values of X=" <<X<<" Values of Y=" <<Y<<" Values of Z=" <<Z<<std::endl;
        opCounter++;
    }
}