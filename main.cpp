#include <iostream>
#include <string>

using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string duedate;

public:
    LibraryItem(string t, string a, string d)
    {
        title = t;
        author = a;
        duedate = d;
    }

    void setTitle(string newTitle)
    {
        title = newTitle;
    }

    void setAuthor(string newAuthor)
    {

        author = newAuthor;
    }
    void setDueDate(string newDueDate)
    {

        duedate = newDueDate;
    }

    string get_title()
    {

        return title;
    }

    string get_Author()
    {
        return author;
    }

    string get_DueDate()
    {

        return duedate;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    void disaplaydetails()
    {
        cout << "Title:" << title << endl;
        cout << "Author:" << author << endl;
        cout << "duedate:" << duedate << endl;
    }
};

class Book : public LibraryItem
{
private:
    int pagenumber;

public:
    Book(string t, string a, string d, int num) : LibraryItem(t, a, d)
    {

        pagenumber = num;
    }

    void set_pn(int num)
    {

        pagenumber = num;
    }

    int get_num()
    {
        return pagenumber;
    }

    void checkOut() override
    {
        cout << "Book Checked Out Successfully!" << endl;
    }

    void returnItem() override
    {
        cout << "Book Returned Successfully!" << endl;
    }
    void displayDetails() override
    {
        cout << "\n===== BOOK DETAILS =====\n";
        cout << "Title: " << get_title() << endl;
        cout << "Author: " << get_Author() << endl;
        cout << "Due Date: " << get_DueDate() << endl;
        cout << "Pages: " << pagenumber << endl;
    }
};

class DVD : public LibraryItem
{
private:
    string duration;

public:
    DVD(string t, string a, string d, string dur) : LibraryItem(t, a, d)
    {
        duration = dur;
    }
    void set_duration(string dur)
    {
        duration = dur;
    }
    string get_duration()
    {
        return duration;
    }
    void checkOut() override
    {
        cout << "DVD Checked Out Successfully!" << endl;
    }

    void returnItem() override
    {
        cout << "DVD Returned Successfully!" << endl;
    }
    void displayDetails() override
    {
        cout << "\nDVD Details\n";
        cout << "Title: " << get_title() << endl;
        cout << "Author: " << get_Author() << endl;
        cout << "Due Date: " << get_DueDate() << endl;
        cout << "Duration: " << get_duration() << endl;
    }
};

class Magazine : public LibraryItem
{
private:
    int issueNumber;

public:
    Magazine(string t, string a, string d, int in) : LibraryItem(t, a, d)
    {
        issueNumber = in;
    }
    void set_issueNumber(int in)
    {
        issueNumber = in;
    }
    int get_issueNumber()
    {
        return issueNumber;
    }
    void checkOut() override
    {
        cout << "Magazine checked out." << endl;
    }

    void returnItem() override
    {
        cout << "Magazine returned." << endl;
    }

    void displayDetails() override
    {
        cout << "\n===== MAGAZINE DETAILS =====\n";
        cout << "Title: " << get_title() << endl;
        cout << "Author: " << get_Author() << endl;
        cout << "Due Date: " << get_DueDate() << endl;
        cout << "Issue Number: " << get_issueNumber() << endl;
    }
};

int main()
{
    LibraryItem *libraryItem[100];

    int choice, count = 0;

    libraryItem[count++] = new Book("python", "john doe", "2023-12-31", 320);
    libraryItem[count++] = new DVD("Inception", "Christopher Nolan", "2023-12-31", "2h 28m");
    libraryItem[count++] = new Magazine(" Geographic", "Various Authors", "2023-12-31", 55);

    try
    {
        do
        {
            cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
            cout << "1. Add Book " << endl;
            cout << "2. Add DVD" << endl;
            cout << "3. Add Magzing" << endl;
            cout << "4. chek out item " << endl;
            cout << "5. return item" << endl;
            cout << "6. Display item details" << endl;
            cout << "0. Exit" << endl;

            cout << "Enter your choice between 0-6: ";
            cin >> choice;

            string t, a, dd;
            cout << "Enter the Title of Book : ";
            getline(cin >> ws, t);
            cout << "Enter the Author of Book : ";
            getline(cin >> ws, a);
            cout << "Enter the Due Date of Book : ";
            getline(cin >> ws, dd);

            switch (choice)
            {
            case 1:
            {

                int pagenumber;
                cout << "Enter the number of pages: ";
                cin >> pagenumber;
                libraryItem[count++] = new Book(t, a, dd, pagenumber);
                break;
            }
            case 2:
            {
                string duration;
                cout << "Enter the duration of the DVD: ";
                cin >> duration;
                libraryItem[count++] = new DVD(t, a, dd, duration);
                break;
            }

            case 3:
            {

                int issueNumber;
                cout << "Enter the issue number of the magazine: ";
                cin >> issueNumber;
                libraryItem[count++] = new Magazine(t, a, dd, issueNumber);
                break;
            }
            case 4:
            {
                int itemIndex;
                cout << "Enter the index of the item to check out (0-" << count - 1 << "): ";
                cin >> itemIndex;
                if (itemIndex >= 0 && itemIndex < count)
                {
                    libraryItem[itemIndex]->checkOut();
                }
                else
                {
                    cout << "Invalid index." << endl;
                }
                break;
            }

            case 5:
                int itemIndex;
                cout << "Enter the index of the item to return (0-" << count - 1 << "): ";
                cin >> itemIndex;
                if (itemIndex >= 0 && itemIndex < count)
                {
                    libraryItem[itemIndex]->returnItem();
                }
                else
                {
                    cout << "Invalid index." << endl;
                }
                break;
            case 6:
                string i;
                cout << "Enter the issue number of the magazine : ";
                cin >> i;
                for (int i = 0; i < count; i++)
                {
                    if (libraryItem[i]->get_title() == t)
                    {
                        libraryItem[i]->disaplaydetails();
                    }
                }
                break;
            }

        } while (choice != 0);
    }
    catch (...)
    {
        cout << " error occurred." << '\n';
    }

    return 0;
}