#include "town.h"
#include <vector>

town::town() {}
town::~town() {}

void town::set_size(int width, int height) {
    width_ = width;
    height_ = height;
    std::vector<bool> aux;
    for (size_t i = 0; i < width_; i++)
        aux.push_back(0);
    for (size_t i = 0; i < height_; i++)
        map_.push_back(aux);
}

bool town::set_initial_pos(int X, int Y) {
    if (X > 0 && Y > 0 && X < width_ && Y < height_ && !map_[X - 1][Y - 1]) {
        initial_pos_.first = X - 1;
        initial_pos_.second = Y - 1;
        return true;
    } else {
        return false;
    }
}

bool town::set_end_pos(int X, int Y) {
    if (X > 0 && Y > 0 && X < width_ && Y < height_ && !map_[X - 1][Y - 1]) {
        end_pos_.first = X - 1;
        end_pos_.second = Y - 1;
        return true;
    } else {
        return false;
    }
}

void town::print() {

    std::cout << "\t\t┌";
    for (size_t i = 0; i < width_; i++)
        std::cout << "─";
    std::cout << "┐\n";

    for (size_t i = 0; i < height_; i++) {
        std::cout << "\t\t|";
        for (size_t j = 0; j < width_; j++)
            if (initial_pos_.second == i && initial_pos_.first == j)
                std::cout << "ø";
            else if (end_pos_.second == i && end_pos_.first == j)
                std::cout << "×";
            else if (map_[i][j])
                std::cout << "█";
            else
                std::cout << " ";
        std::cout << "|\n";
    }

    std::cout << "\t\t└";
    for (size_t i = 0; i < width_; i++)
        std::cout << "─";
    std::cout << "┘\n";
}
