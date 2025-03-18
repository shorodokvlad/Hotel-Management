#include "Client.h"
#include <iomanip>
#include <sstream>

using namespace std;

Client::Client()
{
    clientID = 0;
    nume = "";
    prenume = "";
    telefon = "";
    CNP = "";
    gen = "";
}

Client::Client(int idClient,const string &nume, const string &prenume, string const &telefon, string const &cnp, string const &gen)
{
    this->clientID = idClient;
    this->nume = nume;
    this->prenume = prenume;
    this->telefon = telefon;
    this->CNP = cnp;
    this->gen = gen;
}


Client::~Client()
{
    //dtor
}

int Client::getClientID() const { return clientID; }
string Client::getNume() const { return nume; }
string Client::getPrenume() const { return prenume; }

string Client::getTelefon() const {
    return telefon;
}

string Client::getCNP() const {
    return CNP;
}

string Client::getGen() const {
    return gen;
}

void Client::setClientId(int id) {
    clientID = id;
}

void Client::setNume(const string& nume) {
    this->nume = nume;
}

void Client::setPrenume(const string& prenume) {
    this->prenume = prenume;
}

void Client::setTelefon(const string& telefon) {
    this->telefon = telefon;
}

void Client::setCNP(const string& cnp)
{
    this->CNP = cnp;
}

void Client::setGen(const string& gen)
{
    this->gen = gen;
}

string Client::toString() const
{
    stringstream ss;
    ss << "ID Client: " << clientID << "\n";
    ss << "Nume: " << nume << "\n";
    ss << "Prenume: " << prenume << "\n";
    ss << "Telefon: " << telefon << "\n";
    ss << "CNP: " << CNP << "\n";
    ss << "Gen: " << gen << "\n";

    return ss.str();
}
