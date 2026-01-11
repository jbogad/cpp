/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbogad <jbogad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 00:38:48 by jbogad            #+#    #+#             */
/*   Updated: 2026/01/11 11:35:17 by jbogad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}

string Contact::getFirstname() const
{
    return this->first_name;
}

string Contact::getLastname() const
{
    return this->last_name;
}

string Contact::getNickname() const
{
    return this->nickname;
}

string Contact::getPhoneNumber() const
{
    return this->number;
}

string Contact::getDarkestSecret() const
{
    return this->dark_secret;
}

void Contact::setFirstname(string firstname)
{
    this->first_name = firstname;
}

void Contact::setLastname(string lastname)
{
    this->last_name = lastname;
}

void Contact::setNickname(string nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(string phone_number)
{
    this->number = phone_number;
}

void Contact::setDarkestSecret(string darkest_secret)
{
    this->dark_secret = darkest_secret;
}