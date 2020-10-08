#include <string.h>
#include <iostream>

class String {
   private:
    char* data;

   public:
    String(char* s) : data(s) {}

    char* get() {
        return this->data;
    }

    bool operator==(String comp) {
        for (int i = 0; i < strlen(comp.data); i++)
            if (this->data[i] != comp.data[i])
                return false;
        return true;
    }
};

void check(String a, String b) {
    std::cout << "\"" << a.get() << "\" is " << ((a == b) ? "equal" : "not equal") << " to \"" << b.get() << "\".\n";
}

int main() {
    String a = "Hello", b = "Hello";
    check(a, b);
    b = "Helo";
    check(a, b);
}
