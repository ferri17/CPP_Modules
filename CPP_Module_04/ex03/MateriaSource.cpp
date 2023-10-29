/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:51:52 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/29 01:37:42 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
MateriaSource::MateriaSource( void ) {

	//std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < SLOTS_S; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &	other ) {

	//std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < SLOTS_S; i++)
		_materias[i] = NULL;
	*this = other;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const &	other) {
	
	//std::cout << "MateriaSource assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < SLOTS_S; i++)
		{
			if (this->_materias[i] != NULL)
				delete this->_materias[i];
			if (other._materias[i] != NULL)
				this->_materias[i] = other._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource( void ) {

	//std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < SLOTS_S; i++)
	{
		if (this->_materias[i] != NULL)
		{
			for (int j = i + 1; j < SLOTS_S; j++)
			{
				if (this->_materias[i] == this->_materias[j])
					this->_materias[j] = NULL;
			}
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void		MateriaSource::learnMateria( AMateria * m) {
	
	int	i;

	if (!m)
	{
		std::cout << "Unknown materia type, can't learn." << std::endl;
		return ;
	}
	for (i = 0; i < SLOTS_S; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			std::cout << "New " << m->getType() << " materia learnt on slot " << i << std::endl;
			break ;
		}
	}
	if (i >= SLOTS_S)
		std::cout << "Couldn't learn " << m->getType() << " materia. Space is full." << std::endl;
}

AMateria *	MateriaSource::createMateria( std::string const & type ) {
	
	for (int i = 0; i < SLOTS_S; i++)
	{
		if (this->_materias[i] != NULL)
		{
			if (type == this->_materias[i]->getType())
				return (this->_materias[i]->clone());
		}
	}
	std::cout << "Couldn't find materia in source materia." << std::endl;
	return (NULL);
}
