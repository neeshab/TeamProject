// Team #6
// CIS 22C Fall 14
// Jane Shin, Neesha Bhardwaj, Ashley Kim, Daksha Divakar, Viktoriia Petrusha

//***********************************************************************************************************
// Specification file for collisionTable class
//***********************************************************************************************************
#ifndef COLLISION_TABLE_H_INCLUDED
#define COLLISION_TABLE_H_INCLUDED

#include "HashTable.h"  // may not needed
#include "School.h"

class CollisionTable
{
private:
    School *cSchool;    // Pointer to school
    CollisionTable *nextC;          // Pointer to next school

public:
    // Constructor
    CollisionTable();

    // Collision table operations
    // We might need to create .cpp file for these functions...I'm not sure about all this collision table thing?!?!?

    bool insertCollision(School *collisionPtr, CollisionTable *&ptr);
    bool deleteCollision();
    School* getFirstCollision();
    School* getSchool();
    bool searchCollisionList(CollisionTable *ptr, int searchNum);
   //other functions I'm not sure which ones yet

};// End CollisionTable

#endif
