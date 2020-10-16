#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

parent::parent(){
  
}
char* parent::getTitle(){
  return title;
}
int parent::getYear(){
   return year;
}
int parent::getType(){
  return 0;
}
char* parent::getPublisher(){
  return publisher;
}
float parent::getRating(){
  return rating;
}
char* parent::getArtist(){
  return artist;
}
int parent::getDuration(){
  return duration;
}
char* parent::getDirector(){
  return director;
}
