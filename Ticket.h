#include <string>
#include <iostream>
using namespace std;


#ifndef TICKET_H
#define	TICKET_H

enum Status {
    open, closed, duplicate
};

class Ticket {
public:
    string text;
    string owner;
    Status status;
    int id;
    int prio;
    Ticket(string o, string t, int p);
    string getText() const;
    string getOwner() const;
    int getId() const;
    Status getStatus() const;
    string getShort() const;
    string getStatusAsString() const;
    void print() const;
    void printshort () const;

    
    Ticket();
private:
    static int counter;

};

#endif	/* TICKET_H */

