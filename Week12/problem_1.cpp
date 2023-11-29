#include <iostream>

class Book {
   public:
    Book(std::string title, std::string author, int year)
        : m_Title(title), m_Author(author), m_Year(year) {}

    Book(const Book& other) {
        m_Title = other.m_Title;
        m_Author = other.m_Author;
        m_Year = other.m_Year;
    }

    Book(const Book&& other) {
        m_Title = other.m_Title;
        m_Author = other.m_Author;
        m_Year = other.m_Year;
    }

    friend std::ostream& operator<<(std::ostream& fmt, const Book& book) {
        fmt << "Book: " << book.m_Title
            << "\n\tauthor: " << book.m_Author
            << "\n\tpublication year: " << book.m_Year
            << std::endl;

        return fmt;
    }

   private:
    std::string m_Title;
    std::string m_Author;
    int m_Year;
};

int main() {
    Book book("The Lost World", "Arthur Canon Doyle", 2016);
    Book other(book);

    Book smth(Book("I don't know", " the author nor the publication year", 0));

    std::cout << book << other << smth;
    
    return 0;
}