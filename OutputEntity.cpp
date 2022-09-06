#include "OutputEntity.h"

void OutputEntity::addHours(const std::string& hours)
{
	int oldValue = std::stoi(this->totalHours);
	int delta = std::stoi(hours);
	
	int newValue = oldValue + delta;

	this->totalHours = std::to_string(newValue);
}

const std::string& OutputEntity::getFormattedDate()
{
	std::vector<std::string> row;

	enum Date
	{
		YEAR,
		MONTH,
		DAY
	};

	std::unordered_map<std::string, std::string> months =
	{
		{"1", "January"},
		{"2", "February"},
		{"3", "March"},
		{"4", "April"},
		{"5", "May"},
		{"6", "June"},
		{"7", "July"},
		{"8", "August"},
		{"9", "September"},
		{"10", "October"},
		{"11", "November"},
		{"12", "December"},
	};

	std::string item;
	char delimiter = '-';

	std::stringstream ss(this->date);

	while (std::getline(ss, item, delimiter))
	{
		row.push_back(item);
	}

	this->formattedDate = months[row[Date::MONTH]] + " " + row[Date::YEAR];

	return this->formattedDate;
}

const std::string& OutputEntity::getName() const
{
	return this->name;
}

void OutputEntity::setName(const std::string& name)
{
	this->name = name;
}

const std::string& OutputEntity::getDate() const
{
	return this->date;
}

void OutputEntity::setDate(const std::string& date)
{
	this->date = date;
}

const std::string& OutputEntity::getTotalHours() const
{
	return this->totalHours;
}

void OutputEntity::setTotalHours(const std::string& totalHours)
{
	this->totalHours = totalHours;
}
