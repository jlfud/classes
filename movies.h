#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;
class movies : public parent {
 public:
  movies();
  char* getDirector();
  int getDuration();
  float getRating();
  int getType();
 private:
  char director[50];
  int duration;
  float rating;
};
