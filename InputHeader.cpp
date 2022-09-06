#include "InputHeader.h"

const std::string& InputHeader::getName() const
{
	return this->name;
}

void InputHeader::setName(const std::string& name)
{
	this->name = name;
}

const std::string& InputHeader::getEmail() const
{
	return this->email;
}

void InputHeader::setEmail(const std::string& email)
{
	this->email = email;
}

const std::string& InputHeader::getDepartment() const
{
	return this->department;
}

void InputHeader::setDepartment(const std::string& department)
{
	this->department = department;
}

const std::string& InputHeader::getPosition() const
{
	return this->position;
}

void InputHeader::setPosition(const std::string& position)
{
	this->position = position;
}

const std::string& InputHeader::getProject() const
{
	return this->project;
}

void InputHeader::setProject(const std::string& project)
{
	this->project = project;
}

const std::string& InputHeader::getTask() const
{
	return this->task;
}

void InputHeader::setTask(const std::string& task)
{
	this->task = task;
}

const std::string& InputHeader::getDate() const
{
	return this->date;
}

void InputHeader::setDate(const std::string& date)
{
	this->date = date;
}

const std::string& InputHeader::getLoggedHours() const
{
	return this->loggedHours;
}

void InputHeader::setLoggedHours(const std::string& loggedHours)
{
	this->loggedHours = loggedHours;
}
