#ifndef SRC_ACETYL_ELEMENT_H
#define SRC_ACETYL_ELEMENT_H

#include <iostream>
#include <cstring>

#ifndef ACETYL_ELEMENT_ID_MAX_CHARS
#define ACETYL_ELEMENT_ID_MAX_CHARS 25
#endif


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
	AcetylElement(const char* id);
	AcetylElement(const char* id, bool boolean);
	AcetylElement(const char* id, double number);
	AcetylElement(const char* id, AcetylElement* joined);
	~AcetylElement()
	{
		// in the joined type, pointers are not owned
		// by elements
	}

	AcetylElement(const AcetylElement& other);

	AcetylElement& operator=(const AcetylElement& other);

	AcetylElementType getType() const { return _type; }

	const char* getId() const { return _id; }

	void setId(const char* id) { std::strncpy(_id, id, ACETYL_ELEMENT_ID_MAX_CHARS); }

	bool isId(const char* id) const { return std::strncmp(id, _id, ACETYL_ELEMENT_ID_MAX_CHARS) == 0; }

	bool boolean() const;

private:
	void clearId();
private:
	char _id[ACETYL_ELEMENT_ID_MAX_CHARS + 1];
	AcetylElementType _type;
	union 
	{
		bool _boolean;
		double _number;
		AcetylElement* _joined;
	};
};

#endif // SRC_ACETYL_ELEMENT_H
