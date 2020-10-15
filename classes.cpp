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
      music* mus = new music();
      cout << "title: " << endl;
      cin >> mus->title;
      cout << "year: " << endl;
      cin >> mus->year;
      cout << "artist: " << endl;
      cin >> mus->artist;
      cout << "duration: " << endl;
      cin >> mus->duration;
      cout << "publisher: " << endl;
      cin >> mus->publisher;
      library.push_back(mus);
      break;
      
    }
    else if(strcmp(input, "movie") == 0){
      movies* mov = new movies();
      cout << "title: " << endl;
      cin >> mov->title;
      cout << "year: " << endl;
      cin >> mov->year;
      cout << "director: " << endl;
      cin >> mov->director;
      cout << "duration: " << endl;
      cin >> mov->duration;
      cout << "rating: " << endl;
      cin >> mov->rating;
      library.push_back(mov);
      break;
    }
    else{
      cout << "invalid input! try again!" << endl;
    }
  }
  cout << "media added!" << endl;
}
void SEARCH(vector<parent*> library){
  char input[20];
  char title[20];
  int year;
  while(true){
    cout << "would you like to search by title or year?" << endl;
    cin >> input;
    if(strcmp(input, "title") == 0 || strcmp(input, "year") == 0){
      break;
    }
    else{
      cout << "invalid input!" << endl;
    }
  }
  if(strcmp(input, "title") == 0){
    cout << "what is the title of the media? " << endl;
    cin >> title; 
    for(vector<parent*>::iterator it = library.begin(); it != library.end(); it++){
      if(strcmp((*it)->title, title) == 0){
	if((*it)->getType() == 1){ //music
	  cout << "title: " << (*it)->title << endl;
	  cout << "year: " << (*it)->year << endl;
	  cout << "artist: " << (*it)->artist << endl;
	  cout << "duration: " << (*it)->duration << endl;
	  cout << "publisher: " << (*it)->publisher << endl;
 	}
      }
    }
  }
}
void DELETE(vector<parent*> &library){

}
