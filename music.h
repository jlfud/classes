#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;
class music : public parent{
 public:
  music();
  char* getArtist();
  int getDuration();
  char* getPublisher();
  virtual int getType();
  char artist[100];
  int duration;
  char publisher[100]; 
};
