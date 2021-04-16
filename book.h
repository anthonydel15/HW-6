#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <cctype>
using namespace std;
class Book{
    public:
        Book();
        Book(string newTitle, int newYear, string newAuthor);
        string getAuthor();
        int getYear();
        string getTitle();
        void setAuthor(string newAuthor);
        void setYear(int newYear);
        void setTitle(string newTitle);
        string toString();
        bool matchTitle(string targetTitle);
        bool matchAuthor(string targetAuthor);
        bool matchYear(string targetYear);
        bool match(string target);
        string toUpper(string upper);
    private:
        string title;
        string author;
        int year;
};
#endif