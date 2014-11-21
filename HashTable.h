// Team #6
// CIS 22C Fall 14
// Jane Shin, Neesha Bhardwaj, Ashley Kim, Daksha Divakar, Viktoriia Petrusha

//***********************************************************************************************************
// Specification file for hash class
//***********************************************************************************************************

#ifndef HASH_TABLE_H_INCLUDED
#define HASH_TABLE_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>
#include "CollisionTable.h"
#include "School.h"
using namespace std;

#define nullptr 0
#define hashSize 101  // I put 101 for now, but will count it next time

struct HashTable
{
     School*aSchool = nullptr;    // Pointer to school
     int numSchools = 0;                   // Number of schools in hash table
     CollisionTable *aCollision = nullptr;     // Pointer to collision table
};

class Hash
{
private:
    HashTable *hashArrPtr;
    int totalSchools;

public:
    // Constructor
    Hash(int aSize);

    // Deconstructor
    ~Hash();

    // Hash operations
    int hashFunction(int tNum);
    bool insertHash();
    bool deleteHash();
    bool searchHash(int searchNum);
    void hashStatistics();
    void printHashTableSequence() const;
    void printInKeySequence();
    void destroyHash();
};

#endif
