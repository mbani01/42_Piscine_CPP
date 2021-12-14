/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani <mbani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 02:07:00 by mbani             #+#    #+#             */
/*   Updated: 2020/04/16 20:28:09 by mbani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout<<"<"<<this->name<<" ("<<this->type<<") > Braiinz  !!!!"<<std::endl;
}