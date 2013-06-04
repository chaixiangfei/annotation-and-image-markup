/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

////////////////////////////////////////////////////////////////////////
//
// xs-types.h
//
// This file was generated by XMLSpy 2012r2sp1 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef _INCLUDED_XS_TYPES_H_
#define _INCLUDED_XS_TYPES_H_

#include "exception.h"
#include "xs-datetime.h"
#include "StructInfo.h"
//#include "AltovaXMLAPI.h"

#include <vector>

namespace altova
{

	// facet checkers taken from http://www.w3.org/TR/xmlschema-2/#defn-coss

	// facet checking for xs:string
	extern const FacetCheck* FacetCheck_string_length;
	extern const FacetCheck* FacetCheck_string_minLength;
	extern const FacetCheck* FacetCheck_string_maxLength;
	extern const FacetCheck* FacetCheck_string_pattern;
	extern const FacetCheck* FacetCheck_string_enumeration;

	// facet checking for xs:hexBinary
	extern const FacetCheck* FacetCheck_hexBinary_length;
	extern const FacetCheck* FacetCheck_hexBinary_minLength;
	extern const FacetCheck* FacetCheck_hexBinary_maxLength;
	extern const FacetCheck* FacetCheck_hexBinary_pattern;
	extern const FacetCheck* FacetCheck_hexBinary_enumeration;

	// facet checking for xs:base64Binary
	extern const FacetCheck* FacetCheck_base64Binary_length;
	extern const FacetCheck* FacetCheck_base64Binary_minLength;
	extern const FacetCheck* FacetCheck_base64Binary_maxLength;
	extern const FacetCheck* FacetCheck_base64Binary_pattern;
	extern const FacetCheck* FacetCheck_base64Binary_enumeration;

	// facet checking for xs:decimal
	extern const FacetCheck* FacetCheck_decimal_totalDigits;
	extern const FacetCheck* FacetCheck_decimal_fractionDigits;
	extern const FacetCheck* FacetCheck_decimal_minInclusive;
	extern const FacetCheck* FacetCheck_decimal_minExclusive;
	extern const FacetCheck* FacetCheck_decimal_maxInclusive;
	extern const FacetCheck* FacetCheck_decimal_maxExclusive;
	extern const FacetCheck* FacetCheck_decimal_enumeration;
	extern const FacetCheck* FacetCheck_decimal_pattern;

	// facet checking for xs:boolean
	extern const FacetCheck* FacetCheck_boolean_pattern;

	// facet checking for xs:float
	extern const FacetCheck* FacetCheck_float_pattern;
	extern const FacetCheck* FacetCheck_float_enumeration;
	extern const FacetCheck* FacetCheck_float_maxInclusive;
	extern const FacetCheck* FacetCheck_float_maxExclusive;
	extern const FacetCheck* FacetCheck_float_minInclusive;
	extern const FacetCheck* FacetCheck_float_minExclusive;

	// facet checking for xs:double
	extern const FacetCheck* FacetCheck_double_pattern;
	extern const FacetCheck* FacetCheck_double_enumeration;
	extern const FacetCheck* FacetCheck_double_maxInclusive;
	extern const FacetCheck* FacetCheck_double_maxExclusive;
	extern const FacetCheck* FacetCheck_double_minInclusive;
	extern const FacetCheck* FacetCheck_double_minExclusive;

	// facet checking for xs:duration
	extern const FacetCheck* FacetCheck_duration_pattern;
	extern const FacetCheck* FacetCheck_duration_enumeration;
	extern const FacetCheck* FacetCheck_duration_maxInclusive;
	extern const FacetCheck* FacetCheck_duration_maxExclusive;
	extern const FacetCheck* FacetCheck_duration_minInclusive;
	extern const FacetCheck* FacetCheck_duration_minExclusive;

	// facet checking for xs:dateTime
	extern const FacetCheck* FacetCheck_dateTime_pattern;
	extern const FacetCheck* FacetCheck_dateTime_enumeration;
	extern const FacetCheck* FacetCheck_dateTime_maxInclusive;
	extern const FacetCheck* FacetCheck_dateTime_maxExclusive;
	extern const FacetCheck* FacetCheck_dateTime_minInclusive;
	extern const FacetCheck* FacetCheck_dateTime_minExclusive;

	// facet checking for xs:time
	extern const FacetCheck* FacetCheck_time_pattern;
	extern const FacetCheck* FacetCheck_time_enumeration;
	extern const FacetCheck* FacetCheck_time_maxInclusive;
	extern const FacetCheck* FacetCheck_time_maxExclusive;
	extern const FacetCheck* FacetCheck_time_minInclusive;
	extern const FacetCheck* FacetCheck_time_minExclusive;

	// facet checking for xs:date
	extern const FacetCheck* FacetCheck_date_pattern;
	extern const FacetCheck* FacetCheck_date_enumeration;
	extern const FacetCheck* FacetCheck_date_maxInclusive;
	extern const FacetCheck* FacetCheck_date_maxExclusive;
	extern const FacetCheck* FacetCheck_date_minInclusive;
	extern const FacetCheck* FacetCheck_date_minExclusive;

	// facet checking for xs:gYear
	extern const FacetCheck* FacetCheck_gYear_pattern;
	extern const FacetCheck* FacetCheck_gYear_enumeration;
	extern const FacetCheck* FacetCheck_gYear_maxInclusive;
	extern const FacetCheck* FacetCheck_gYear_maxExclusive;
	extern const FacetCheck* FacetCheck_gYear_minInclusive;
	extern const FacetCheck* FacetCheck_gYear_minExclusive;

	// facet checking for xs:gMonth
	extern const FacetCheck* FacetCheck_gMonth_pattern;
	extern const FacetCheck* FacetCheck_gMonth_enumeration;
	extern const FacetCheck* FacetCheck_gMonth_maxInclusive;
	extern const FacetCheck* FacetCheck_gMonth_maxExclusive;
	extern const FacetCheck* FacetCheck_gMonth_minInclusive;
	extern const FacetCheck* FacetCheck_gMonth_minExclusive;

	// facet checking for xs:gDay
	extern const FacetCheck* FacetCheck_gDay_pattern;
	extern const FacetCheck* FacetCheck_gDay_enumeration;
	extern const FacetCheck* FacetCheck_gDay_maxInclusive;
	extern const FacetCheck* FacetCheck_gDay_maxExclusive;
	extern const FacetCheck* FacetCheck_gDay_minInclusive;
	extern const FacetCheck* FacetCheck_gDay_minExclusive;

	// facet checking for xs:gYearMonth
	extern const FacetCheck* FacetCheck_gYearMonth_pattern;
	extern const FacetCheck* FacetCheck_gYearMonth_enumeration;
	extern const FacetCheck* FacetCheck_gYearMonth_maxInclusive;
	extern const FacetCheck* FacetCheck_gYearMonth_maxExclusive;
	extern const FacetCheck* FacetCheck_gYearMonth_minInclusive;
	extern const FacetCheck* FacetCheck_gYearMonth_minExclusive;

	// facet checking for xs:gMonthDay
	extern const FacetCheck* FacetCheck_gMonthDay_pattern;
	extern const FacetCheck* FacetCheck_gMonthDay_enumeration;
	extern const FacetCheck* FacetCheck_gMonthDay_maxInclusive;
	extern const FacetCheck* FacetCheck_gMonthDay_maxExclusive;
	extern const FacetCheck* FacetCheck_gMonthDay_minInclusive;
	extern const FacetCheck* FacetCheck_gMonthDay_minExclusive;

	// facet checking for xs:anySimpleType: these will all return success
	extern const FacetCheck* FacetCheck_anySimpleType_pattern;
	extern const FacetCheck* FacetCheck_anySimpleType_enumeration;
	extern const FacetCheck* FacetCheck_anySimpleType_length;
	extern const FacetCheck* FacetCheck_anySimpleType_minLength;
	extern const FacetCheck* FacetCheck_anySimpleType_maxLength;
	extern const FacetCheck* FacetCheck_anySimpleType_maxInclusive;
	extern const FacetCheck* FacetCheck_anySimpleType_maxExclusive;
	extern const FacetCheck* FacetCheck_anySimpleType_minInclusive;
	extern const FacetCheck* FacetCheck_anySimpleType_minExclusive;
	extern const FacetCheck* FacetCheck_anySimpleType_totalDigits;
	extern const FacetCheck* FacetCheck_anySimpleType_fractionDigits;

	// W3C XML Schema built-in datatypes; http://www.w3.org/TR/xmlschema-2/#built-in-datatypes
	class XsAnySimpleType;		// whitespace preserve?
	class XsString;				// whitespace preserve
	class XsBoolean;			// whitespace collapse
	class XsBase64Binary;		// whitespace collapse
	class XsHexBinary;			// whitespace collapse
	class XsFloat;				// whitespace collapse
	class XsDecimal;			// whitespace collapse
	class XsInteger;			// whitespace collapse
	class XsLong;				// xs:integer with range
	class XsInt;				// xs:long with range
	class XsUnsignedLong;		// xs:nonNegativeInteger with range
	class XsUnsignedInt;		// xs:unsignedLong with range
	class XsDouble;				
	class XsQName;				// whitespace collapse, special semantics
	class XsDuration;			// whitespace collapse
	class XsDateTime;			// whitespace collapse
	class XsTime;				// whitespace collapse
	class XsDate;				// whitespace collapse
	class XsGYearMonth;			// whitespace collapse
	class XsGYear;				// whitespace collapse
	class XsGMonthDay;			// whitespace collapse
	class XsGDay;				// whitespace collapse
	class XsGMonth;				// whitespace collapse


	class XsSchemaValidation
	{
	public:
		static string_type ReplaceWhitespace(const string_type& input);
		static string_type CollapseWhitespace(const string_type& input);

		static bool Validate(const string_type& input, const TypeInfo* info);
	};


	class XsValidationException : public Exception
	{
	public:
		XsValidationException(const string_type& errorMessage) : Exception(errorMessage) {}
		XsValidationException(const string_type& errorMessage, const Exception* inner) : Exception(errorMessage, inner) {}
	};



	class XmlFormatter : public ValueFormatter
	{
	public:
		virtual string_type Format(const altova::DateTime& v);
		virtual string_type Format(const altova::Duration& v);
		virtual string_type Format(__int64 v);
		virtual string_type Format(unsigned __int64 v);
		virtual string_type Format(double v);
		virtual string_type Format(const string_type& v);
		virtual string_type Format(const std::vector<unsigned char>& v);
		virtual string_type Format(bool v);

		string_type Format(int v) { return Format(static_cast<__int64>(v)); }
		string_type Format(unsigned v) { return Format(static_cast<unsigned __int64>(v)); }

		virtual std::vector<unsigned char> ParseBinary(const string_type& v);
	};

	// The following sequence is a workaround for a fixup-generation problem in VC7.1 and VC8.
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_TimeFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_DateFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_DateTimeFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_GYearFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_GMonthFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_GDayFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_GYearMonthFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_GMonthDayFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_IntegerFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_DecimalFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_AnySimpleTypeFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_DurationFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_DoubleFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_Base64BinaryFormatter;
	ALTOVA_DECLSPECIFIER extern ValueFormatter* Exported_HexBinaryFormatter;

	static ValueFormatter* const TimeFormatter = Exported_TimeFormatter;
	static ValueFormatter* const DateFormatter = Exported_DateFormatter;
	static ValueFormatter* const DateTimeFormatter = Exported_DateTimeFormatter;
	static ValueFormatter* const GYearFormatter = Exported_GYearFormatter;
	static ValueFormatter* const GMonthFormatter = Exported_GMonthFormatter;
	static ValueFormatter* const GDayFormatter = Exported_GDayFormatter;
	static ValueFormatter* const GYearMonthFormatter = Exported_GYearMonthFormatter;
	static ValueFormatter* const GMonthDayFormatter = Exported_GMonthDayFormatter;
	static ValueFormatter* const IntegerFormatter = Exported_IntegerFormatter;
	static ValueFormatter* const DecimalFormatter = Exported_DecimalFormatter;
	static ValueFormatter* const AnySimpleTypeFormatter = Exported_AnySimpleTypeFormatter;
	static ValueFormatter* const DurationFormatter = Exported_DurationFormatter;
	static ValueFormatter* const DoubleFormatter = Exported_DoubleFormatter;
	static ValueFormatter* const Base64BinaryFormatter = Exported_Base64BinaryFormatter;
	static ValueFormatter* const HexBinaryFormatter = Exported_HexBinaryFormatter;

}

#endif // guard
