// Team #6
// CIS 22C Fall 14
// Jane Shin, Neesha Bhardwaj, Ashley Kim, Daksha Divakar, Viktoriia Petrusha

#ifndef SCHOOL_H_INCLUDED
#define SCHOOL_H_INCLUDED

using namespace std;

class School
{
private:
    string code; //search key                 
    string name;      
    string city; 
    int apiScore;  

public:
    //constructor
    School(){}
    School(string CODE, string NAME, string CITY, int API) { code = CODE; name = NAME; CITY = city; apiScore = API;}

    //mutators
    void set_Code(string CODE) {code = CODE;}
    void set_SchoolName(string NAME) {name = NAME;}
    void set_City(string CITY) {city = CITY;}
    void set_APIscore(int API) {apiScore = API;}

    //accessors
    string get_Code() const {return code;}
    string get_SchoolName() const  {return name;}
    string get_City() const  {return city;}
    int get_APIscore() const  {return apiScore;}
};

#endif // SCHOOL_H_INCLUDED

