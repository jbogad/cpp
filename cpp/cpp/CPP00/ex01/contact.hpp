/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbogad <jbogad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 02:35:42 by jbogad            #+#    #+#             */
/*   Updated: 2026/01/11 11:35:17 by jbogad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
typedef std::string string;

class Contact{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string dark_secret;
public:
    Contact();
    ~Contact();
    void setFirstname(string firstname);
    void setLastname(string lastname);
    void setNickname(string nickname);
    void setPhoneNumber(string phone_number);
    void setDarkestSecret(string darkest_secret);

    string getFirstname() const;
    string getLastname() const;
    string getNickname() const;
    string getPhoneNumber() const;
    string getDarkestSecret() const;
};

#endif