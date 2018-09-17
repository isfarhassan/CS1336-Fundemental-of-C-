//CS 1336.502 Project 1 ixh170730  Isfar Hassan

/*
 * The program assists a shopkeeper in
 *  calculating the cost of a cart of  vegetables
 *
 *  Author : Isfar Hassan
 */


#include <iostream>     // Required to used the cout, cin functions
#include <iomanip>		// Required for setw() method, which aligns the value later.

using namespace std;

/*
 *  Below are the variables initialized
 *  note that since we are going to be
 *  dealing with money, anything related to using
 *  the cost, the literal for the variables are set to
 *  double.
 *
 *  The 'amount' is set to an integer, since they are whole numbers.
 */

/*
 *  Why arrays?
 *  Notice I have created 2 arrays, one being integer, another double.
 *  The purpose of this array is to store all the
 *  related numbers under one variable.
 *  For example, if i need to call the amount of asparagus,
 *  I will just have to call it like amnt[0], as asparagus will be store
 *  in the first index of the array.
 *
 *  The array was used mainly, for the intention of using a
 *  for loop effectively which is used to print to the screen,
 *  as well as making the code efficient.
 */

string item;					// stores the current item name.

// the names of the items, and used later in the for loop.
int amnt[6] = {};				// This array will store the amount of each item, to help us in the for loop to print on screen.
double cost[6] = {};			// This array will store the cost of each item, to help us in the for loop to print on screen.
double subTotal, tax, total;	// Will be used later, to store sub total, tax and finally the total of the purchase.
double costPer[6];				// will be used to take input from the user, to store the cost of each item, during runtime.
double aCost, bCost, cCost, lCost, pCost, wCost;  // Initialized, and will be used to temporarily store the value of the cost of each items.
void init();				// Initializes the init() function.

int main(){

	init();  // The init function calls all the subroutines, which are defined below.

	return 0;

	//Isfar Hassan
}


void asparagus() {  // Calculates the cost of Asparagus in the cart


	item = "Asparagus";			// Item name

	cout << "\nPlease enter the number of "  << item <<  " in the cart: " ;  // Prints to screen
	cin >> amnt[0];		// Takes human input, of the number of item
	cout << "Please enter the cost of each "<< item << " : " ;		// Displays to screen, asking for an input of the cost of each item
	cin >> costPer[0] ;					// Takes input of the cost of each item
	aCost = amnt[0] * costPer[0] ;		// cost is calculated and stored to aCost.
	cost[0] = aCost ;				// bCost is assigned to the array cost[]

}

void brusselsSprout() {		// Calculates the cost of Brussels Sprout in the cart

	item = "Brussels Sprout(s)";				// Item name

	cout << "\nPlease enter the number of "  << item <<  " in the cart: " ;  // Prints to screen
	cin >> amnt[1];																// Takes human input, of the number of item
	cout << "Please enter the cost of each "<< item << " : " ;					// Displays to screen, asking for an input of the cost of each item
	cin >> costPer[1];											// Takes input of the cost of each item
	bCost = amnt[1] * costPer[1] ;					// cost is calculated and stored to bCost.
	cost[1] = bCost ;					// bCost is assigned to the array cost[].
}
void corn() {		// Calculates the cost of Corn in the cart

	item = "Corn";		// Item name

	cout << "\nPlease enter the number of "  << item <<  " in the cart: " ;		// Prints to screen
	cin >> amnt[2];			// Takes human input, of the number of item
	cout << "Please enter the cost of each "<< item << " : " ;			// Displays to screen, asking for an input of the cost of each item
	cin >> costPer[2] ;					// Takes input of the cost of each item
	cCost = amnt[2] * costPer[2] ;		// cost is calculated and stored to cCost.
	cost[2] = cCost ;					// cCost is assigned to the array cost[].

	// Isfar Hassan
}
void lettuce() {		// Calculates the cost of Lettuce in the cart

	item = "Lettuce";  // Item name

	cout << "\nPlease enter the number of "  << item <<  " in the cart: " ;		// Prints to screen
	cin >> amnt[3];				// Takes human input, of the number of item
	cout << "Please enter the cost of each "<< item << " : " ;
	cin >> costPer[3] ;			// Takes input of the cost of each item
	lCost = amnt[3] * costPer[3] ;	// cost is calculated and stored to lCost.
	cost[3] = lCost ;			// lCost is assigned to the array cost[].

}
void pumpkins() {			// Calculates the cost of Pumpkins in the cart

	item = "Pumpkin (s)";		// Item name

	cout << "\nPlease enter the number of "  << item <<  " in the cart: " ;		// Prints to screen
	cin >> amnt[4];			// Takes human input, of the number of item
	cout << "Please enter the cost of each "<< item << " : " ;			// Displays to screen, asking for an input of the cost of each item
	cin >> costPer[4] ;				// Takes input of the cost of each item
	pCost = amnt[4] * costPer[4] ;	// cost is calculated and stored to pCost.
	cost[4] = pCost ;				// pCost is assigned to the array cost[].
}
void watermelons() {		// Calculates the cost of watermelons in the cart

	item = "watermelon(s)";		// Item name

	cout << "\nPlease enter the number of "  << item <<  " in the cart: " ;		// Prints to screen
	cin >> amnt[5];		// Takes human input, of the number of item
	cout << "Please enter the cost of each "<< item << " : " ;			// Displays to screen, asking for an input of the cost of each item
	cin >> costPer[5] ;			// Takes input of the cost of each item
	wCost = amnt[5] * costPer[5] ;	// cost is calculated and stored to wCost.
	cost[5] = wCost ;			// wCost is assigned to the array cost[]
}


void printCostToScreen(){  		// Prints to screen

	string items [] = {"Asparagus", "Brussels Sprout(s)",
			"Corn", "Lettuce", "Pumpkin(s)", "Watermelon(s)"};	// String items[] is defined, which is stores all

	for (int i = 0; i < 6; i++)				// For loop which starts at 0, and goes until less than then the number of items. 0 to 5 = 6 items.
	{
		cout << "\nThe cart contains "<< right << setw(3) << amnt[i]
																 << left << setw(40)<< items[i] + " that each cost " << "$"
																 << right << setw(10)<< fixed<< setprecision(2)<< right << costPer[i];
		subTotal += cost[i];
	}

	tax = subTotal * (8.25/100);  // calculates the tax
	total = subTotal + tax;		  // calculates the Total

	cout << "\nThe subtotal of the cart is " << setw(34) << right << "$"<< right << setw(10)<< fixed<< setprecision(2)<< subTotal ;
	cout  << "\nThe tax is " << setw(51) << right << "$"<< right << setw(10)<< fixed<< setprecision(2)<< subTotal * (8.25/100);
	cout << "\nThe total is " << setw(49) << right << "$"<< right << setw(10)<< fixed<< setprecision(2)<< total;

}
void init() {      // This init function, initializes all the functions, according to the required output.
	// This init function is called in the main function.

	asparagus();
	brusselsSprout();
	corn();
	lettuce();
	pumpkins();
	watermelons();
	printCostToScreen();
}

// Isfar Hassan

