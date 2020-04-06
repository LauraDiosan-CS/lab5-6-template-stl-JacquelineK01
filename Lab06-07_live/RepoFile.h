#pragma once
#include "Produs.h"
#include <set>
using namespace std;

class RepoFile
{
private:
	set <Produs> elem;
	const char* fis;
public:
	RepoFile();
	RepoFile(const char* fileName);
	void loadFromFile(const char* fileName);
	void addElem(Produs);
	void updateElem(Produs, const char*, int, int);
	int removeElem(Produs);

	//Produs elemAtPos(int);

	set<Produs> getAll();

	int size();
	void saveToFile();
	~RepoFile();
};