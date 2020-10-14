#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;
class videogame : public parent{
 public:
  videogame();
  char* getPublisher();
  float getRating();
  int getType();
  char publisher[50];
  float rating;
};
