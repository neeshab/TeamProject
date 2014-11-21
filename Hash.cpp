// Team #6
// CIS 22C Fall 14
// Jane Shin, Neesha Bhardwaj, Ashley Kim, Daksha Divakar, Viktoriia Petrusha

//***********************************************************************************************************
#include "HashTable.h"

//***********************************************************************************************************
// Constructor
//***********************************************************************************************************
Hash::Hash(int aSize)
{
    // Dynamically allocate heap array
    hashArrPtr = new HashTable[aSize];

    totalSchools = 0;

}// End constructor

//***********************************************************************************************************
// Deconstructor
//***********************************************************************************************************
Hash::~Hash()
{
    destroyHash();

}// End deconstructor

//***********************************************************************************************************
// Definition of destroyHash
//
// This function deletes all of the school pointers stored in the hash array.
//***********************************************************************************************************
void Hash::destroyHash()
{
    string tempName = "";
    int tempNum;

    for (int i = 0; i < hashSize; i++)
    {
        // check if there are schools in table
        if (hashArrPtr[i].numSchools > 0)
        {
            // check if there is only one school
            if (hashArrPtr[i].numSchools == 1)
            {
                delete hashArrPtr[i].aSchool;
                hashArrPtr[i].aSchool = nullptr;
            }
            else
            {
                delete hashArrPtr[i].aSchool;
                hashArrPtr[i].aSchool = nullptr;

                hashArrPtr[i].numSchools--;

              /*  // Delete all schools in collision     Not sure if right?!?!?!

                while (hashArrPtr[i].numSchools > 0)
                {
                    hashArrPtr[i].aCollision->deleteCollision(hashArrPtr[i].aCollision->getFirstCollision()->getNumber(), hashArrPtr[i].aCollision, tempName, tempNum);

                }// End while*/

                hashArrPtr[i].aCollision = nullptr;

            }// End if

        }// End if

    }// End for

    delete [] hashArrPtr;

}// End destroyHash
