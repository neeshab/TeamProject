// Team #6
// CIS 22C Fall 14
// Jane Shin, Neesha Bhardwaj, Ashley Kim, Daksha Divakar, Viktoriia Petrusha

//school database class

#ifndef SCHOOL_DATABASE
#define SCHOOL_DATABASE

#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include "School.h" //may not need this here but kept it for now

//Here put #include "header file for BST" <---will probably need #include "School.h"
//Here put #include "header file for Hash Table" <---will probably need #include "School.h"

#include "Stack.h"


using namespace std;

template<class ItemType>
class SchoolDataBase
{
private:
    //pointer to hashTable

    //pointer to BST

    //pointer to stack - stack
    Stack<School>* stackPtr;

    //hash table array size
    const int DEFAULT_SIZE = 1000; //dont know if its a good idea to have a default size
                                //we could also give the user an option to choose the size through the constructor
                                //but size will also depend on number of file items from input file, maybe in main
                                //we can determine the number of lines in the file and pass it into constructor
                                //instructions said for array size that it should be: (2 * actual size, and choose the next prime number) <-from instructions

    int HASH_TABLE_SIZE;

    int itemCount = 0; //number of data items - right now we have about 9,000?

public:
    //constructor
    SchoolDataBase() {
            //dynamically allocate hashTable with DEFAULT_SIZE
                //call function setHashTableSize(DEFAULT_SIZE)

            //dynamically allocate BST tree

            //dynamically allocate stack (to store deleted items)
            stackPtr = new Stack<School>;
    }
    SchoolDataBase(int SIZE){
            //dynamically allocate hashTable with parameter SIZE
                //call function setHashTableSize(SIZE)

            //dynamically allocate BST tree

            //dynamically allocate stack (to store deleted items)
            stackPtr = new Stack<School>;
    }

    //mutators
    void setHashTableSize(int size) {HASH_TABLE_SIZE = size;}
    //...

    //accessors
    int getItemCount() const {return itemCount;}
    int getHashTableSize() const {return HASH_TABLE_SIZE;}
    //...


    //update parameter later
    bool insert();
    bool remove(ItemType searchKey);
    bool undoDelete();

};

#endif // SCHOOL_DATABASE


//-------------------------------------------------------PUBLIC FUNCTIONS---------------------------------------------------
///******************************************************
///insert()
///
///******************************************************///this function adds to hashTable, BST at the same time
template<class ItemType>
bool SchoolDataBase<ItemType> :: insert()
{
    //add data to hashTable

        //if load factor is 75%
                // allocate another hash table (2 * actual size, and choose the next prime number)


    //add data to BST tree
    //no need to do anything with stack since stack is for removed items

    //return true if insertion was successful, false otherwise
}


///******************************************************
///remove()
///
///******************************************************
template<class ItemType>
bool SchoolDataBase<ItemType> :: remove(ItemType searchKey)///this function removes from hashTable, BST at the same time
{
    //use searchKey to find data to be removed

    //delete item from hashTable
        //if load factor of first hashTable was 75%
            //check all arrays/hash tables

    //delete item from BST

    //store data or School object into stack


    //return true if removal was successful, false otherwise
}


///******************************************************
///undoDelete()
///
///******************************************************///this function adds to hashTable, BST at the same time
template<class ItemType>
bool SchoolDataBase<ItemType> :: undoDelete()
{
    //if stack is not empty
        //then pop delete item from stack
        //insert the item back into BST and hashTable
        //return true to indicate removal took place successfully
    //else
        //indicate false
}


