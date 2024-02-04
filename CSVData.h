#ifndef __CSVData_h__
#define __CSVData_h__

#include <vector>
#include <variant>
#include <string>

using
cellType = std::variant<float, std::string>;

using
row = std::vector<cellType>;

class CSVData
{
public:
	CSVData();

private:
	std::vector<row> m_data;

};
#endif // !__CSVData_h__
