#include <iostream>
#include <fstream>

class FileHandler {
   public:
    FileHandler(const char *path) : m_Path(path) {
        m_File.open(path, std::ios_base::in | std::ios_base::out);
    }

    ~FileHandler() {
        m_File.close();

        std::cout << "Closing file with path: " << m_Path << std::endl;
    }

    friend void operator<<(FileHandler &file, const char *str) {
        file.m_File << str;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const FileHandler &file) {
        fmt << file.m_File.rdbuf();
        return fmt;
    }

    const char *getPath() {
        return m_Path;
    }

   private:
    std::fstream m_File;
    const char *m_Path;
};

int main() {
    FileHandler text{"./test.txt"};

    std::cout << text << std::endl;

    // text << "-- HI";
    return 0;
}