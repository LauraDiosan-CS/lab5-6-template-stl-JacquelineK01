#include "tests.h"

int main()
{
    tests();
    Repo r;
    char op;
    do
    {
        cout << "-------Menu---------"<<endl;
        cout << "1.Adaugare" << endl;
        cout << "2.Afisare produse" << endl;
        cout << "3.Exit" << endl;
        cout << "---------------------"<<endl;
        cout<< "Introduceti: "<<endl;
        cin >> op;
        if (op == '1')
        {
            char name[30];
            int price, no;
            cout << "Nume: ";
            cin >> name;
            cout << "Pret: ";
            cin >> price;
            cout << "Numar: ";
            cin >> no;
            cout << endl;
            Product p(name, price, no);
            r.add(p);
        }
        if (op == '2')
        {
            cout << "Produse: "<<endl;
            for (auto it = r.getAll().begin(); it != r.getAll().end(); ++it)
                cout << *it << endl;
        }
        if (op == '3')
            return 0;
    } while (op);
}