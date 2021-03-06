#pragma once

#include "Produs.h"
#include "Repo.h"

class Service
{
private:
    Repo<Produs> repo;
public:
    Service();
    Service(const Repo<Produs>& repository);

    void addProdus(char* nume, int pret, int nr_exemplare);
    void updateProdus(int id, char* numeVechi, int pretVechi, int nr_exemplareVechi, char* nume, int pret, int nr_exemplare); //am agaudat id
    void removeProdus(int id, char* nume, int pret, int nr_exemplare);  //am adaugat id
    int cumparaProdus(int id, char* nume, int nr_exemplare);
    int returneazaProdus(int id, char* nume, int nr_exemplare);

    set<Produs> getAll();

    int getSize();
};
