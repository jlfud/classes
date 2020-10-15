#ifndef PARENT_H
#define PARENT_H

#include <iostream>
#include <cstring>

using namespace std;

class parent{
public:
  parent();
  char* getTitle();
  int getYear();
  virtual int getType();
  virtual char title[100];
  virtual int year;
  virtual char artist[100];
  virtual int duration;
  virtual char publisher[100];
};

#endif
