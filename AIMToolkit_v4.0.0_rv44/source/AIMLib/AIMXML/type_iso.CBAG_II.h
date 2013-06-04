/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_II
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_II

#include "type_iso.CCOLL_II.h"


namespace AIMXML
{

namespace iso
{	

class CBAG_II : public ::AIMXML::iso::CCOLL_II
{
public:
	AIMXML_EXPORT CBAG_II(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CBAG_II(CBAG_II const& init);
	void operator=(CBAG_II const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CBAG_II); }
	MemberElement<iso::CII, _altova_mi_iso_altova_CBAG_II_altova_item> item;
	struct item { typedef Iterator<iso::CII> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_II
