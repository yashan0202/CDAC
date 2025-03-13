// 3. Book Class with Bill Calculation and Discount

#include <iostream>
using namespace std;

class Book {
    int book_no;
    string book_name, author;
    int edition, qty;
    float price, bill, discount, netbill;

public:
    void getData() {
        cout << "Enter Book No: ";
        cin >> book_no;
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, book_name);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Edition: ";
        cin >> edition;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> qty;

        bill = price * qty;
        discount = 0.05 * bill;
        netbill = bill - discount;
    }

    void displayData() {
        cout << "\nBook Details:\n";
        cout << "Book No: " << book_no << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Author: " << author << endl;
        cout << "Edition: " << edition << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << qty << endl;
        cout << "Total Bill: $" << bill << endl;
        cout << "Discount (5%): $" << discount << endl;
        cout << "Net Bill: $" << netbill << endl;
    }
};

int main() {
    Book b1;
    b1.getData();
    b1.displayData();
    return 0;
}
