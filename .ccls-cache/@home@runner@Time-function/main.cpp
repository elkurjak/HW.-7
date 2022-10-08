#include <iostream>
using namespace std;

//declare parameter for the time functions
void time(int seconds, int hours, int minutes, int secs){
  //user input
 cin>>seconds;
  //formulas for converting seconds
  hours= (seconds/3600) % 60;
  minutes = (seconds /60) % 60;
  secs = seconds % 60;
}

  


int main() {
  //declare variables again
  int seconds, hours, minutes, secs;
  //call funtion
  time(seconds, hours, minutes, secs);

}