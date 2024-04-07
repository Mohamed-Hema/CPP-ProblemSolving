#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

int main()
{
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks{"thunder attack", "normal attack", "quick attack"};
    list<string> proAttacks{"thunder attack", "normal attack", "quick attack"};
    list<string> crazyAttacks{"thunder attack", "normal attack", "quick attack"};

    return 0;
}

/*

map<string, string> myDictionary;
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));

    myDictionary["strawberry"] = "Die Erdbeere";
    cout << myDictionary.size() << endl;

    for (auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }
*/