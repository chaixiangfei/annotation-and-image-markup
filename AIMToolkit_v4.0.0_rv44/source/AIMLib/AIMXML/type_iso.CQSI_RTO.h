/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSI_RTO
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSI_RTO

#include "type_iso.CQSET_RTO.h"


namespace AIMXML
{

namespace iso
{	

class CQSI_RTO : public ::AIMXML::iso::CQSET_RTO
{
public:
	AIMXML_EXPORT CQSI_RTO(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CQSI_RTO(CQSI_RTO const& init);
	void operator=(CQSI_RTO const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CQSI_RTO); }
	MemberElement<iso::CQSET_RTO, _altova_mi_iso_altova_CQSI_RTO_altova_term> term;
	struct term { typedef Iterator<iso::CQSET_RTO> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSI_RTO
