#include "car.h"
#include <vector>
#include <iostream>

class town {
public:
    town();
    ~town();

    void set_size(int, int);
    bool set_initial_pos(int, int);
    bool set_end_pos(int, int);

    void print();

    bool solve();

private:
    std::vector<std::vector<bool>> map_; // 0 = Clear  -  1 = Obstacle
    std::pair<int, int> initial_pos_;
    std::pair<int, int> end_pos_;
    int width_;
    int height_;
    car car_;
};
