#ifndef PARENT_H
#define PARENT_H

#include <iostream>
#include <cstring>

using namespace std;
//parent class
//header file for all functions and variables
//basically the same for other header files except less
class parent{
public:
  parent();
  char* getTitle();
  int getYear();
  virtual int getType();
  virtual char* getPublisher();
  virtual float getRating();
  virtual char* getArtist();
  virtual int getDuration();
  virtual char* getDirector();
  char title[100];
  int year;
  char publisher[100];
  float rating;
  char artist[50];
  int duration;
  char director[50];
};
#endif
