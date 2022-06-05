/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/                                                                                                                                         /
/        A cheese container can hold 2.76 kg of cheese.Each evening, a fromager ships containers of cheese to a local grocery store.      /
/        The cost of producing one container of cheese is $4.12, and the profit of each container of cheese is $1.45.                     /
/                                                                                                                                         /
/        Write a program that does the following :                                                                                        /
/                                                                                                                                         /
/        1. Prompts the user to enter the total amount of cheese produced each evening.                                                   /
/        2. Outputs the number of containers needed to hold the cheese. (Round your answer to the nearest integer.)                       /
/        3. Outputs the cost of producing the cheese.                                                                                     /
/        4. Outputs the profit for producing cheese.                                                                                      /
/                                                                                                                                         /
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// BY ISSA HABEEB */


#include <iostream>     // GIVES "cin" AND "cout"
#include <iomanip>      // GIVES "setfill(char)", "setw(int)" AND "setprecision(int)"
#include <string>       // GIVES DATA TYPE "string"
using namespace std;    // SO NO NEED TO DO "std::cout" OR "std::cin"


// THIS FUNCTION "MAIN" GET EXECUTED WHEN PROGRAM IS RAN
int main()
{
    // CONSTANT VARIABLES
    const double CONTAINER_CAPACITY = 2.76;
    const double CONTAINER_COST = 4.12;
    const double PROFIT = 1.45;

    // INTRODUCTION
    cout << setfill('*') << setw(81) << "\n"
         << setfill('*') << setw(55) << " Welcome to my Cheesy Program " << setfill('*') << setw(26) << "\n"
         << setfill('*') << setw(81) << "\n" << endl;

    // THIS WILL APPLY EVERY TIME WE USE "cout" UNLESS CHANGED
    cout << fixed << setprecision(2) << setfill('.');     /*  "fixed" MEANS REAL NUMBERS (NOT SCIENTIFIC NOTATION), 
                                                              "setprecision(int)" IS AMOUNT OF NUMBERS AFTER DECIMAL POINT,
                                                              "setfill(char)" IS WHAT IS FILLED IN THE "setw(int)" FUNCTION  */

    // ASKS USER TO INPUT A NUMBER
    double cheese_produced_Input;  // DECLARING DOUBLE VARIABLE
    cout << "Please enter the total number of kilograms of cheese produced: "; 
    cin >> cheese_produced_Input;  // ASKS USER TO INPUT A NUMBER AND STORES IT IN THE DOUBLE VARIABLE



    // CALCULATES CONTAINER AMOUNT AND OUTPUTS IT WITH A SENTENCE
    double container_amount_double = (cheese_produced_Input / CONTAINER_CAPACITY) + 1;  
    int container_amount = (int)container_amount_double;  /*  ASSIGNS "container_amount" TO WHAT THE INT VALUE WOULD BE OF "container_amount_double"
                                                              (THIS IS TO AVOID LOSS OF DATA WARNING/ERROR)  */ 

    const string CONTAINER_AMOUNT_SENTENCE = "The number of containers to hold the cheese is: ";
    cout << left << CONTAINER_AMOUNT_SENTENCE << setw(83 - CONTAINER_AMOUNT_SENTENCE.length()) << right << container_amount << endl;



    // CALCULATES COST PER CONTAINER AND OUTPUTS IT WITH A SENTENCE
    double cost = container_amount * CONTAINER_COST;
    const string CONTAINER_COST_SENTENCE = "The cost of producing " + to_string(container_amount) + " container(s) of cheese is: ";
    cout << left << CONTAINER_COST_SENTENCE << setw(80 - CONTAINER_COST_SENTENCE.length()) << right << '$' << cost << endl;


    // CALCULATES PROFIT PER CONTAINER AND OUTPUTS IT WITH A SENTENCE
    double container_profit = container_amount * PROFIT;
    const string CONTAINER_PROFIT_SENTENCE = "The profit from producing " + to_string(container_amount) + " container(s) of cheese is: ";
    cout << left << CONTAINER_PROFIT_SENTENCE << setw(80 - CONTAINER_PROFIT_SENTENCE.length()) << right << '$' <<  container_profit << "\n" << endl;
    


    // PAUSES COMMAND LINE RATHER THAN CLOSING
    system("pause");

    // RETURNS INT 0 TO THE FUNCTION MAIN
    return 0;
}

/* 

I can't get the output format to look exactly like how does in the exe file from Canvas. 
I watched multiple YouTube videos and I have spend too much time on it and have given up. 

*/