/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSS_CO
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSS_CO

#include "type_iso.CQSET_CO.h"


namespace AIMXML
{

namespace iso
{	

class CQSS_CO : public ::AIMXML::iso::CQSET_CO
{
public:
	AIMXML_EXPORT CQSS_CO(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CQSS_CO(CQSS_CO const& init);
	void operator=(CQSS_CO const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CQSS_CO); }
	MemberElement<iso::CCO, _altova_mi_iso_altova_CQSS_CO_altova_term> term;
	struct term { typedef Iterator<iso::CCO> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSS_CO
