#include "AcetylCompound.h"

AcetylCompound::AcetylCompound()
{

}


bool AcetylCompound::hasId(const char* id) const
{
	for(std::vector<AcetylElement>::const_iterator it = _elements.begin(); it != _elements.end(); it++)
	{
		if(it->isId(id)) {
			return true;
		}
	}
	return false;
}
