#include <iostream>
#include <chrono>

class Timer {
   public:
    Timer() {}

    void start() {
        m_Start = std::chrono::high_resolution_clock::now();
    }

    void stop() {
        m_End = std::chrono::high_resolution_clock::now();
    }

    double getElapsedDuration() {
        std::chrono::duration<double> duration = m_End - m_Start;
        return duration.count();
    }

   protected:
    std::chrono::system_clock::time_point m_Start;
    std::chrono::system_clock::time_point m_End;
};

class CookingTimer : public Timer {
   public:
    void begin() {
        start();
    }
    void end() {
        stop();
    }
    double elapsed() {
        return getElapsedDuration();
    }
};

class RunningTimer {
   public:
    void begin() {
        m_Timer.start();
    }
    void end() {
        m_Timer.stop();
    }
    double elapsed() {
        return m_Timer.getElapsedDuration();
    }

   private:
    Timer m_Timer;
};

int main() {
    Timer t;
    CookingTimer c;
    RunningTimer r;
    t.start();
    c.begin();
    r.begin();

    for (unsigned int i = 0; i < 10000; i++)
        ;

    t.stop();
    c.stop();
    r.end();

    std::cout << t.getElapsedDuration() << std::endl
              << c.elapsed() << std::endl
              << r.elapsed() << std::endl;

    return 0;
}