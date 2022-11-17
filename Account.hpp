#ifndef _ACCOUNT_
#define _ACCOUNT_

#include "Post.hpp"
#include<iostream>
#include<vector>

class Account
{
public:
	Account(); //constructor
	Account(std::string name, std::string word); //constructor
	void setUsername(const std::string name); //taking in string and setting it as the username
	std::string getUsername() const; //return current username
	void setPassword(const std::string word); //taking in string and setting it as the password
	std::string getPassword() const; //return current password
	bool addPost(const std::string name, const std::string word); //takes in post parameters and creates post
	void viewPosts() const; //view all posts from account
private:
	std::string username;
	std::string password;
	std::vector<Post*> all_posts; //vecotr of pointer objects to post class
};

#endif
