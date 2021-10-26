
#include "Karen.hpp"


Karen::Karen(void)
{ 
    Karen::funcs[0] = &Karen::debug;
    Karen::funcs[1] = &Karen::info;
    Karen::funcs[2] = &Karen::warning;
    Karen::funcs[3] = &Karen::error;
    Karen::funcs[4] = &Karen::non_complain;
}

Karen::~Karen(void){}

void    Karen::non_complain(void)
{
    std::cout << "Error: unacceptable level." << std::endl;
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my " << \
    "7XL-double-cheese-triple-pickle-special-ketchup burger. " << \
    "I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost " << \
    "more money. You don’t put enough! If you did I would not " << \
    "have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon " << \
    "for free. I’ve been coming here for years and you just " << \
    "started working here last month."<< std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

 void    Karen::complain(std::string level)
{
    int i = 0;
    std::string lvl[4];

	lvl[0] = "DEBUG";
	lvl[1] = "INFO";
	lvl[2] = "WARNING";
	lvl[3] = "ERROR";
    while (i < 4 && level.compare(lvl[i]))
        i++;
    (this->*funcs[i])();
}



