/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/20 00:46:09 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   base {
    protected:
        std::string _name;
    public:
        base( void ) {
            std::cout << "Base default constructor called\n";
        }
        base( std::string name ) : _name(name) {
            std::cout << "Base name constructor called with name " << _name << std::endl;
        }
        virtual void    print_hello( void ){
            std::cout << "Hello, from BASE CLASS I'm " << _name << ".\n";
        }
};

class   derived : public base {
    private:
        std::string _name;
    public:
        derived( void ) : base("default"){
            std::cout << "Derived default constructor called\n";
        }
        derived( std::string name ) : base(name), _name(name){}
        void    print_hello( void ){
            std::cout << "This is a weird message I'm " << _name << ".\n";
        }
};

int	main(void){
    
    derived derived;
    
    return (0);

}
