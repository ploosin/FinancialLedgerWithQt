#pragma once

#include <string>

class Finance {

	enum recordType { income, outcome };
	
	struct FinanceRecord {
		unsigned long long	amount;
		recordType			recordType;
		std::string			detail;
	};

	Finance() {};


};