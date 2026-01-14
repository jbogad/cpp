/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbogad <jbogad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 00:40:10 by jbogad            #+#    #+#             */
/*   Updated: 2026/01/11 11:38:17 by jbogad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <string>
# include <cctype> //para isdigit, isalpha
# include <iostream>
# include <cstdlib> //para exit, malloc 

class PhoneBook {

private:
	Contact	contacts[8];
	int	current_id;
	int	nb_contacts;

public:
	PhoneBook();
	~PhoneBook();
	void	add_contact();
	void	search_contact();
};



#endif