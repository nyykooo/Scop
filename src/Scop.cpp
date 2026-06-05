#include "../includes/headers.hpp"


// ######################## LIFE CYCLE ########################

Scop::Scop(int ac, char **av)
{
    if (ac != 2)
        throw Scop::InvalidInputException("Wrong number of arguments");

    _filename = std::string(av[1]);
    if (_filename.empty())
        throw Scop::InvalidInputException("File name cannot be empty");

    ParseFileName();
}

Scop::~Scop()
{

}

// -------------------------------------------------------------

// ######################## PARSER ########################

bool Scop::ParseFileName()
{
    std::regex r(R"(^[^\\]+\.obj$)");

    if (!std::regex_match(_filename, r))
        throw Scop::InvalidInputException("File name: '" + _filename + "' wrong format");

    std::ifstream file(_filename);
    if (!file.is_open())
        throw Scop::InvalidInputException("File name: '" + _filename + "' cannot be openned");

    ParseObjFile();

    return true;
}

bool Scop::ParseObjFile()
{
    std::cout << "Parsing .obj file" << std::endl;
    return true;
}

// -------------------------------------------------------------

// ######################## EXCEPTIONS ########################

const char *Scop::InvalidInputException::what() const throw()
{
	return (_message.c_str());
}

// -------------------------------------------------------------
