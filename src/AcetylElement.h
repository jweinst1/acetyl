#ifndef SRC_ACETYL_ELEMENT_H
#define SRC_ACETYL_ELEMENT_H

#include <algorithm>
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
	/*Empty Id constructors*/
	AcetylElement();
	AcetylElement(bool boolean);
	AcetylElement(double number);
	AcetylElement(AcetylElement* joined);
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

	bool isType(AcetylElementType type) const { return type == _type; }
	/**
	 * @brief   Compares the id, type, and value of an element.
	 * @remarks If only comparison of id or type is desired, do not use
	 *          this method.
	 */
	bool operator==(const AcetylElement& other) const;

	bool boolean() const;

	double number() const;

	AcetylElement* joiner() const { return _type == ACETYL_ELEM_TYPE_JOINED ? _joined : nullptr;  }

	void toBoolean(bool boolean) {
		_type = ACETYL_ELEM_TYPE_BOOL;
		_boolean = boolean;
	}

	void toNone() { _type = ACETYL_ELEM_TYPE_NONE; }

	void toNumber(double number) {
		_type = ACETYL_ELEM_TYPE_NUMBER;
		_number = number;
	}

	void toJoined(AcetylElement* joined) {
		_type = ACETYL_ELEM_TYPE_JOINED;
		_joined = joined;
	}

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
