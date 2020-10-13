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
  int getType();
private:
  char title[100];
  int year;
};

#endif
