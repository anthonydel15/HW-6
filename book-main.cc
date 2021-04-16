/**
 *   @file: book-main.cc
 * @author: Anthony DeLuca
 *   @date: 04/14/21
 *  @brief: book
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "book.h"
using namespace std;


int main(int argc, char const *argv[]) {
	Book book;
	book.setAuthor("DeLuca");
	book.setTitle("Moby Dick");
	book.setYear(2020);
	cout << book.getAuthor() << endl;
	cout << book.getTitle() << endl;
	cout << book.getYear() << endl;
	cout << book.toString() << endl;
	cout << book.matchTitle("Moby Dick") << endl;
	cout << book.matchAuthor("DElucA") << endl;
	cout << book.matchYear("2020") << endl;
	cout << book.match("DeLca")<< endl;
	Book book2 = Book ("Maze Runner", 2011, "Jesus Christ");
	cout << book2.getAuthor() << endl;
	cout << book2.getTitle() << endl;
	cout << book2.getYear() << endl;
	return 0;
}/// main

