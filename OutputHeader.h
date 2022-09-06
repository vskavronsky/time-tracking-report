#pragma once

#include <string>

class OutputHeader
{
	public:
		OutputHeader()
		{
			this->name = "Name";
			this->date = "Month";
			this->totalHours = "Total hours";
		}

		const std::string& getName() const;
		void setName(const std::string& name);

		const std::string& getDate() const;
		void setDate(const std::string& date);

		const std::string& getTotalHours() const;
		void setTotalHours(const std::string& totalHours);

	private:
		std::string name;
		std::string date;
		std::string totalHours;
};
