#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Book
{
    string title;
    string author;
    float price;
};

const int MAX_BOOKS = 3;

int main()
{
    Book books[MAX_BOOKS];

    for (int i = 0; i < MAX_BOOKS; i++)
    {
        cout << "\n--- Enter data for book " << i + 1 << " ---" << endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Title: ";
        std::getline(std::cin, books[i].title);

        std::cout << "Author: ";
        std::getline(std::cin, books[i].author);

        std::cout << "Price: $";
        std::cin >> books[i].price;
    }

    cout << "\n===================================" << endl;
    cout << "         ALL BOOKS INVENTORY        " << endl;
    cout << "===================================" << endl;

    for (int i = 0; i < MAX_BOOKS; ++i) {
        cout << "Book " << i + 1 << ": " << books[i].title
                  << " by " << books[i].author
                  << " ($" << books[i].price << ")" << endl;
    }

    return 0;
}
