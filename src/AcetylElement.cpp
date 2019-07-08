#include "AcetylElement.h"

AcetylElement::AcetylElement(): _type(ACETYL_ELEM_TYPE_NONE)
{
	// nothing
}

AcetylElement::AcetylElement(bool boolean): _type(ACETYL_ELEM_TYPE_BOOL)
{
	_boolean = boolean;
}


AcetylElement::AcetylElement(double number): _type(ACETYL_ELEM_TYPE_NUMBER)
{
	_number = number;
}

AcetylElement::AcetylElement(AcetylElement* joined): _type(ACETYL_ELEM_TYPE_JOINED)
{
	_joined = joined;
}

AcetylElement::AcetylElement(const AcetylElement& other): _type(other._type)
{
	switch(_type) {
		case ACETYL_ELEM_TYPE_NONE:
		   break;
		case ACETYL_ELEM_TYPE_BOOL:
		   _boolean = other._boolean;
		   break;
		case ACETYL_ELEM_TYPE_NUMBER:
		   _number = other._number;
		   break;
		case ACETYL_ELEM_TYPE_JOINED:
		   _joined = other._joined;
		   break;
	}
}
