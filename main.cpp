#include "includes/headers.hpp"

int main(int ac, char **av)
{
    try
    {
        Scop *program = new Scop(ac, av);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Fatal error: " << e.what() << std::endl;
    }
}