#include "phonebook.hpp"

/*static int stoi( std::string s )
{
    int i;
    std::istringstream(s) >> i;
    return i;
}*/

std::string truncate(std::string str)
{
    if (str.length() > 10) // oppure > 8?
        return(str.substr(0, 9) + ".");
    else
        return (str);
}

void    print_(Contacts *catalogue, int index)
{
    std::cout << "First name    :" << catalogue[index].getFirstName() << std::endl;
    std::cout << "Last name     :" << catalogue[index].getLastName() << std::endl;
    std::cout << "Nickname      :" << catalogue[index].getNickName() << std::endl;
    std::cout << "Phone number  :" << catalogue[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret:" << catalogue[index].getDarkestSecret() << std::endl;
}

void    search_(Contacts *catalogue, int j)
{
    int         i;
    std::string input;

    if (j == 0)
    {
        std::cout << "There are no contacts" << std::endl << std::endl;
        return ;
    }
    i = 0;
    while (i++ < j)
    {
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "|" << std::setw(10) << i + 1;
        std::cout << "|" << std::setw(10) << truncate(catalogue[i].getFirstName());
        std::cout << "|" << std::setw(10) << truncate(catalogue[i].getLastName());
        std::cout << "|" << std::setw(10) << truncate(catalogue[i].getNickName());
        std::cout << "|" << std::endl;
    }
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Choose a contact by typing its number" << std::endl << std::endl;
    std::getline(std::cin, input);
    if (input[0] > '0' && input[0] < '9' && input[1] == '\0')
        print_(catalogue, stoi(input) - 1);
    std::cout << std::endl;
}

void    add_(Contacts **catalogue, int i)
{
    std::string str;

    std::cout << "Enter contact's first name" << std::endl;
    std::getline(std::cin, str);
    (*catalogue)[i].setFirstName(str);
    std::cout << "Enter contact's last name" << std::endl;
    std::getline(std::cin, str);
    (*catalogue)[i].setLastName(str);
    std::cout << "Enter contact's nickname" << std::endl;
    std::getline(std::cin, str);
    (*catalogue)[i].setNickName(str);
    std::cout << "Enter contact's phone number" << std::endl;
    std::getline(std::cin, str);
    (*catalogue)[i].setPhoneNumber(str);
    std::cout << "Enter contact's darkest secret" << std::endl;
    std::getline(std::cin, str);
    (*catalogue)[i].setDarkestSecret(str);
    std::cout << std::endl;
}

int main(void)
{
    Contacts    *catalogue;
    std::string cmd;
    int         i;

    i = 0;
    catalogue = new Contacts[8];
    while(1)
    {
        std::getline(std::cin, cmd);
        if (cmd == "SEARCH")
            search_(catalogue, i);
        else if (cmd == "ADD")
        {
            if (i < 8)
                add_(&catalogue, i++);
            else
                std::cout << "The contact list is full, can't add a new contact" << std::endl << std::endl;
        }
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "Invalid command" << std::endl << std::endl;
    }
    delete[] catalogue;
    return 0;
}

























