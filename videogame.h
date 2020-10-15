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
  virtual char publisher[100];
  virtual float rating;
};
