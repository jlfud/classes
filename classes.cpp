#include <iostream>
#include <cstring>
#include <vector>
#include "parent.h"
#include "videogame.h"
#include "music.h"
#include "movies.h"

using namespace std;
void ADD(vector<parent*> library);
void SEARCH(vector<parent*> library);
void DELETE(vector<parent*> library);
int main(){
  vector<parent*> library;
  char in[15];
  cout << "classes. Commands: add, search, delete, quit" << endl;
  while(true){
    cout << "input a command: " << endl;
    cin >> in;
    if(strcmp(in,"add") == 0){
      //ADD(library);
      cout << "add" << endl;
    }
    else if(strcmp(in, "search") == 0){
      //SEARCH(library);
      cout << "search" << endl;
    }
    else if(strcmp(in, "delete") == 0){
      //DELETE(library);
      cout << "delete" << endl;
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
void ADD(vector<parent*> library){
  
}
void SEARCH(vector<parent*> library){

}
void DELETE(vector<parent*> library){

}
