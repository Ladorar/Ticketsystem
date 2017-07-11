#include <iostream>
#include <vector>
#include "Ticket.h"

using namespace std;

#ifndef PRIOQUEUE_H
#define	PRIOQUEUE_H

class PrioQueue {
public:
    vector<Ticket> m_ticket;
    void push(string o , string t, int p);
    void pop();
    
    
    PrioQueue();    
private:

};

#endif	/* PRIOQUEUE_H */

