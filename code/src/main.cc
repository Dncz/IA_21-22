#include <iostream>
#include "town.h"

#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */
#define BOLDBLACK "\033[1m\033[30m"   /* Bold Black */
#define BOLDRED "\033[1m\033[31m"     /* Bold Red */
#define BOLDGREEN "\033[1m\033[32m"   /* Bold Green */
#define BOLDYELLOW "\033[1m\033[33m"  /* Bold Yellow */
#define BOLDBLUE "\033[1m\033[34m"    /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */
#define BOLDCYAN "\033[1m\033[36m"    /* Bold Cyan */
#define BOLDWHITE "\033[1m\033[37m"   /* Bold White */

int main(void) {
    int width = 0, height = 0;
    system("clear");
    while (width <= 0 && height <= 0) {
        std::cout << YELLOW << "\n--------------------------------------------------------\n"
                  << RESET;
        std::cout << BOLDCYAN << "\n\tIntroduzca la altura y la anchura del mapa.\n";
        std::cout << YELLOW << "\n--------------------------------------------------------\n"
                  << RESET;
        std::cout << GREEN << "\n\t Altura >>\t" << BOLDGREEN << RESET;
        std::cin >> width;
        std::cout << GREEN << "\n\t Anchura >>\t" << BOLDGREEN << RESET;
        std::cin >> height;
        std::cout << RESET;
    }
    town mapa;
    mapa.set_size(width, height);
    system("clear");
    int init_pos_x = 0, init_pos_y = 0;
    bool ok = false;
    while (init_pos_x <= 0 && init_pos_y <= 0 && ok == false) {
        std::cout << YELLOW << "\n--------------------------------------------------------\n"
                  << RESET;
        std::cout << BOLDCYAN << "\n\tIntroduzca la posicion X e Y de inicio.\n";
        std::cout << YELLOW << "\n--------------------------------------------------------\n"
                  << RESET;
        std::cout << GREEN << "\n\t Pos X >>\t" << BOLDGREEN << RESET;
        std::cin >> init_pos_x;
        std::cout << GREEN << "\n\t Pos Y >>\t" << BOLDGREEN << RESET;
        std::cin >> init_pos_y;
        std::cout << RESET;
        ok = mapa.set_initial_pos(init_pos_x, init_pos_y);
    }
    system("clear");
    int end_pos_x = 0, end_pos_y = 0;
    ok = false;
    while (end_pos_x <= 0 && end_pos_y <= 0 && ok == false) {
        std::cout << YELLOW << "\n--------------------------------------------------------\n"
                  << RESET;
        std::cout << BOLDCYAN << "\n\tIntroduzca la posicion X e Y de destino.\n";
        std::cout << YELLOW << "\n--------------------------------------------------------\n"
                  << RESET;
        std::cout << GREEN << "\n\t Pos X >>\t" << BOLDGREEN << RESET;
        std::cin >> end_pos_x;
        std::cout << GREEN << "\n\t Pos Y >>\t" << BOLDGREEN << RESET;
        std::cin >> end_pos_y;
        std::cout << RESET;
        ok = mapa.set_end_pos(end_pos_x, end_pos_y);
    }

    system("clear");
    mapa.print();
}
