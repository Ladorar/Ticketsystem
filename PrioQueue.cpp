
#include "Ticket.h"
#include "PrioQueue.h"

PrioQueue::PrioQueue() {
}

void PrioQueue::push(string o, string t, int p) {
    m_ticket.push_back(Ticket(o, t, p));
    int newTicket = m_ticket.size() - 1;
        while (m_ticket[newTicket].prio < m_ticket[newTicket - 1].prio && newTicket > 0) {
            swap(m_ticket[newTicket], m_ticket[newTicket - 1]);
            newTicket--;
    }

}

void PrioQueue::pop() {
    m_ticket.erase(m_ticket.begin());
}