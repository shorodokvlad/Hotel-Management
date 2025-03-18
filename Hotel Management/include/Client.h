#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class Client
{
private:
    int clientID;
    string nume;
    string prenume;
    string telefon;
    string CNP;
    string gen;

public:
    Client();
    Client(int idClient,const string &nume, const string &prenume, string const &telefon, string const &cnp, string const &gen);
    virtual ~Client();

    int getClientID() const;
    string getNume() const;
    string getPrenume() const;
    string getTelefon() const;
    string getCNP() const;
    string getGen() const;

    void setClientId(int id);
    void setNume(const string& nume);
    void setPrenume(const string& prenume);
    void setTelefon(const string& telefon);
    void setCNP(const string& CNP);
    void setGen(const string& gen);

    string toString() const;


};

#endif // CLIENT_H
