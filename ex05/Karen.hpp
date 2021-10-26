
#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
# include <string>

class Karen
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        void    non_complain(void);
        typedef void (Karen::*func)(void);
        func funcs[5];
    public:
        void    complain(std::string level);
        Karen(void);
        ~Karen(void);
};

#endif