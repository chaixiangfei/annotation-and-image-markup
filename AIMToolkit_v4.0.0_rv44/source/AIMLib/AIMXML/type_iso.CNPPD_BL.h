/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CNPPD_BL
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CNPPD_BL

#include "type_iso.CANY.h"


namespace AIMXML
{

namespace iso
{	

class CNPPD_BL : public ::AIMXML::iso::CANY
{
public:
	AIMXML_EXPORT CNPPD_BL(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CNPPD_BL(CNPPD_BL const& init);
	void operator=(CNPPD_BL const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CNPPD_BL); }
	MemberElement<iso::CUVP_BL, _altova_mi_iso_altova_CNPPD_BL_altova_item> item;
	struct item { typedef Iterator<iso::CUVP_BL> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CNPPD_BL
