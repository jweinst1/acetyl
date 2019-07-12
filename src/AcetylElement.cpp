#include "AcetylElement.h"

AcetylElement::AcetylElement(): _type(ACETYL_ELEM_TYPE_NONE)
{
	clearId();
}

AcetylElement::AcetylElement(bool boolean): _type(ACETYL_ELEM_TYPE_BOOL)
{
	clearId();
	_boolean = boolean;
}
	
AcetylElement::AcetylElement(double number): _type(ACETYL_ELEM_TYPE_NUMBER)
{
	clearId();
	_number = number;
}
	
AcetylElement::AcetylElement(AcetylElement* joined): _type(ACETYL_ELEM_TYPE_JOINED)
{
	clearId();
	_joined = joined;
}

AcetylElement::AcetylElement(const char* id): _type(ACETYL_ELEM_TYPE_NONE)
{
	clearId();
	std::strncpy(_id, id, ACETYL_ELEMENT_ID_MAX_CHARS);
}

AcetylElement::AcetylElement(const char* id, bool boolean): _type(ACETYL_ELEM_TYPE_BOOL)
{
	clearId();
	_boolean = boolean;
	std::strncpy(_id, id, ACETYL_ELEMENT_ID_MAX_CHARS);
}


AcetylElement::AcetylElement(const char* id, double number): _type(ACETYL_ELEM_TYPE_NUMBER)
{
	clearId();
	_number = number;
	std::strncpy(_id, id, ACETYL_ELEMENT_ID_MAX_CHARS);
}

AcetylElement::AcetylElement(const char* id, AcetylElement* joined): _type(ACETYL_ELEM_TYPE_JOINED)
{
	clearId();
	_joined = joined;
	std::strncpy(_id, id, ACETYL_ELEMENT_ID_MAX_CHARS);
}

AcetylElement& AcetylElement::operator=(const AcetylElement& other)
{
	if(&other == this)
		return *this;
	else {
		_type = other._type;
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
		std::strncpy(_id, other._id, ACETYL_ELEMENT_ID_MAX_CHARS);
		return *this;
	}
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
	std::strncpy(_id, other._id, ACETYL_ELEMENT_ID_MAX_CHARS);
}

void AcetylElement::clearId()
{
	for(unsigned i = 0; i < ACETYL_ELEMENT_ID_MAX_CHARS + 1 ; i++)
		_id[i] = '\0';
}

bool AcetylElement::operator==(const AcetylElement& other) const
{
	if(std::strncmp(_id, other._id, ACETYL_ELEMENT_ID_MAX_CHARS) != 0)
		return false;
	if(other._type != _type)
		return false;
	switch(_type) {
		case ACETYL_ELEM_TYPE_NONE:
		    return true;
		case ACETYL_ELEM_TYPE_NUMBER:
		    return _number == other._number;
		case ACETYL_ELEM_TYPE_JOINED:
		    // Must be same address
		    return _joined == other._joined;
		case ACETYL_ELEM_TYPE_BOOL:
		    return _boolean == other._boolean;
	}
}

bool AcetylElement::boolean() const
{
	switch(_type) {
		case ACETYL_ELEM_TYPE_BOOL:
		    return _boolean;
		case ACETYL_ELEM_TYPE_NUMBER:
		    return _number != 0.0;
		case ACETYL_ELEM_TYPE_NONE:
		    return false;
		case ACETYL_ELEM_TYPE_JOINED:
		    return _joined != nullptr;
	}
}

double AcetylElement::number() const
{
	switch(_type) {
		case ACETYL_ELEM_TYPE_BOOL:
		    return _boolean ? 1.0 : 0.0;
		case ACETYL_ELEM_TYPE_NONE:
		    return 0.0;
		case ACETYL_ELEM_TYPE_JOINED:
		    return _joined == nullptr ? 0.0 : 1.0;
		case ACETYL_ELEM_TYPE_NUMBER:
		    return _number;
	}
}
