#include "OutputReportEntity.h"

const OutputHeader& OutputReportEntity::getOutputHeader() const
{
	return this->outputHeader;
}

void OutputReportEntity::setOutputHeader(const OutputHeader& outputHeader)
{
	this->outputHeader = outputHeader;
}

const std::vector<OutputEntity>& OutputReportEntity::getOutputEntities() const
{
	return this->outputEntities;
}

void OutputReportEntity::setOutputEntities(const std::vector<OutputEntity>& outputEntities)
{
	this->outputEntities = outputEntities;
}
