#include "Account.hpp"

Account::Account()
{
	username = ""; //sets username to empty
	password = ""; //sets password to empty
	all_posts.clear(); //clears vector of pointers to post class
}

Account::Account(std::string name, std::string word)
{
	username = name; //sets username to string name
	password = word; //sets username to string word
	all_posts.clear(); //clears vectors of pointers to post class
}

void Account::setUsername(const std::string name)
{
	username = name;
}

std::string Account::getUsername() const
{
	return username;
}

void Account::setPassword(const std::string word)
{
	password = word;
}

std::string Account::getPassword() const
{
	return password;
}

bool Account::addPost(const std::string name, const std::string word)
{
	if (name != "" && word != "") //if username and post are valid inputs then enter for loop
	{
		all_posts.push_back(new Post(name, word)); //creates new pointer object in vector, to the post class, with the parameters passed into method
		return true;
	}
	else
		return false;
}

void Account::viewPosts() const
{
	for(int i = 0; i < all_posts.size(); i++) //cycles through vector of pointer objects
	{
		all_posts[i]->displayPost(); //for each vector pointer, call the display method
		std::cout << std::endl;
	}
}
