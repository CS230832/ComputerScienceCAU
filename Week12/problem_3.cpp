#include <iostream>
#include <cstring>

class Book {
   public:
    Book(std::string title, std::string author, int year, char* review)
        : m_Title(title), m_Author(author), m_Year(year) {
        unsigned int size = std::strlen(review);
        m_Review = new char[size];
        for (unsigned int i = 0; i < size; i++)
            m_Review[i] = review[i];
    }

    Book(const Book& other) {
        m_Title = other.m_Title;
        m_Author = other.m_Author;
        m_Year = other.m_Year;
        unsigned int size = std::strlen(other.m_Review);
        m_Review = new char[size];
        for (unsigned int i = 0; i < size; i++)
            m_Review[i] = other.m_Review[i];
    }

    Book(const Book&& other) {
        m_Title = other.m_Title;
        m_Author = other.m_Author;
        m_Year = other.m_Year;
        unsigned int size = std::strlen(other.m_Review);
        m_Review = new char[size];
        for (unsigned int i = 0; i < size; i++)
            m_Review[i] = other.m_Review[i];
    }

    ~Book() {
        delete[] m_Review;
    }

    void setReview(char* review) {
        unsigned int size = std::strlen(m_Review);
        for (unsigned int i = 0; i < size; i++)
            m_Review[i] = review[i];
    }

    friend std::ostream& operator<<(std::ostream& fmt, const Book& book) {
        fmt << "Book: " << book.m_Title
            << "\n\tauthor: " << book.m_Author
            << "\n\tpublication year: " << book.m_Year
            << "\n\treview: " << book.m_Review
            << std::endl;

        return fmt;
    }

   private:
    std::string m_Title;
    std::string m_Author;
    int m_Year;

    char* m_Review;
};

int main() {
    char review1[] = "Review for Book 1";
    Book book1("Title 1", "Author 1", 2022, review1);
    Book book2 = book1;

    char newReview[] = "for Book2";
    book2.setReview(newReview);

    std::cout << "Book 1:\n"
              << book1 << std::endl;
    std::cout << "Book 2:\n"
              << book2 << std::endl;

    return 0;
}