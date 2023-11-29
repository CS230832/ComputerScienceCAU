#include <iostream>
#include <cstring>

class Book {
   public:
    Book(std::string title, std::string author, int year, char* review)
        : m_Title(title), m_Author(author), m_Year(year), m_Review(review) {}

    Book(const Book& other) {
        m_Title = other.m_Title;
        m_Author = other.m_Author;
        m_Year = other.m_Year;
        m_Review = other.m_Review;
    }

    Book(const Book&& other) {
        m_Title = other.m_Title;
        m_Author = other.m_Author;
        m_Year = other.m_Year;
        m_Review = other.m_Review;
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