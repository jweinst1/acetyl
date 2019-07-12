#include "AcetylCompound.h"


bool AcetylCompound::hasId(const char* id) const
{
	for(std::vector<AcetylElement>::const_iterator it = begin(); it != end(); it++)
	{
		if(it->isId(id)) {
			return true;
		}
	}
	return false;
}
