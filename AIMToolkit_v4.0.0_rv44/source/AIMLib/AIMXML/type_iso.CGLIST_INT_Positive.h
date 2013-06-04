/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CGLIST_INT_Positive
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CGLIST_INT_Positive

#include "type_iso.CANY.h"


namespace AIMXML
{

namespace iso
{	

class CGLIST_INT_Positive : public ::AIMXML::iso::CANY
{
public:
	AIMXML_EXPORT CGLIST_INT_Positive(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CGLIST_INT_Positive(CGLIST_INT_Positive const& init);
	void operator=(CGLIST_INT_Positive const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CGLIST_INT_Positive); }

	MemberAttribute<int,_altova_mi_iso_altova_CGLIST_INT_Positive_altova_denominator, 0, 0> denominator;	// denominator Cint

	MemberAttribute<int,_altova_mi_iso_altova_CGLIST_INT_Positive_altova_period, 0, 0> period;	// period Cint
	MemberElement<iso::CINT_Positive, _altova_mi_iso_altova_CGLIST_INT_Positive_altova_head> head;
	struct head { typedef Iterator<iso::CINT_Positive> iterator; };
	MemberElement<iso::CQTY, _altova_mi_iso_altova_CGLIST_INT_Positive_altova_increment> increment;
	struct increment { typedef Iterator<iso::CQTY> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CGLIST_INT_Positive
