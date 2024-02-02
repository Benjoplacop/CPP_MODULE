/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:16:36 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 12:16:37 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class   Zombie {
    private:
        std::string _name;

    public:
        Zombie(const std::string& zombieName);
        Zombie(void);
        ~Zombie(void);
        void    setName(std::string name);
        void    announce();
};

#endif
