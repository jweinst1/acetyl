#ifndef SRC_ACETYL_ELEMENT_H
#define SRC_ACETYL_ELEMENT_H

#include <iostream>


enum AcetylElementType
{
	ACETYL_ELEM_TYPE_NONE,
	ACETYL_ELEM_TYPE_BOOL,
	ACETYL_ELEM_TYPE_NUMBER,
	ACETYL_ELEM_TYPE_JOINED
};

class AcetylElement
{
public:
	AcetylElement();
	AcetylElement(bool boolean);
	AcetylElement(double number);
	AcetylElement(AcetylElement* joined);
	~AcetylElement()
	{
		// in the joined type, pointers are not owned
		// by elements
	}

	AcetylElement(const AcetylElement& other);

	AcetylElementType getType() const { return _type; }

private:
	AcetylElementType _type;
	union 
	{
		bool _boolean;
		double _number;
		AcetylElement* _joined;
	};
};

#endif // SRC_ACETYL_ELEMENT_H
