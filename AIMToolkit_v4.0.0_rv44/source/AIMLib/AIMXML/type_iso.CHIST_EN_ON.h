/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_EN_ON
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_EN_ON

#include "type_iso.CLIST_EN_ON.h"


namespace AIMXML
{

namespace iso
{	

class CHIST_EN_ON : public ::AIMXML::iso::CLIST_EN_ON
{
public:
	AIMXML_EXPORT CHIST_EN_ON(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CHIST_EN_ON(CHIST_EN_ON const& init);
	void operator=(CHIST_EN_ON const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CHIST_EN_ON); }
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_EN_ON
