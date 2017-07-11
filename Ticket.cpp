#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include "Ticket.h"
int Ticket::counter = 1;

Ticket::Ticket()
{
}

Ticket::Ticket(string o, string t, int p)
{
    owner = o;
    text = t;
    id = counter;
    counter++;
    prio = p;
    //srand(time(0));
    //prio = (rand()%11);
}

string Ticket::getText() const
{
    return (text);
}

string Ticket::getOwner() const
{
    return (owner);
}

int Ticket::getId() const
{
    return (id);
}

Status Ticket::getStatus() const
{
    return (status);
}

string Ticket::getShort() const
{
    int pos = text.find(".");
    if (pos!=std::string::npos) return text;   //http://www.cplusplus.com/reference/string/string/find/
    return (text.substr(0, pos));
    
}

string Ticket::getStatusAsString() const
{
    if (status == open) return ("open");
    else if (status == closed) return ("closed");
    else return ("duplicate");
}

void Ticket::print() const
{
    cout << "Ticket ID: " << id << endl;
    cout << "Ticket Ersteller: " << owner << endl;
    cout << "Ticket Status: " << getStatusAsString() << endl;
    cout << "Ticket Beschreibung: " << text << endl;
    cout << "Priorität: " << prio << endl;
}

void Ticket::printshort() const
{
    cout << "Ticket ID: " << id << endl;
    cout << "Ticket Ersteller: " << owner << endl;
    cout << "Ticket Status: " << getStatusAsString() << endl;
    cout << "Ticket Beschreibung: " << getShort() << endl;
    cout << "Priorität: " << prio << endl;
}

