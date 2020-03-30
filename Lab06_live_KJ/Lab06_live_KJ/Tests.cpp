#include "Tests.h"
#include "Repository.cpp"
#include "Produs.h"
#include <assert.h>

void test_repository()
{
	const Produs p1("Salata", 60, 2);
	const Produs p2("Bostan", 30, 3);
	const Produs p3("Camembert", 80, 1);

	Repository <Produs> repo;

	repo.addElem(p1);
	repo.addElem(p2);
	repo.addElem(p3);

	Produs* elems = repo.getAll();

	assert(elems[0] == p1);
	assert(elems[1] == p2);
	assert(elems[2] == p3);

}

void test_produs()
{
	Produs p1("Avocado", 10, 5);
	Produs p2;

	assert(strcmp(p1.getNume(), "Avocado") == 0);
	assert(p1.getPret() == 10);
	assert(p1.getNrExemplare()== 5);

	p2 = p1;
	assert(p1.getPret() == 10);
	assert(p1 == p2);
}