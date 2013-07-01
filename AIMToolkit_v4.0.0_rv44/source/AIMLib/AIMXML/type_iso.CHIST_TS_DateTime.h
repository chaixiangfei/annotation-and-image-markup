/*
*  2007 � 2013 Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_TS_DateTime
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_TS_DateTime

#include "type_iso.CLIST_TS_DateTime.h"


namespace AIMXML
{

namespace iso
{	

class CHIST_TS_DateTime : public ::AIMXML::iso::CLIST_TS_DateTime
{
public:
	AIMXML_EXPORT CHIST_TS_DateTime(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CHIST_TS_DateTime(CHIST_TS_DateTime const& init);
	void operator=(CHIST_TS_DateTime const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CHIST_TS_DateTime); }
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_TS_DateTime