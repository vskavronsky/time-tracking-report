#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "OutputReportEntity.h"
#include "OutputHeader.h"
#include "OutputEntity.h"
#include "InputHeader.h"
#include "InputEntity.h"

class ReportParser
{
	public:
		OutputReportEntity parse(const std::string fileInputPath, char delimiter);
};
