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
  virtual char artist[100];
  virtual int duration;
  virtual char publisher[100]; 
};
