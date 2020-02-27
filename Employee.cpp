// Employee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"
class Book {
private:
    int bookId;
    string bookName;
    string bookAuthor;
    double bookPrice;
public:
	Book(){

	}
    Book(int id, string name, string author, double price) {
        bookId = id;
        bookName = name;
        bookAuthor = author;
        bookPrice = price;
    }
	string getTitle() {
		return bookName;
	}

	int getBookId() {
		return bookId;
	}

	string getAuthor() {
		return bookAuthor;
	}

	double getBookPrice() {
		return bookPrice;
	}
};
class BookStore {
private:
	Book* books;
	int bookCount;
public:
	BookStore(int size) {
		books = new Book[size];
		bookCount = size;
	}
	void AddNewBook(Book book);
	void UpdateBook(Book book);
	Book* FindBook(int id);
	Book* FindBookA(string author);
};
void BookStore::AddNewBook(Book book) {
	for (int i = 0; i < bookCount; i++) {
		if (books[i].getTitle() == "") {
			books[i] = book;//U have set the details of the passed arg into the array....
			return;
		}
		else continue;
	}
}

void BookStore::UpdateBook(Book bk) {
	for (int i = 0; i < bookCount;i++) {
		if (books[i].getBookId() == bk.getBookId()) {
			books[i] = bk;
			return;
		}
		else continue;
	}
}


Book* BookStore::FindBookA(string author) {
	for (int i = 0; i < bookCount; i++) {
		if(books[i].getAuthor()== author){
			return &books[i];
		}
	}

}

Book* BookStore::FindBook(int id) {
	for (int i = 0; i < bookCount; i++) {
		if (books[i].getBookId() == id) {
			return &books[i];
		}
	}
}

string getMenu() {
	string menu = "~~~~~~~~~~Book Store app~~~~~~~~~~~\n";
	menu += "TO ADD NEW BOOK--------------->PRESS 1\n";
	menu += "TO FIND BOOK BY ID------------>PRESS 2\n";
	menu += "TO FIND BOOK By AUTHOR-------->PRESS 3\n";
	menu += "TO UPDATE BOOK---------------->PRESS 4\n";
	menu += "PS: PRESSING ANY KEY IS CONSIDERED AS EXIT\n";
	return menu;
}
bool processMenu(int choice) {
	BookStore bks;
	switch (choice)
	{
	case 1:bks.AddNewBook(12);

	case 2:bks.FindBookA(10);
		
	case 3:bks.FindBook();
		
	case 4:bks.UpdateBook(4);
		return true;
	}
	return false;
}

int main() {
	int size = getNumber("Please enter the no of books with ur store");
	BookStore app(size);
	bool processing = true;
	do {
		string menu = getMenu();
		int choice = getNumber(menu);
		processing = processMenu(choice);
	} while (processing);

}