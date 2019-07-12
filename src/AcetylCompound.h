#ifndef SRC_ACETYL_COMPOUND_H
#define SRC_ACETYL_COMPOUND_H

#include <vector>
#include "AcetylElement.h"

class AcetylCompound : public std::vector<AcetylElement>
{
public:

	bool hasId(const char* id) const;
};

#endif // SRC_ACETYL_COMPOUND_H
