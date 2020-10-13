#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;
music::music(){


}
char* music::getArtist(){
  return artist; 
}
int music::getDuration(){
  return duration;
}
char* music::getPublisher(){
  return publisher;
}
int music::getType(){
  return 1;
}
