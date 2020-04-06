#include "RepoFile.h"
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

RepoFile::RepoFile()
{
}

RepoFile::RepoFile(const char* fileName)
{
	fis = fileName;
	ifstream f(fileName);
	string linie;
	char* nume = new char[10];
	int pret, nr_exemplare;
	while (!f.eof()) {
		f >> nume >> pret >> nr_exemplare;
		if (nume != "") {
			Produs p(nume, pret, nr_exemplare);
			elem.insert(p);
		}
	}
	delete[] nume;
	f.close();
}

void RepoFile::loadFromFile(const char* fileName)
{
	elem.clear();
	fis = fileName;
	ifstream f(fileName);
	char* nume = new char[10];
	int pret, nr_exemplare;
	while (!f.eof()) {
		f >> nume >> pret >> nr_exemplare;
		if (strcmp(nume, "") != 0) {
			Produs p(nume, pret, nr_exemplare);
			elem.insert(p);
		}
	}
	delete[] nume;
	f.close();
}

void RepoFile::addElem(Produs p)
{
	elem.insert(p);
}
/*
void RepoFile::updateElem(Produs p, const char* newName, int newPret, int newNrExemplare)
{
	set<Produs>::iterator it;
	it = find(elem.begin(), elem.end(), p);
	if (it != elem.end()) {
		(*it).setNume(newName);
		(*it).setPret(newPret);
		(*it).setNrExemplare(newNrExemplare);
	}

}
*/



//sterge elementul s din repository, returneaza 0 la succes, -1 altfel
int RepoFile::removeElem(Produs p)
{
	set<Produs>::iterator it;
	it = find(elem.begin(), elem.end(), p);
	if (it != elem.end()) {
		elem.erase(it);
		return 0;
	}
	return -1;

}


set<Produs> RepoFile::getAll()
{
	return elem;
}

int RepoFile::size()
{
	return elem.size();
}
/*
void RepoFile::saveToFile()
{
	ofstream f(fis);
	//set<Produs>::iterator itr;
	for (size_t i = 0; i < elem.size(); i++) {
		f << elem[i];
	}
	f.close();

	//sau alta varianta:
	//for (itr = elem.begin(); itr != elem.end(); itr++)
		//f << itr->FIRST << " " << itr->SECOND;
	//f.close();
}
*/


RepoFile::~RepoFile()
{

}