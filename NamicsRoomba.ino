/* RoombaLib Nov 2012 - Ralf Stoffels
 * 
 * Fanfare
*/

#include <roombaRS.h>
#include <SoftwareSerial.h>
roombaRS jupp;

void setup() { 
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  Serial.println("Loaded");
  jupp.wakeUp();
  Serial.println("Woke up");

  jupp.goDistance(200);
  Serial.println("Went 200");
  jupp.turnRight(90);
  jupp.turnLeft(90);
  jupp.goBackward();
  delay(1000);
  jupp.stopMoving();
  //jupp.fanfare();  
  jupp.note(G,3,4);
  jupp.note(G,3,4);
  jupp.note(G,3,8);
  jupp.note(A,3,8);
  jupp.note(G,3,8);
  jupp.note(F,3,8);
  jupp.note(E,3,4);
  jupp.note(E,3,4);
  jupp.note(E,3,4);
  jupp.note(P_,3,4);
  jupp.note(F,3,4);
  jupp.note(F,3,4);
  jupp.note(F,3,8);
  jupp.note(G,3,8);
  jupp.note(F,3,8);
  jupp.note(E,3,8);
  jupp.note(D,3,4);
  jupp.note(D,3,4);
  jupp.note(D,3,4);
  jupp.note(P_,3,4);
  jupp.note(C,3,4);
  jupp.note(D,3,4);
  jupp.note(E,3,4);
  jupp.note(F,3,4);
  jupp.note(G,3,8);
  jupp.note(A,3,8);
  jupp.note(G,3,8);
  jupp.note(A,3,8);
  jupp.note(G,3,2);
  jupp.note(C,4,4);
  jupp.note(G,3,4);
  jupp.note(G,3,8);
  jupp.note(A,3,8);
  jupp.note(G,3,8);
  jupp.note(F,3,8);
  jupp.note(E,3,4);
  jupp.note(D,3,4);
  jupp.note(G,3,2);
  jupp.note(C,4,4);
  jupp.note(G,3,4);
  jupp.note(G,3,8);
  jupp.note(A,3,8);
  jupp.note(G,3,8);
  jupp.note(F,3,8);
  jupp.note(E,3,4);
  jupp.note(D,3,4);
  jupp.note(C,3,4);
  jupp.Sleep();
} 

void loop() {
}

