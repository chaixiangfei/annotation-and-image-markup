/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.

*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CannotationRoleType
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CannotationRoleType



namespace AIMXML
{

class CannotationRoleType : public TypeBase
{
public:
	AIMXML_EXPORT CannotationRoleType(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CannotationRoleType(CannotationRoleType const& init);
	void operator=(CannotationRoleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CannotationRoleType); }
	MemberElement<CAnnotationRole, _altova_mi_altova_CannotationRoleType_altova_AnnotationRole> AnnotationRole;
	struct AnnotationRole { typedef Iterator<CAnnotationRole> iterator; };
};


}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CannotationRoleType
