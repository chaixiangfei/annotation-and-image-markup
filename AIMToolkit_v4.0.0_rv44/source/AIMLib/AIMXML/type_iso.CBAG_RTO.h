/*
*  2007 � 2013 Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_RTO
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_RTO

#include "type_iso.CCOLL_RTO.h"


namespace AIMXML
{

namespace iso
{	

class CBAG_RTO : public ::AIMXML::iso::CCOLL_RTO
{
public:
	AIMXML_EXPORT CBAG_RTO(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CBAG_RTO(CBAG_RTO const& init);
	void operator=(CBAG_RTO const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CBAG_RTO); }
	MemberElement<iso::CRTO, _altova_mi_iso_altova_CBAG_RTO_altova_item> item;
	struct item { typedef Iterator<iso::CRTO> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CBAG_RTO