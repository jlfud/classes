#include <iostream>
#include <cstring>
#include <vector>
#include "parent.h"
#include "videogame.h"
#include "music.h"
#include "movies.h"

using namespace std;

void ADD(vector<parent*> &library);
void DELETE(vector<parent*> &library);
void SEARCH(vector<parent*> library);

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
      //movie
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
      cout << "invalid input " << endl;
    }
  }
}
void DELETE(vector<parent*> &library){
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
      if(strcmp((*it)->title, title)== 0){
        if((*it)->getType() == 1){ //music
          cout << "title: " << (*it)->title << endl;
          cout << "year: " << (*it)->year << endl;
          cout << "publisher " << (*it)->getPublisher() << endl;
          cout << "artist: " << (*it)->getArtist() << endl;
          cout << "duration: " << (*it)->getDuration() << endl;
          cout << endl;
          cout << "would you like to delete this music? (yes/no) " << endl;
          cin >> input;
          if(strcmp(input, "yes") == 0){
	    cout << (*it)->title << " deleted";
	    delete *it;
	    library.erase(it);
	    cout << endl;
	    break;
          }
        }
        if((*it)->getType() == 2){ //movie
          cout << "title: " << (*it)->title << endl;
          cout << "year: " << (*it)->year << endl;
          cout << "director: " << (*it)->getDirector() << endl;
          cout << "duration: " << (*it)->getDuration() << endl;
          cout << "rating: " << (*it)->getRating() << endl;
          cout << endl;
          cout << "would you like to delete this movie? (yes/no) " << endl;
          cin >> input;
          if(strcmp(input, "yes") == 0){
	    cout << (*it)->title << " deleted";
	    delete *it;
	    library.erase(it);
	    cout << endl;
	    break;
          }
        }
        if((*it)->getType() == 3){ //game
          cout << "title: " << (*it)->title << endl;
          cout << "year: " << (*it)->year << endl;
          cout << "rating: " << (*it)->getRating() << endl;
          cout << "publisher: " << (*it)->getPublisher() << endl;
          cout << endl;
          cout << "would you like to delete this game? (yes/no) " << endl;
          cin >> input;
          if(strcmp(input, "yes") == 0){
	    cout << (*it)->title << " deleted";
	    delete *it;
	    library.erase(it);
	    cout << endl;
	    break;
	  }
	}
      }
    }
  }
  else if(strcmp(input, "year") == 0){
   cout << "what is the year of the media? " << endl;
   cin >> year;
   for(vector<parent*>::iterator it = library.begin(); it != library.end(); it++){
     if((*it)->year == year){
       if((*it)->getType() == 1){ //music
	 cout << "title: " << (*it)->title << endl;
	 cout << "year: " << (*it)->year << endl;
         cout << "publisher " << (*it)->getPublisher() << endl;
         cout << "artist: " << (*it)->getArtist() << endl;
         cout << "duration: " << (*it)->getDuration() << endl;
         cout << endl;
         cout << "would you like to delete this music? (yes/no) " << endl;
         cin >> input;
         if(strcmp(input, "yes") == 0){
           cout << (*it)->title << " deleted" << endl;
           delete *it;
           library.erase(it);
	   cout << endl;
	   break;
         }
       } 
       if((*it)->getType() == 2){ //movie
         cout << "title: " << (*it)->title << endl;
         cout << "year: " << (*it)->year << endl;
         cout << "director: " << (*it)->getDirector() << endl;
         cout << "duration: " << (*it)->getDuration() << endl;
         cout << "rating: " << (*it)->getRating() << endl;
         cout << endl;
         cout << "would you like to delete this movie? (yes/no) " << endl;
         cin >> input;
         if(strcmp(input, "yes") == 0){
           cout << (*it)->title << " deleted";
           delete *it;
           library.erase(it);
	   cout << endl;
	   break;
         }
       }
       if((*it)->getType() == 3){ //game
         cout << "title: " << (*it)->title << endl;
         cout << "year: " << (*it)->year << endl;
         cout << "rating: " << (*it)->getRating() << endl;
         cout << "publisher: " << (*it)->getPublisher() << endl;
         cout << endl;
         cout << "would you like to delete this music? (yes/no) " << endl;
         cin >> input;
         if(strcmp(input, "yes") == 0){
           cout << (*it)->title << " deleted";
	   cout << endl;
           delete *it;
           library.erase(it);
	   cout << endl;
	   break;
	 }
       }
     }
   }
  }
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
          cout << "publisher " << (*it)->getPublisher() << endl;
          cout << "artist: " << (*it)->getArtist() << endl;
          cout << "duration: " << (*it)->getDuration() << endl;
          cout << endl;
        }
        if((*it)->getType() == 2){ //movie
          cout << "title: " << (*it)->title << endl;
          cout << "year: " << (*it)->year << endl;
          cout << "director: " << (*it)->getDirector() << endl;
          cout << "duration: " << (*it)->getDuration() << endl;
          cout << "rating: " << (*it)->getRating() << endl;
          cout << endl;
        }
        if((*it)->getType() == 3){ //game
          cout << "title: " << (*it)->title << endl;
          cout << "year: " << (*it)->year << endl;
          cout << "rating: " << (*it)->getRating() << endl;
          cout << "publisher: " << (*it)->getPublisher() << endl;
	  cout << endl;
        }
      }
    }
  }
  else if(strcmp(input, "year") == 0){
    cout << "what is the year of the media? " << endl;
    cin >> year;
    for(vector<parent*>::iterator it = library.begin(); it != library.end(); it++){
      if((*it)->year == year){
	if((*it)->getType() == 1){ //music
	  cout << "title: " << (*it)->title << endl;
	  cout << "year: " << (*it)->year << endl;
	  cout << "publisher " << (*it)->getPublisher() << endl;
	  cout << "artist: " << (*it)->getArtist() << endl;
	  cout << "duration: " << (*it)->getDuration() << endl;
	  cout << endl;
	}
	if((*it)->getType() == 2){ //movie
	  cout << "title: " << (*it)->title << endl;
	  cout << "year: " << (*it)->year << endl;
	  cout << "director: " << (*it)->getDirector() << endl;
	  cout << "duration: " << (*it)->getDuration() << endl;
	  cout << "rating: " << (*it)->getRating() << endl;
	  cout << endl;
	}
	if((*it)->getType() == 3){ //game
	  cout << "title: " << (*it)->title << endl;
	  cout << "year: " << (*it)->year << endl;
	  cout << "rating: " << (*it)->getRating() << endl;
	  cout << "publisher: " << (*it)->getPublisher() << endl;
	  cout << endl;
	}
      }
    }
  }
}
