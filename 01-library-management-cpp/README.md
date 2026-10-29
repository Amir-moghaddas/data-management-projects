# 🗄️ University Database Projects

University course projects 🎓

## 🗂️ Projects

### 01. Library Management System (C++) 🏛️

A console-based library management system built with object-oriented programming. It manages different types of library items (books and DVDs) through a common abstract base class.

**🧠 Concepts used:**
- 🧱 Abstract base class and pure virtual functions (`LibraryItem`)
- 🌳 Inheritance (`Book` and `DVD` derive from `LibraryItem`)
- 🎭 Polymorphism (`displayDetails()` is called through base-class pointers)
- 🧹 Dynamic memory management with a virtual destructor
- 📦 `std::vector<LibraryItem*>` for storing items

**✨ Features:**
- ➕ Add books and DVDs
- 📋 Display all items with their details and status
- 🔖 Borrow an item by ID

**🏗️ Project structure:**
- 📘 `LibraryItem`: abstract base class with ID, title, and borrow status
- 📖 `Book`: adds author and number of pages
- 💿 `DVD`: adds director and duration
- 🗄️ `Library`: manages the collection (`addItem`, `showAll`, `findAndBorrow`)

**🚀 How to run:**

```bash
cd 01-library-management-cpp
g++ main.cpp -o library
./library
```

(On Windows, run `library.exe` instead.)
