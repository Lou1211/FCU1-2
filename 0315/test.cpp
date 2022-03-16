#include <iostream>
#include <string>
#include "test.h"
using namespace std;

Magazine::Magazine(string title, string isbn)
{
    set(title);
    set(isbn);
}

Magazine::Magazine(string title, float price, string isbn)
{
    set(price);
    set(title);
    set(isbn);
}

Magazine::Magazine(string title, string authors, string publisher, float price, int pages)
{
    set(pages);
    set(price);
    set(title);
    set(publisher);
    set(authors);
}

void Magazine::set(int Newpages)
{
    if (Newpages < 0)
    {
        throw invalid_argument("Wrong Pages!\n");
    }
    else
    {
        pages = Newpages;
    }
}

void Magazine::set(float Newprice)
{
    if (Newprice < 0)
    {
        throw invalid_argument("Wrong Prcie!\n");
    }
    else
    {
        price = Newprice;
    }
}

void Magazine::set(string Newtitle)
{
    if (Newtitle.size() < 0 || Newtitle.size() > 100)
    {
        throw invalid_argument("Wrong Title!\n");
    }
    else
    {
        title = Newtitle;
    }
}

void Magazine::setAuthors(string Newauthors)
{
    authors = Newauthors;
}

void Magazine::setPublisher(string Newpublisher)
{
    publisher = Newpublisher;
}

void Magazine::setIsbn(string Newisbn)
{
    isbn = Newisbn;
}

void Magazine::showinfo()
{
    cout << "---------------------------\n"
         << "Title: " << title
         << "\nAuthors: " << authors
         << "\nPublisher: " << publisher
         << "\nPrice: " << price
         << "\nPages: " << pages
         << "\nISBN: " << isbn
         << "\n---------------------------\n";
}

string Magazine::Gettitle()
{
    return title;
}

string Magazine::Getauthors()
{
    return authors;
}

string Magazine::Getpublisher()
{
    return publisher;
}

string Magazine::Getisbn()
{
    return isbn;
}

float Magazine::Getprice()
{
    return price;
}

int Magazine::Getpages()
{
    return pages;
}