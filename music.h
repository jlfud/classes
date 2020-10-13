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
  int getType();
 private:
  char artist[50];
  int duration;
  char publisher[50]; 
};
