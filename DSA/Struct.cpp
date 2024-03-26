#include <iostream>
using namespace std;

struct book
{
    string name;
    string author;
    int pages;
    double price;
};

int main()
{
    book b1;
    b1.name = "Atomic Habits";
    b1.author = "James Clear";
    b1.pages = 260;
    b1.price = 22.5;

    book b2 = {
        "Mini Habits",
        "Author2",
        225,
        23.5};

    cout << b1.author << endl;
    cout << b2.name << endl;
    book b3;
    cout << "Enter third book name"
         << "\n";
    cin >> b3.name;
    cout << "Third book name: " << b3.name;

    book books[10];
    books[0].name = "bookarray";

    cout << books[0].name;
    return 0;
}