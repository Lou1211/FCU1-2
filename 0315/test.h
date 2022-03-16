#include <iostream>
#include <string>
using namespace std;

class Magazine
{
private:
    string title;
    string authors;
    string publisher;
    float price;
    int pages;
    string isbn;

public:
    Magazine(string title, string isbn);
    Magazine(string title, float price, string isbn);
    Magazine(string title, string authors, string publisher, float price, int pages);
    void set(int pages);
    void set(float price);
    void set(string title);
    void setAuthors(string authors);
    void setPublisher(string publisher);
    void setIsbn(string isbn);
    void showinfo();
    string Gettitle();
    string Getauthors();
    string Getpublisher();
    float Getprice();
    int Getpages();
    string Getisbn();
};
