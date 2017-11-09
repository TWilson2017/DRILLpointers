#include <iostream>
using namespace std;
// --------------------------------------------------------------------
// Function: Complete the program to:
//           (1) Allocate dynamically two PLAYER records.
//           (2) Set their fields with the values read from the keyboard.
//           (3) Call the ShowPlayers function to display the records.
// --------------------------------------------------------------------
struct PLAYER
{
   int JerseyNumber;
   int Points;
   int Rebounds;
};

void ShowPlayers(PLAYER * x, PLAYER * y)
{
   cout << x -> JerseyNumber << "/" << y -> JerseyNumber << " + "
        << x -> Points << "/" << y -> Points << " + "
        << x -> Rebounds << "/" << y -> Rebounds << endl;
}

int main()
{
   PLAYER * p1, * p2; // POINTERS for two players *** DO NOT DELETE.
   p1 = new PLAYER;
   p2 = new PLAYER;
	
   int jersey, pts, reb;          // DO NOT DELETE.

   //-| Read data for first player; allocate player and assign values
   //-|      read from keyboard.
   cin >> jersey >> pts >> reb;   // DO NOT DELETE.
   p1 -> JerseyNumber = jersey;
   p1 -> Points = pts;
   p1 -> Rebounds = reb;

   //-| Read data for second player; allocate player and assign values
   //-|      read from keyboard.
   cin >> jersey >> pts >> reb;   // DO NOT DELETE.
   p2 -> JerseyNumber = jersey;
   p2 -> Points = pts;
   p2 -> Rebounds = reb;
	
   ShowPlayers(p1, p2);     // DO NOT DELETE.
   cout << endl; return 0;  // DO NOT DELETE.

}//main
