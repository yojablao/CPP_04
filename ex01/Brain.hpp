#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain
{
    std::string ideas[100];

    public:
    Brain();
    Brain(const Brain &o);
    Brain &operator=(const Brain &o);
    const std::string& getIdea(unsigned int i) const;
    void setIdea(int index, const std::string& idea);
    ~Brain();
};
#endif