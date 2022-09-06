#include "InputEntity.h"

void InputEntity::parseDate()
{
	std::string item;
	char delimiter = '-';

	std::stringstream ss(this->date);

	while (std::getline(ss, item, delimiter))
	{
		this->row.push_back(item);
	}
}

const std::string& InputEntity::getYear()
{
	this->parseDate();
	return row[Date::YEAR];
}

const std::string& InputEntity::getMonth()
{
	this->parseDate();
	return row[Date::MONTH];
}

const std::string& InputEntity::getDay()
{
	this->parseDate();
	return row[Date::DAY];
}

const std::string& InputEntity::getName() const
{
	return this->name;
}

void InputEntity::setName(const std::string& name)
{
	this->name = name;
}

const std::string& InputEntity::getEmail() const
{
	return this->email;
}

void InputEntity::setEmail(const std::string& email)
{
	this->email = email;
}

const std::string& InputEntity::getDepartment() const
{
	return this->department;
}

void InputEntity::setDepartment(const std::string& department)
{
	this->department = department;
}

const std::string& InputEntity::getPosition() const
{
	return this->position;
}

void InputEntity::setPosition(const std::string& position)
{
	this->position = position;
}

const std::string& InputEntity::getProject() const
{
	return this->project;
}

void InputEntity::setProject(const std::string& project)
{
	this->project = project;
}

const std::string& InputEntity::getTask() const
{
	return this->task;
}

void InputEntity::setTask(const std::string& task)
{
	this->task = task;
}

const std::string& InputEntity::getDate() const
{
	return this->date;
}

void InputEntity::setDate(const std::string& date)
{
	this->date = date;
}

const std::string& InputEntity::getLoggedHours() const
{
	return this->loggedHours;
}

void InputEntity::setLoggedHours(const std::string& loggedHours)
{
	this->loggedHours = loggedHours;
}
