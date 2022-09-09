#pragma once

#include <vector>

#include "OutputHeader.h"
#include "OutputEntity.h"

class OutputReportEntity
{
	public:
		const OutputHeader& getOutputHeader() const;
		void setOutputHeader(const OutputHeader& outputHeader);
	
		const std::vector<OutputEntity>& getOutputEntities() const;
		void setOutputEntities(const std::vector<OutputEntity>& outputEntities);

	private:
		OutputHeader outputHeader;
		std::vector<OutputEntity> outputEntities;
};
