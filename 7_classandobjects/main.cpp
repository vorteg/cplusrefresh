#include <iostream>

class Rectangulo {
    private:
        int base;
        int altura;

    public:
        Rectangulo(int b, int a) : base(b), altura(a) {}

        int area() {
            return base * altura;
        }
};

int main() {
    Rectangulo rect(5, 3);
    std::cout << "Área del rectángulo: " << rect.area() << std::endl;
    return 0;
}