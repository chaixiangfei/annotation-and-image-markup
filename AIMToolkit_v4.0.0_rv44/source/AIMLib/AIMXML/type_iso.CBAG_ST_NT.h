/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_ST_NT
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_ST_NT

#include "type_iso.CCOLL_ST_NT.h"


namespace AIMXML
{

namespace iso
{	

class CBAG_ST_NT : public ::AIMXML::iso::CCOLL_ST_NT
{
public:
	AIMXML_EXPORT CBAG_ST_NT(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CBAG_ST_NT(CBAG_ST_NT const& init);
	void operator=(CBAG_ST_NT const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CBAG_ST_NT); }
	MemberElement<iso::CST_NT, _altova_mi_iso_altova_CBAG_ST_NT_altova_item> item;
	struct item { typedef Iterator<iso::CST_NT> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_ST_NT
