📚 Library Management System in C++
📖 Project Overview

The Library Management System is a console-based application developed in C++ using Object-Oriented Programming (OOP) concepts. It allows users to manage different types of library items, including books, DVDs, and magazines.

The project demonstrates the use of classes, inheritance, abstraction, polymorphism, constructors, and dynamic memory allocation in C++.

✨ Features
Add Book: Add a book with its title, author, due date, and number of pages.
Add DVD: Add a DVD with its title, author, due date, and duration.
Add Magazine: Add a magazine with its title, author, due date, and issue number.
Check Out Item: Check out a library item using its index.
Return Item: Return a previously checked-out library item.
Display Item Details: Display information about library items.
Menu-Driven Interface: Interact with the system through a simple console menu.
🛠️ Technologies Used
Programming Language: C++
Standard Library: <iostream> and <string>
Programming Concepts: Object-Oriented Programming (OOP)
🧱 Project Structure

The application consists of the following classes:

1. LibraryItem

The abstract base class that represents a general library item.

Data members:

title — The title of the item.
author — The author of the item.
duedate — The item's due date.

Main methods:

setTitle() — Updates the title.
setAuthor() — Updates the author.
setDueDate() — Updates the due date.
get_title() — Returns the title.
get_Author() — Returns the author.
get_DueDate() — Returns the due date.
checkOut() — Pure virtual function for checking out an item.
returnItem() — Pure virtual function for returning an item.
displayDetails() — Pure virtual function for displaying item details.
2. Book

Inherits from LibraryItem and represents a book.

Additional data member:

pagenumber — The number of pages in the book.

Main methods:

set_pn() — Updates the page count.
get_num() — Returns the page count.
checkOut() — Displays a book checkout confirmation.
returnItem() — Displays a book return confirmation.
displayDetails() — Displays the book's information.
3. DVD

Inherits from LibraryItem and represents a DVD.

Additional data member:

duration — The duration of the DVD.

Main methods:

set_duration() — Updates the duration.
get_duration() — Returns the duration.
checkOut() — Displays a DVD checkout confirmation.
returnItem() — Displays a DVD return confirmation.
displayDetails() — Displays the DVD's information.
4. Magazine

Inherits from LibraryItem and represents a magazine.

Additional data member:

issueNumber — The magazine's issue number.

Main methods:

set_issueNumber() — Updates the issue number.
get_issueNumber() — Returns the issue number.
checkOut() — Displays a magazine checkout confirmation.
returnItem() — Displays a magazine return confirmation.
displayDetails() — Displays the magazine's information.
🧠 Object-Oriented Programming Concepts

This project demonstrates several important C++ concepts:

Encapsulation: Data members are declared private and accessed through public getter and setter methods.
Inheritance: The Book, DVD, and Magazine classes inherit from LibraryItem.
Abstraction: The abstract LibraryItem class defines common behavior for all library items.
Polymorphism: Virtual functions allow derived classes to implement their own checkout, return, and display behavior.
Constructors: Constructors initialize library item details when objects are created.
Dynamic Memory Allocation: The program uses new to create library items dynamically.
⚙️ Requirements

To compile and run this project, you need:

A C++ compiler such as GCC or MinGW.
A code editor or IDE, such as Visual Studio Code, Code::Blocks, or Visual Studio.
Basic knowledge of compiling and running C++ programs.
🚀 Installation and Execution
Step 1: Clone the repository

If your project is hosted on GitHub, run:

bash
git clone <repository-url>


Replace <repository-url> with your repository's actual URL.

Step 2: Navigate to the project directory
bash
cd <project-directory>

Step 3: Compile the program

Save your source code in a file named main.cpp, then compile it using GCC:

bash
g++ main.cpp -o library

Step 4: Run the program

On Windows:

bash
library.exe


On Linux or macOS:

bash
./library

📋 Menu Options

When the application starts, the following menu is displayed:

text
===== LIBRARY MANAGEMENT SYSTEM =====
1. Add Book
2. Add DVD
3. Add Magazine
4. Check Out Item
5. Return Item
6. Display Item Details
0. Exit


Choose an option by entering its corresponding number.

Option	Description
1	Add a new book
2	Add a new DVD
3	Add a new magazine
4	Check out a library item
5	Return a library item
6	Display item details
0	Exit the application

The program initially creates three sample items: a book, a DVD, and a magazine.

library-management-system/
├─ output.png
├── main.cpp
└── README.md

💻 Example Output
text
===== LIBRARY MANAGEMENT SYSTEM =====
1. Add Book
2. Add DVD
3. Add Magazine
4. Check Out Item
5. Return Item
6. Display Item Details
0. Exit

Enter your choice between 0-6: 4
Enter the index of the item to check out (0-2): 0

Book Checked Out Successfully!


Note: This illustrates the intended checkout interaction. The current source code asks for item details before processing the menu selection, so that behavior should be corrected for the example to run as shown.

🔮 Future Improvements

The project can be improved by adding the following features:

Fix menu input handling so item details are requested only when adding a new item.
Add validation for menu choices and item indexes.
Track whether an item is currently checked out or available.
Improve item searching and detail display by title or index.
Replace the fixed-size array with std::vector for flexible storage.
Use smart pointers to manage dynamically allocated objects safely.
Add file handling or a database to save library records between program executions.
Add a destructor