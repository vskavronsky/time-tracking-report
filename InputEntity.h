#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <sstream>

class InputEntity
{
	public:
		const std::string& getYear();
		const std::string& getMonth();
		const std::string& getDay();
		
		const std::string& getName() const;
		void setName(const std::string& name);

		const std::string& getEmail() const;
		void setEmail(const std::string& name);

		const std::string& getDepartment() const;
		void setDepartment(const std::string& name);

		const std::string& getPosition() const;
		void setPosition(const std::string& name);

		const std::string& getProject() const;
		void setProject(const std::string& name);

		const std::string& getTask() const;
		void setTask(const std::string& name);

		const std::string& getDate() const;
		void setDate(const std::string& name);

		const std::string& getLoggedHours() const;
		void setLoggedHours(const std::string& name);

	private:
		std::string name;
		std::string email;
		std::string department;
		std::string position;
		std::string project;
		std::string task;
		std::string date;
		std::string loggedHours;

		std::vector<std::string> row;
		enum Date
		{
			YEAR,
			MONTH,
			DAY
		};

		void parseDate();
};
