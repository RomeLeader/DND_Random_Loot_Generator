#include <iostream>
#include <string>
#include <vector>
#include "time.h"

using namespace std;

int generateItems (int, int, int);

int main() {

	int numItems = 0; //Number of items the user wants
	int random = 0; //The random integer number for selection. Range: [1, 100]
	int instances = 0; //Number of items found
	int seed = time(NULL); //Seed for the random number using sys. clock
	srand(seed); //Seeding random number

	cout << '\n' <<  "~*~*~*~*~*~*~*~*~*~*~*~*" << '\n' << "~*" << "RANDOM LOOT GENERATOR" << "*~" << '\n' << "~*~*~*~*~*~*~*~*~*~*~*~*" << '\n';
	cout << "How many items will be generated?: ";
	cin >> numItems;

	cout << "You have found:" << '\n';

	for (int i = 1; i <= numItems; i++) { //Output random items
	random = rand() % 30 + 1;
    instances = rand() % 33 + 1;
	generateItems(numItems, random, instances);
	}

	cout << '\n'; //Gimme some space, man!

system ("pause");

return 0;

}

int generateItems (int numItems, int randomNum, int instances) {

   switch (randomNum)
   {
   case 1:
       cout << instances << " broomsticks" << '\n'; break;
   case 2:
	   cout << instances << " Utah teapots" << '\n'; break;
   case 3:
	   cout << instances << " broken plates" << '\n'; break;
   case 4:
	   cout << instances << " barrels" << '\n'; break;
   case 5:
	   cout << instances << " raccoons" << '\n'; break;
   case 6:
	   cout << instances << " empty sacks" << '\n'; break;
   case 7: 
	   cout << instances << " burned books" << '\n'; break;
   case 8:
	   cout << instances << " balls of twine" << '\n'; break;
   case 9:
	   cout << instances << " skulls" << '\n'; break;
   case 10:
	   cout << instances << " wax candles" << '\n'; break;
   case 11:
	   cout << instances << " quills" << '\n'; break;
   case 12:
	   cout << instances << " tattered bandages" << '\n'; break;
   case 13:
	   cout << instances << " oily rags" << '\n'; break;
   case 14:
	   cout << instances << " spin tops" << '\n'; break;
   case 15:
	   cout << instances << " empty glass jars" << '\n'; break;
   case 16:
	   cout << instances << " shawls" << '\n'; break;
   case 17:
	   cout << instances << " bags of finishing nails" << '\n'; break;
   case 18:
	   cout << instances << " bags of marbles" << '\n'; break;
   case 19:
	   cout << instances << " coils of marlin rope" << '\n'; break;
   case 20:
	   cout << instances << " bottles of ink" << '\n'; break;
   case 21:
	   cout << instances << " leaves of yellowed stationery" << '\n'; break;
   case 22:
	   cout << instances << " empty leather scroll cases" << '\n'; break;
   case 23:
	   cout << instances << " incense sticks" << '\n'; break;
   case 24:
	   cout << instances << " clay pipes" << '\n'; break;
   case 25:
	   cout << instances << " sewing thread spools" << '\n'; break;
   case 26:
	   cout << instances << " sewing needles" << '\n'; break;
   case 27:
	   cout << instances << " empty glass bottles" << '\n'; break;
   case 28:
	   cout << instances << " corks" << '\n'; break;
   case 29:
	   cout << instances << " broken chairs" << '\n'; break;
   case 30:
	   cout << instances << " charcoal bits" << '\n'; break;

   default:
	   cout << "Fuck all" << '\n'; break;
   }

return 0;
}
