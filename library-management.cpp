#include <iostream>
#include <string>
#include <vector>
using namespace std;

class LibraryItem {
private:
    int ID;
    string title;
    bool isBorrowed;

public:
    LibraryItem(int i, string t) : ID(i), title(t), isBorrowed(false) {}

    virtual ~LibraryItem() {}


    int getID() const { return ID; }
    string getTitle() const { return title; }
    bool getIsBorrowed() const { return isBorrowed; }


    bool borrowItem() {
        if (isBorrowed) {
            return false;
        }
        isBorrowed = true;
        return true;
    }

    bool returnItem() {
        if (!isBorrowed) {
            return false;
        }
        isBorrowed = false;
        return true;
    }

    virtual void displayDetails() const = 0;
};

class Book : public LibraryItem {
private:
    string author;
    int pages;


public:
    Book(int i, string t, string a, int p)
        : LibraryItem(i, t), author(a), pages(p) {}


    void displayDetails() const override {
cout << "ID: " << getID() << endl;
cout << "Title: " << getTitle() << endl;
cout << "Author: " << author << endl;
cout << "Pages: " << pages << endl;
cout << "Status: " << (getIsBorrowed() ? "Borrowed" : "Available") << endl;
    }

};

class DVD : public LibraryItem {
private:
    string director;
    float duration;

public:
    DVD(int i, string t, string dir, float dur)
: LibraryItem(i, t), director(dir), duration(dur) {}

    void displayDetails() const override {
cout << "ID: " << getID() << endl;
cout << "Title: " << getTitle() << endl;
cout << "Director: " << director << endl;
cout << "Duration: " << duration << endl;
cout << "Status: " << (getIsBorrowed() ? "Borrowed" : "Available") << endl;
    }
};

class Library {
private:
    vector<LibraryItem*> items;

public:
    
~Library() {
        for (int i = 0; i < items.size(); i++) {
            delete items[i];
     }
}

void addItem(LibraryItem* item) {
        items.push_back(item);
}

void showAll() const {
        for (int i = 0; i < items.size(); i++) {
            items[i]->displayDetails();
            cout << "-----" << endl;
    }
}

    void findAndBorrow(int id) {
        for (int i = 0; i < items.size(); i++) {
            if (items[i]->getID() == id) {

                if (items[i]->borrowItem()) {
                    cout << "Item borrowed successfully." << endl;
                }
                else {
                    cout << "Item is already borrowed." << endl;
                }

                return;
    }
}

        cout << "Item not found." << endl;
    }
};

int main() {
    Library lib;
    int choice;

do {
cout << "\n1: Add book" << endl;
cout << "2: Add DVD" << endl;
cout << "3: Show all" << endl;
cout << "4: Borrow item" << endl;
cout << "0: Exit" << endl;
cout << "Your choice: ";
cin >> choice;

switch (choice) {
case 1: {
int id, pages;
string title, author;

    cout << "ID: ";
     cin >> id;
    cin.ignore();
    cout << "Title: ";
    getline(cin, title);
    cout << "Author: ";
     getline(cin, author);
    cout << "Pages: ";
    cin >> pages;
    lib.addItem(new Book(id, title, author, pages));
            break;
        }
        case 2: {
    int id;
    float duration;
    string title, director;

    cout << "ID: ";
cin >> id;
 cin.ignore();
cout << "Title: ";
getline(cin, title);
cout << "Director: ";
getline(cin, director);
cout << "Duration: ";
cin >> duration;

lib.addItem(new DVD(id, title, director, duration));
break;
}
case 3:
lib.showAll();
break;
case 4: {
int id;
cout << "Enter ID to borrow: ";
    cin >> id;
lib.findAndBorrow(id);
break;
 }
case 0:
cout << "Bye!" << endl;
    break;
     default:
cout << "Invalid choice." << endl;
 }

} while (choice != 0);

    return 0;
}
