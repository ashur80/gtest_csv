#include "CSVReader.h"

CSVReader::CSVReader() :
	m_fileName("")
{
}

CSVReader::CSVReader(std::string fileName) :
	m_fileName(fileName)
{
}

CSVData CSVReader::readCSV()
{
	return CSVData();
}

CSVData CSVReader::readCSV(std::string fileName)
{
	return CSVData();
}
