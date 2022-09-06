#include "ReportParser.h"

OutputReportEntity ReportParser::parse(const std::string fileInputPath, char delimiter)
{
	std::ifstream fin;
	std::string line, item;
	std::vector<std::string> row;

	InputHeader inputHeader;
	InputEntity inputEntity;

	std::vector<InputEntity> inputEntities;

	fin.open(fileInputPath);

	for (int i = 0; std::getline(fin, line); ++i)
	{
		row.clear();

		std::stringstream ss(line);

		while (std::getline(ss, item, delimiter))
		{
			row.push_back(item);
		}

		int columnCount = row.size();
		int step = 1;

		if (i == 0)
		{
			inputHeader.setLoggedHours(row[columnCount -= step]);
			inputHeader.setDate(row[columnCount -= step]);
			inputHeader.setTask(row[columnCount -= step]);
			inputHeader.setProject(row[columnCount -= step]);
			inputHeader.setPosition(row[columnCount -= step]);
			inputHeader.setDepartment(row[columnCount -= step]);
			inputHeader.setEmail(row[columnCount -= step]);
			inputHeader.setName(row[columnCount -= step]);
		}
		else
		{
			inputEntity.setLoggedHours(row[columnCount -= step]);
			inputEntity.setDate(row[columnCount -= step]);
			inputEntity.setTask(row[columnCount -= step]);
			inputEntity.setProject(row[columnCount -= step]);
			inputEntity.setPosition(row[columnCount -= step]);
			inputEntity.setDepartment(row[columnCount -= step]);
			inputEntity.setEmail(row[columnCount -= step]);
			inputEntity.setName(row[columnCount -= step]);

			inputEntities.push_back(inputEntity);
		}
	}

	fin.close();

	OutputReportEntity outputReportEntity;

	outputReportEntity.setOutputHeader(OutputHeader());
	
	OutputEntity outputEntity;

	std::vector<OutputEntity> outputEntities;
	
	int firstReport = 0;

	outputEntity.setName(inputEntities[firstReport].getName());
	outputEntity.setDate(inputEntities[firstReport].getDate());
	outputEntity.setTotalHours(inputEntities[firstReport].getLoggedHours());

	for (size_t i = 0, j = 1; j < inputEntities.size(); ++i, ++j)
	{
		if (inputEntities[i].getName() == inputEntities[j].getName() &&
			inputEntities[i].getMonth() == inputEntities[j].getMonth())
		{
			outputEntity.addHours(inputEntities[j].getLoggedHours());
		}
		
		if (inputEntities[i].getName() == inputEntities[j].getName() &&
			inputEntities[i].getMonth() != inputEntities[j].getMonth())
		{
			outputEntities.push_back(outputEntity);

			outputEntity.setName(inputEntities[j].getName());
			outputEntity.setDate(inputEntities[j].getDate());
			outputEntity.setTotalHours(inputEntities[j].getLoggedHours());
		}
		
		if (inputEntities[i].getName() != inputEntities[j].getName())
		{
			outputEntities.push_back(outputEntity);
			
			outputEntity.setName(inputEntities[j].getName());
			outputEntity.setDate(inputEntities[j].getDate());
			outputEntity.setTotalHours(inputEntities[j].getLoggedHours());
		}
	}
	outputEntities.push_back(outputEntity);

	outputReportEntity.setOutputEntities(outputEntities);

	return outputReportEntity;
}
