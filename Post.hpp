#ifndef _POST_
#define _POST_
#include <iostream>
#include<time.h>

class Post
{
public:
	Post(); //constructor
	Post(std::string name, std::string body); //constructor
	void setTitle(const std::string name); //takes in string and sets it to post name
	std::string getTitle() const; //returns currrent post name
	void setBody(const std::string body); //takes in string and sets it to post body
	std::string getBody() const; //returns current post body
	void getTimeStamp() const; //return timestamp of when post was created
	void displayPost()const; //prints entire post
private:
	std::string post_name;
	std::string post_body;
	time_t time_stamp; //time_t object to store time when post was made
};

#endif
