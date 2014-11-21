// Team #6
// CIS 22C Fall 14
// Jane Shin, Neesha Bhardwaj, Ashley Kim, Daksha Divakar, Viktoriia Petrusha

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
#include <stdio.h>
#include <cstring>
#include <sstream>
#include "SchoolDataBase.h"

using namespace std;

//function protypes

void display_menu();
void process_input_file();/// still incomplete and may need parameters
/// seperate function to write to output file

int main()
{
    SchoolDataBase<string> obj; //can rename object later
    int command;

    do
    {
        //call display_menu
        display_menu();

        cout<<"\nenter command: ";
        cin>>command;

        //input validation
        while(!(command >= 1 && command <= 10))//while user enters command NOT in range from 1 to 9
        {
            cout<<"\ninvalid command. please enter valid command: ";
            cin>>command;
        }

        switch(command)
        {
            case 1:     //add new data
                break;

            case 2:     //delete data
                break;

            case 3:     //Find and display one element using the primary key
                break;

            case 4:     //List data in hash table sequence
                break;

            case 5:     //List data in key sequence (sorted),
                break;

            case 6:      //Print indented tree
                break;

            case 7:       //Write data to a file
                break;

            case 8:       //hash stats
                break;

            case 9:       //undo delete
                break;
        }//end switch

    }while(command != 10);//end do while


    //save everything to file at end of program

    return 0;
}//end main



///******************************************************
///display_menu()
///this function displays menu of commands
///******************************************************
void display_menu()
{
    //display menu
    cout<<"\n***~***~***~***~***~*** MENU ***~***~***~***~***~***\n";
    cout<<"(1) - Add new data\n";
    cout<<"(2) - Delete data\n";
    cout<<"(3) - Search and display element by key\n";
    cout<<"(4) - List data in hash table sequence\n";
    cout<<"(5) - List data in key sequence(sorted)\n";
    cout<<"(6) - Print indented tree\n";
    cout<<"(7) - Write data to file\n";
    cout<<"(8) - Hash statistics\n";
    cout<<"(9) - Undo delete\n";
    cout<<"(10) - Quit\n";
    cout<<  "***~***~***~***~***~***~***~***~***~***~***~***~***~***\n";
}//end display_menu()




///******************************************************
///process_input_file()
/// -add description later-----------
///******************************************************
void process_input_file()
{
    ifstream infile;
    infile.open("inputFile.txt");

    if(!infile)//if file does not open successfully
    {
        cout<<"\nerror opening file!\n";
        return;
    }

    infile.close();
}

