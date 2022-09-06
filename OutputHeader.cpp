#include "OutputHeader.h"

const std::string& OutputHeader::getName() const
{
	return this->name;
}

void OutputHeader::setName(const std::string& name)
{
	this->name = name;
}

const std::string& OutputHeader::getDate() const
{
	return this->date;
}

void OutputHeader::setDate(const std::string& date)
{
	this->date = date;
}

const std::string& OutputHeader::getTotalHours() const
{
	return this->totalHours;
}

void OutputHeader::setTotalHours(const std::string& totalHours)
{
	this->totalHours = totalHours;
}
