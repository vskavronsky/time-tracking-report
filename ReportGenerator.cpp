#include <iostream>
#include <vector>
#include <fstream>

#include "ReportParser.h"
#include "OutputHeader.h"
#include "OutputEntity.h"
#include "OutputReportEntity.h"

int main()
{
    std::string fileInputPath = "Input.csv";
    std::string fileOutputPath = "Output.csv";
    
    ReportParser parcer;
    
    char delimiter = ';';

    OutputReportEntity outputReportEntity;
    
    outputReportEntity = parcer.parse(fileInputPath, delimiter);
    
    OutputHeader outputheader = outputReportEntity.getOutputHeader();
    std::vector<OutputEntity> outputEntities = outputReportEntity.getOutputEntities();

    std::ofstream fout;
    
    fout.open(fileOutputPath, std::ofstream::app);

    fout << outputheader.getName() << delimiter
        << outputheader.getDate() << delimiter
        << outputheader.getTotalHours() << std::endl;

    for (auto& employee : outputEntities)
    {
        fout << employee.getName() << delimiter
            << employee.getFormattedDate() << delimiter
            << employee.getTotalHours() << std::endl;
    }

    fout.close();

    return 0;
}
