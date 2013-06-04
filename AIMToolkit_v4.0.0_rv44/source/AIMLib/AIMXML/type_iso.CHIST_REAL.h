/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_REAL
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_REAL

#include "type_iso.CLIST_REAL.h"


namespace AIMXML
{

namespace iso
{	

class CHIST_REAL : public ::AIMXML::iso::CLIST_REAL
{
public:
	AIMXML_EXPORT CHIST_REAL(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CHIST_REAL(CHIST_REAL const& init);
	void operator=(CHIST_REAL const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CHIST_REAL); }
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_REAL
