#include "Post.hpp"

Post::Post() 
{
	post_name = ""; //sets post name to empty
	post_body = ""; //sets post body to empty
	time(&time_stamp); //creates time stamp object and stores it in time_t time_stamp object
}

Post::Post(std::string name, std::string body)
{
	post_name = name; //sets post name to string name
	post_body = body; //sets post body to string body
	time(&time_stamp); //creates time stamp object and stores it in time_t time_stamp object
}

void Post::setTitle(const std::string name)
{
	post_name = name;
}

std::string Post::getTitle() const
{
	return post_name;
}

void Post::setBody(const std::string body)
{
	post_body = body;
}

std::string Post::getBody() const
{
	return post_body;
}

void Post::getTimeStamp() const
{
	struct tm* timeptr; //create pointer to time struct
	timeptr = localtime(&time_stamp); //convert current time_t object stored to local time 
	std::cout << asctime(timeptr); //print the converted time_t object in a specific format
}

void Post::displayPost() const
{
	//print post in specific format given to by Prof.
	std::cout << getTitle() << " posted at ";
	getTimeStamp();
	std::cout << ":" << std::endl << getBody() << std::endl;
}
