#include <iostream>
#include <vector>
#include <memory>
#include "Shapes.h"

int main() {
    std::vector<std::shared_ptr<Shape>> shapes;

    // Автоматичні фігури
    shapes.push_back(std::make_shared<Square>(4));       // 4*4 = 16
    shapes.push_back(std::make_shared<Triangle>(5, 3));   // 0.5 * 5 * 3 = 7.5
    shapes.push_back(std::make_shared<Circle>(2));        // ? * 2^2 ? 12.5664

    std::cout << "Predefined shapes:\n";
    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->calculateArea() << "\n";
    }

    // Ручне введення
    int choice;
    while (true) {
        std::cout << "\nAdd a new shape to calculate area:\n";
        std::cout << "1. Square\n";
        std::cout << "2. Triangle\n";
        std::cout << "3. Circle\n";
        std::cout << "0. Exit\n";
        std::cout << "Your choice: ";
        std::cin >> choice;

        if (choice == 0) break;

        switch (choice) {
        case 1: {
            double side;
            std::cout << "Enter side length: ";
            std::cin >> side;
            auto square = std::make_shared<Square>(side);
            std::cout << "Area: " << square->calculateArea() << "\n";
            shapes.push_back(square);
            break;
        }
        case 2: {
            double base, height;
            std::cout << "Enter base: ";
            std::cin >> base;
            std::cout << "Enter height: ";
            std::cin >> height;
            auto triangle = std::make_shared<Triangle>(base, height);
            std::cout << "Area: " << triangle->calculateArea() << "\n";
            shapes.push_back(triangle);
            break;
        }
        case 3: {
            double radius;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            auto circle = std::make_shared<Circle>(radius);
            std::cout << "Area: " << circle->calculateArea() << "\n";
            shapes.push_back(circle);
            break;
        }
        default:
            std::cout << "Invalid option. Try again.\n";
        }
    }

    std::cout << "\nFinal list of all shapes' areas:\n";
    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->calculateArea() << "\n";
    }

    return 0;
}

