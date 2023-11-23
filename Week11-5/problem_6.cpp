#include <iostream>

class DynamicMemoryClass {
   public:
    DynamicMemoryClass(int size, int value = 0) {
        m_Size = size;
        m_Data = new int[m_Size];

        for (int i = 0; i < m_Size; i++)
            m_Data[i] = value;
    }
    ~DynamicMemoryClass() {
        delete[] m_Data;
        std::cout << "Deconstructing DynamicMemoryClass variable with m_Size " << m_Size << std::endl;
    }

    void display() {
        for (int i = 0; i < m_Size; i++)
            std::cout << m_Data[i] << " ";
        std::cout << std::endl;
    }

    int *at(unsigned int index) {
        if (index >= m_Size)
            return nullptr;
        else
            return m_Data + index;
    }

    int get(unsigned int index) {
        if (index >= m_Size)
            return 0;
        else
            return m_Data[index];
    }

   private:
    int *m_Data;
    int m_Size;
};

int main() {
    DynamicMemoryClass smth{5, 6};
    smth.display();

    *smth.at(2) = 5;

    smth.display();

    return 0;
}