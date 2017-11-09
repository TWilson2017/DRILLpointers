#include <iostream>
using namespace std;
// --------------------------------------------------------------------
// Function: Complete the following program to read values into
//           the dynamically allocated record.
//    NOTE: Read in the order in which the fields are declared.
// --------------------------------------------------------------------
struct REC {int a;string b; float c;};

void ShowAnswer(REC * r)
{
   cout << r -> c << r->b << r-> a << endl;
}
int main()
{
   REC *p = new REC;  // DO NOT DELETE.
   int a;
   string b;
   float c;
	
   cin >> p -> a >> p -> b >> p -> c;
   
   ShowAnswer(p); // DO NOT DELETE.
   return 0;

}//main

