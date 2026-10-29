# 🗄️ University Database Projects

A collection of university course projects 🎓 focused on databases, data management, and backend programming with C++ and PHP.

## 🗂️ Projects

| # | Project | Language | Topic |
|---|---------|----------|-------|
| 01 | [Library Management System](./01-library-management-cpp) 🏛️ | C++ | OOP, polymorphism, managing a collection of items |
| 02 | [Auth Token System](./02-auth-token-php) 🔐 | PHP | Login, AES-256-CBC encryption, token generation |

---

### 01. Library Management System (C++) 🏛️
A console-based library management system built with object-oriented programming. It manages books and DVDs through a common abstract base class.

🧠 **Concepts:** abstract classes, inheritance, polymorphism, virtual destructors, `std::vector<LibraryItem*>`

✨ **Features:** add books and DVDs, display all items with status, borrow an item by ID

### 02. Auth Token System (PHP) 🔐
A login system that validates a student ID and password, then returns a user profile along with an encrypted token. The token is built from a timestamp, user ID, and student ID, and encrypted with AES-256-CBC using a random IV.

🧠 **Concepts:** static class methods, `openssl_encrypt` / `openssl_decrypt`, IV handling, Base64 encoding, structured API-style responses (status codes, messages, errors)

✨ **Features:**
* 🔑 `Cipher::encrypt` / `Cipher::decrypt` helper class
* 👤 `login()` returns `200` with user data and token on success
* ⚠️ Returns `400` with error codes (`NotFoundUserName`, `NotFoundPassword`) on failure

---

## 🚀 How to Run

**01 – C++**
```
cd 01-library-management-cpp
g++ main.cpp -o library
./library
```
(On Windows, run `library.exe` instead.)

**02 – PHP**
```
cd 02-auth-token-php
php index.php
```

## 🔜 Coming Soon
* 🛠️ Database design project (more projects will be added as the course continues)

## 🧰 Tech Stack
`C++` · `PHP` · `OpenSSL` · `Git`
