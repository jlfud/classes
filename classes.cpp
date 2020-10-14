#include <iostream>
#include <cstring>
#include <vector>
#include "parent.h"
#include "videogame.h"
#include "music.h"
#include "movies.h"

using namespace std;
void ADD(vector<parent*> &library);
void SEARCH(vector<parent*> library);
void DELETE(vector<parent*> &library);
int main(){
  vector<parent*> library;
  char in[15];
  cout << "classes. Commands: add, search, delete, quit" << endl;
  while(true){
    cout << "input a command: " << endl;
    cin >> in;
    if(strcmp(in,"add") == 0){
      ADD(library);
      cout << library[0]->title << endl;
    }
    else if(strcmp(in, "search") == 0){
      SEARCH(library);
    }
    else if(strcmp(in, "delete") == 0){
      DELETE(library);
    }
    else if(strcmp(in, "quit") == 0){
      cout << "bye!" << endl;
      return 0;
    }
    else{
      cout << "unknown input, please try again." << endl;
    }
  }
  return 0;
}
void ADD(vector<parent*> &library){
  char input[20];
  cout << "would you like to add a game, music, movie?" << endl;
  while(true){
    cin >> input;
    if(strcmp(input, "game") == 0){
      videogame* game = new videogame();
      cout << "title:" << endl;
      cin >> game->title;
      cout << "year: " << endl;
      cin >> game->year;
      cout << "publisher: " << endl;
      cin >> game->publisher;
      cout << "rating: " << endl;
      cin >> game->rating;
      library.push_back(game);
      break;
    }
    else if(strcmp(input, "music") == 0){
      break;
    }
    else if(strcmp(input, "movie") == 0){
      //movie
    }
    else{
      cout << "invalid input! try again!" << endl;
    }
  }
}
void SEARCH(vector<parent*> library){

}
void DELETE(vector<parent*> &library){

}
