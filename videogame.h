#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;
class videogame : public parent{
 public:
  videogame();
  char* getPublisher();
  float getRating();
  virtual int getType();
  char publisher[100];
  float rating;
};
