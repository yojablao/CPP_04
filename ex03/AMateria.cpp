#include "AMateria.hpp"

AMateria::AMateria(std::string const & t) : type(t) {}
void AMateria::use(ICharacter& target){(void)target;}
std::string const &AMateria::getType() const { return type; }