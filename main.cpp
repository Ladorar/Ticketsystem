#include "PrioQueue.h"
#include "Ticket.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void newticket(PrioQueue& p)
{
    string owner;
    string text;
    int prio;
    cout << "***Neues Ticket erstellen***" << endl;
    cout << "Bitte geben sie ihren Namen ein" << endl;
    cin >> owner;
    cout << "Bitte geben sie die Priorität des Tickets ein" << endl;
    cin >> prio;
    cout << "Bitte schildern sie das Problem in wenigen Sätzen" << endl;
    cin.ignore();
    getline(cin, text);
    cout << "Ihr Ticket wurde erfolgreich übermittelt" << endl;
    p.push(owner, text, prio);
}

void deletetickets(PrioQueue& p)
{
    while (p.m_ticket.size() > 0)
    {
        p.m_ticket.erase(p.m_ticket.begin());
    }
}

void shownextticket(const PrioQueue& p)
{
    p.m_ticket[0].print();
}

void showalltickets(const PrioQueue& p) {
    for (int i = 0; i < p.m_ticket.size(); i++) {
        p.m_ticket[i].printshort();
    }
}

int menu()
{
    PrioQueue m_prio;
    while (1)
    {
        char input;
        cout << m_prio.m_ticket.size() << endl;
        cout << "***Hauptmenue***" << endl;
        cout << "1. Neues Ticket erstellen" << endl;
        cout << "2. Alle Tickets löschen" << endl;
        cout << "3. Nächstes Ticket anzeigen" << endl;
        cout << "4. Alle Tickets anzeigen" << endl;
        cout << "0. Beenden" << endl;
        cin >> input;
        switch (input)
        {
        case '1': newticket(m_prio);
            break;
        case '2': deletetickets(m_prio);
            break;
        case '3': shownextticket(m_prio);
            break;
        case '4': showalltickets(m_prio);
            break;
        case '0': return 0;
            break;
        default: cout << "ungueltige Eingabe!" << endl;


        }
    }
}

int main()
{
    menu();
    return 0;
}

