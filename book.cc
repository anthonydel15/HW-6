#include "book.h"
#include <string>
#include <cctype>
using namespace std;

Book::Book(){
    title = "***";
    year = 0;
    author = "***";
}
//default constructor

Book::Book(string newTitle, int newYear, string newAuthor){
    title = newTitle;
    year = newYear;
    author = newAuthor;
}
//Initialization

string Book::getAuthor(){
    return author;
}
string Book::getTitle(){
    return title;
}
int Book::getYear(){
    return year;
}
//Getters

void Book::setAuthor(string newAuthor){
    author = newAuthor;
}
void Book::setTitle(string newTitle){
    title = newTitle;
}
void Book::setYear(int newYear){
    year = newYear;
}
//Setters

string Book::toString(){
    string result;
    result = title + "|" + to_string(year) + "|" + author;
    return result;
}
//Converts year to string

bool Book::matchTitle(string targetTitle){
    if(toUpper(title) == toUpper(targetTitle)){
        return true;
    }
    return false;
}
bool Book::matchAuthor(string targetAuthor){
    if(toUpper(author) == toUpper(targetAuthor)){
        return true;
    }
    return false;
}
bool Book::matchYear(string targetYear){
    int target = stoi(targetYear);
    if(year == target){
        return true;
    }
    return false;
}
bool Book::match(string target){
    if(toUpper(target) == toUpper(author) || toUpper(target) == toUpper(title) || toUpper(target) == toUpper(to_string(year))){
        return true;
    }
    return false;
}
//match function

string Book::toUpper(string upper){
    for (size_t i = 0; i < upper.length(); i++){
        upper[i] = toupper(upper[i]);
    }
    return upper;
}
//To upper case function