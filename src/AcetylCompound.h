#ifndef SRC_ACETYL_COMPOUND_H
#define SRC_ACETYL_COMPOUND_H

#include <vector>
#include "AcetylElement.h"

class AcetylCompound
{
public:
	AcetylCompound();

	size_t count() const { return _elements.size(); }

	void append(const AcetylElement& elem) { _elements.push_back(elem); }

	bool hasId(const char* id) const;
private:
	/**
	 * @brief   Holds the elements of the compound
	 * @remarks Will likely be replaced by custom collection 
	 *          in the future. 
	 */
	std::vector<AcetylElement> _elements;
};

#endif // SRC_ACETYL_COMPOUND_H
