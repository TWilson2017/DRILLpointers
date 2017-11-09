#include <iostream>
using namespace std;
// --------------------------------------------------------------------
// Function: Complete the following program to read values into
//           dynamically allocated variables.
//    NOTE: Read them in the order in which the variables are allocated.
// --------------------------------------------------------------------
void ShowAnswer(int * p, int * q)
{
   cout << *p - *q << endl;
}
int main()
{
   int *xp = new int, *yp = new int;  // DO NOT DELETE.
   cin >> *xp >> *yp;

   ShowAnswer(yp, xp); // DO NOT DELETE.
   return 0;

}//main
