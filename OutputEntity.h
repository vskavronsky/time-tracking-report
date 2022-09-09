#pragma once

#include <vector>
#include <unordered_map>
#include <string>
#include <fstream>
#include <sstream>

class OutputEntity
{
	public:
		void addHours(const std::string& hours);
		const std::string& getFormattedDate();

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
		std::string formattedDate;
};
