/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbogad <jbogad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 02:35:42 by jbogad            #+#    #+#             */
/*   Updated: 2025/12/24 02:42:30 by jbogad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
typedef std::string string;

class Contact{

private:
    string firs_name;
    string last_name;
    string nickname;
    string phonenumber;
    string darkest_secret;

public:
    Contact();
    ~Contact();
    
};



#endif