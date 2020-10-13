#include <iostream>
#include <cstring>
#include "videogame.h"

using namespace std;
videogame::videogame(){

}
char* videogame::getPublisher(){
  return publisher;
}
float videogame::getRating(){
  return rating;
}
int videogame::getType(){
  return 3;
}
