#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Library {

    public:

    string title;
    string author;
    int ISBN;

};

class Borrower {

    public:

    string borrower_name;
    int borrower_ID;
    int days;
    string book_name;

};

int main () {

    Library details[10];
    int count = 0;
    int key, filter;
    string title_search, author_search;
    int ISBN_search;

    Borrower info[10];
    int counter = 0;

    string return_borrower;
    int return_ID;
    int return_days;
    string return_book;

    cout<<"-------------------------";
    cout<<endl<<"LIBRARY MANAGEMENT SYSTEM"<<endl;
    cout<<"-------------------------"<<endl;

    while (key != 0) {

        cout<<endl;
        cout<<"To store the book's information in the database (Press 1)"<<endl;
        cout<<"To search for books based on title, author, or ISBN (Press 2)"<<endl;
        cout<<"To issue a book from the library (Press 3)"<<endl;
        cout<<"To return a book (Press 4)"<<endl;
        cout<<"To exit (Press 0)"<<endl<<endl;


        cout<<"Press a button : ";
        cin>>key;

        switch (key) {

            case 1:
            cout<<"Enter the book's title : ";
            cin>>details[count].title;
            cout<<"Enter the author's name : ";
            cin>>details[count].author;
            cout<<"Enter ISBN : ";
            cin>>details[count].ISBN;

            cout<<endl<<"Information successfully stored in the database!";

            cout<<endl;

            count++;
            break;

            case 2:
            cout<<"The following are the filters based on which you can search for books : "<<endl<<endl;
            cout<<"Based on title (Press 1)"<<endl;
            cout<<"Based on author (Press 2)"<<endl;
            cout<<"Based on ISBN (Press 3)"<<endl<<endl;

            cout<<"Press a button : ";
            cin>>filter;

            if (filter == 1) {
                cout<<endl;
                cout<<"The selected option is title!"<<endl<<endl;

                cout<<"Enter the title of the book you are looking for : ";
                cin>>title_search;

                for (int i=0; i < count; i++) {
                    if (title_search == details[i].title) {
                        cout<<endl;
                        cout<<"The book you are looking for is found, the following are the book details : "<<endl<<endl;
                        cout<<"Title : "<<details[i].title<<endl;
                        cout<<"Author : "<<details[i].author<<endl;
                        cout<<"ISBN : "<<details[i].ISBN<<endl;

                        break;
                    }

                    else {
                        cout<<"Sorry, the book doesn't exist in the database!";
                    }
                }
            }

            if (filter == 2) {
                cout<<endl;
                cout<<"The selected option is author!"<<endl<<endl;

                cout<<"Enter the name of the author of the book you are looking for : ";
                cin>>author_search;

                for (int i=0; i < count; i++) {
                    if (author_search == details[i].author) {
                        cout<<endl;
                        cout<<"The book you are looking for is found, the following are the book details : "<<endl<<endl;
                        cout<<"Title : "<<details[i].title<<endl;
                        cout<<"Author : "<<details[i].author<<endl;
                        cout<<"ISBN : "<<details[i].ISBN<<endl;

                        break;
                    }

                    else {
                        cout<<"Sorry, the book doesn't exist in the database!";
                    }
                }
            }

            if (filter == 3) {
                cout<<endl;
                cout<<"The selected option is ISBN!"<<endl<<endl;;

                cout<<"Enter the ISBN of the book you are looking for : ";
                cin>>ISBN_search;

                for (int i=0; i < count; i++) {
                    if (ISBN_search == details[i].ISBN) {
                        cout<<endl;
                        cout<<"The book you are looking for is found, the following are the book details : "<<endl<<endl;
                        cout<<"Title : "<<details[i].title<<endl;
                        cout<<"Author : "<<details[i].author<<endl;
                        cout<<"ISBN : "<<details[i].ISBN<<endl;

                        cout<<endl;
                        break;
                    }

                    else if (ISBN_search != details[i].ISBN) {
                        cout<<"Sorry, the book doesn't exist in the database!";
                    }
                }
            }

            break;

            case 3:
            cout<<"Enter your name : ";
            cin>>info[counter].borrower_name;
            cout<<"Enter your ID : ";
            cin>>info[counter].borrower_ID;
            cout<<"Enter the number of days you are issuing book for : ";
            cin>>info[counter].days;
            cout<<"Enter the name of the book : ";
            cin>>info[counter].book_name;

            for (int i = 0; i < count; i++) {
                if (info[counter].book_name == details[i].title) {
                    cout<<endl;
                    cout<<"The book exists!"<<endl;
                    cout<<endl;

                    cout<<"Name of the borrower : "<<info[counter].borrower_name<<endl;
                    cout<<"Borrower's ID : "<<info[counter].borrower_ID<<endl;
                    cout<<"No. of days (book is issued for) : "<<info[counter].days<<endl;
                    cout<<"Title of th book : "<<details[i].title<<endl;
                    cout<<"Author of the book : "<<details[i].author<<endl;
                    cout<<"ISBN of the book : "<<details[i].ISBN<<endl<<endl;
                    cout<<"Book issued successfully, by "<<info[counter].borrower_name<<"!"<<endl;
                    break;
                }

                else if (info[counter].book_name != details[i].title) {
                    cout<<"No such book exists here, try searching again!"<<endl;
                }
            }

            counter++;
            break;

            case 4:
            cout<<"Enter your name : ";
            cin>>return_borrower;
            cout<<"Enter your ID : ";
            cin>>return_ID;
            cout<<"Enter the book's name : ";
            cin>>return_book;
            cout<<"Enter the no. days the book was with you : ";
            cin>>return_days;

            for (int i = 0; i < counter; i++) {
                if (return_book == info[i].book_name) {
                    for (int j = 0; j < count; j++) {
                        if (info[i].book_name == details[j].title) {
                            cout<<endl;
                            cout<<"The book was issued and is to be returned!"<<endl;
                            cout<<endl;
                            cout<<"Name of the borrower : "<<return_borrower<<endl;
                            cout<<"Borrower's ID : "<<return_ID<<endl;
                            cout<<"No. of days (book was actually issued for) : "<<info[i].days<<endl;
                            cout<<"No. of days (book was with you) : "<<return_days<<endl;

                            if (return_days <= info[i].days) {
                                cout<<"On (or before) time, so no fine is imposed against you!"<<endl;
                            }

                            else if (return_days > info[i].days) {
                                cout<<"Late return, fine of 10 Rupees is imposed against you!"<<endl;
                            }
                            cout<<"Title of th book : "<<details[j].title<<endl;
                            cout<<"Author of the book : "<<details[j].author<<endl;
                            cout<<"ISBN of the book : "<<details[j].ISBN<<endl<<endl;
                            cout<<"The book is returned successfully by, "<<return_borrower<<"!"<<endl;
                        }
                    }
                }
            }

            break;

            case 0:
            cout<<endl<<"Thanks for visiting!"<<endl;
            break;

            default :
            cout<<endl<<"Invalid input, try again!"<<endl;
            break;

        }
    }

    return 0;
}