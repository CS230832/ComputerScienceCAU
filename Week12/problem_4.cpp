#include <iostream>

class Message {
   public:
    Message(std::string msg)
        : m_Message(msg) {}

    Message(const Message &&other)
        : m_Message(other.m_Message) {}

    void set(std::string msg) { m_Message = msg; }

    friend std::ostream &operator<<(std::ostream &fmt, const Message &msg) {
        fmt << msg.m_Message;
        return fmt;
    }

   private:
    std::string m_Message;
};

int main() {
    Message msg("Hello, World!");
    Message other = std::move(msg);

    std::cout << msg << std::endl
              << other << std::endl << std::endl;

    msg.set("Hi");

    std::cout << msg << std::endl
              << other << std::endl << std::endl;
              
    return 0;
}