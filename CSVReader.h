#ifndef __CSVReader_h__
#define __CSVReader_h__

#include <string>
#include "CSVData.h"

class CSVReader
{
public:

	CSVReader();
	explicit CSVReader(std::string fileName);

	CSVData readCSV();
	CSVData readCSV(std::string fileName);


private:
	std::string m_fileName;
	int m_status;

};


#endif // !__CSVReader_h__
