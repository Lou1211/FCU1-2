#include <iostream>
#include <string>
#include "test.h"
using namespace std;

int main()
{
    string title;
    string authors;
    string publisher;
    float price;
    int pages;
    string isbn;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "What kind of information do you want to enter?\n"
             << "1. Title, ISBN\n"
             << "2. Title, Price, ISBN\n"
             << "3. Title, Authors, Publisher, Price, Pages\n"
             << "-------------------------------------------------\n"
             << "=> ";
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Title = ";
            cin >> title;            
            cout << "ISBN = ";
            cin >> isbn;
            break;

        case 2:
            cout << "Title = ";
            cin >> title;
            cout << "Price = ";
            cin >> price;
            cout << "ISBN = ";
            cin >> isbn;
            break;

        case 3:
            cout << "Title = ";
            cin >> title;
            cout << "Authors = ";
            cin >> authors;
            cout << "Publisher = ";
            cin >> publisher;
            cout << "Price = ";
            cin >> price;
            cout << "Pages = ";
            cin >> pages;
        default:
            break;
        }
        if (a == 1)
        {
            Magazine book(title, isbn);
            book.showinfo();
        }
        else if (a == 2)
        {
            Magazine book(title, price, isbn);
            book.showinfo();
        }
        else if (a == 3)
        {
            Magazine book(title, authors, publisher, price, pages);
            book.showinfo();
        }
    }
}