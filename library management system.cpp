#include <iostream>
using namespace std;

// Insert the information : student id,student name,course enrolled,book code,author,book name.

class lib
{
protected:
    int std_id, book_code;
    string name, course, author, book_name, issue_date, submit_date, ac_submit_date;

public:
    void student_data();
    void show();
    void book_data();
    void fine();
};

class rec
{

protected:
    

public:
    int rec_book_id;
    string rec_book_name, rec_author;
    void inputrec();
    void showrec();
} r[2];
;

class check :   public rec
{
public:
    void search(int);
};

void rec::inputrec()

{
    cout << "\nEnter the book id :";
    cin >> rec_book_id;
    cout << "\nEnter the book name : ";
    getline(cin,rec_book_name,'.');
    cout << "\nEnter the name of the author : ";
    getline(cin,rec_author,'.');
    
}

void check ::search(int x)
{
    cout << "\nEnter the code of the book to search";
    for (int i = 0; i < 2; i++)
    {
        if (r[i].rec_book_id == x)
        {
            cout << "\nThe book is present" << endl;
            cout << "\nThe whole information of that record is as follows : " << endl;
            r[i].showrec();
            break;
        }
    }
}

void rec ::showrec()
{
    cout << "The book id is : " << rec_book_id << endl
         << "The book name is : "
         << rec_book_name << endl
         << "The authour is : "
         << rec_author << endl;
}

void test()
{
    for (int i = 0; i < 2; i++)
    {
        r[i].inputrec();
    }
    int a;
    cout << "If you want to search the book from record enter 1 otherwise 0: ";
    cin >> a;
    int x;
    check c;
    cout << "Enter the code of the book to search: ";
    cin >> x;
    c.search(x);

    // r[0]={123,"my name","tara"};
    // r[0].showrec();

    // r[1]={121,"your name","tanjo"};
    // r[1].showrec();
}

void lib ::student_data()
{
    cout << "\t*****************ENTER THE STUDENT DATA********************" << endl;

    cout << "\n\nEnter the student id :";
    cin >> std_id;

    cout << "\n\nEnter the name of the student :";
    // cin >> name;
    getline(cin, name, '.');

    cout << "\n\nEnter the course : ";
    // cin >> course;
    getline(cin, course, '.');
}

void lib ::book_data()
{
    cout << "\n\t ******************Enter the book data***************** " << endl;

    cout << "\n\nEnter the book code : ";
    cin >> book_code;

    cout << "\n\nEnter the book name : ";
    // cin >> book_name;
    getline(cin, book_name, '.');

    cout << "\n\nEnter the name of the author : ";
    // cin >> author;
    getline(cin, author, '.');

    cout << "\n\nEnter the date of   book issued in dd/mm/yyyy format: ";
    cin >> issue_date;

    cout << "\n\nEnter the last date of submission : ";
    cin >> submit_date;

    cout << "\nThe submited date of the book : ";
    cin >> ac_submit_date;
}

void lib ::show()
{

    cout << "\n\t********************The data you entered is******************* \n ";

    cout << "\nThe student id : " << std_id << endl;
    cout << "\nThe student name : " << name << endl;
    cout << "\nThe student course : " << course << endl;
    cout << "\nThe book name : " << book_name << endl;
    cout << "\nThe book code : " << book_code << endl;
    cout << "\nThe book author name : " << author << endl;

    cout << "\nThe book issue date: " << issue_date << endl;
    cout << "\nThe book expected return date: " << submit_date << endl;
    cout << "\nThe book  return date:" << ac_submit_date << endl;
}
void lib ::fine()
{
    int i = 0, days;
    cout << "\nIf the date of submition is more than the  the expected date enter 1 to calculate" << endl;
    cin >> i;

    if (i == 1)

    {
        cout << "\n\tEnter the number of delayed days :" << endl;
        cin >> days;

        cout << "The fine format is : 5 rs for each delayed day" << endl;

        int pay = days * 5;
        cout << "\n\tThe fine student have to pay is : " << pay<<endl;
    }
    else
    {
        cout << "\n\tThe student does not have to pay any fine " << endl;
    }
}

int main()
{
    lib l;
    l.student_data();
    l.book_data();
    l.fine();
    l.show();
    test();

    return 0;
}