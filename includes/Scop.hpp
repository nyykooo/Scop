#ifndef SCOP_HPP
# define SCOP_HPP

class Scop {
    private:
        std::string _filename;
    public:
        Scop(int ac, char **av);
        ~Scop();

        bool ParseFileName();

        bool ParseObjFile();

        class InvalidInputException: public std::exception {
            private:
                std::string _message;
            public:
                InvalidInputException(const std::string &message) : _message("Invalid Input >> " + message) {};
                virtual ~InvalidInputException() throw() {};
                const char *what() const throw(); 
        };
};

#endif