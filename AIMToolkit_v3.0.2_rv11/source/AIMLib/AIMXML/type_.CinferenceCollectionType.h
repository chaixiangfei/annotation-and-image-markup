/*
*  2007 � 2013 Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.

*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CinferenceCollectionType
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CinferenceCollectionType



namespace AIMXML
{

class CinferenceCollectionType : public TypeBase
{
public:
	AIMXML_EXPORT CinferenceCollectionType(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CinferenceCollectionType(CinferenceCollectionType const& init);
	void operator=(CinferenceCollectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CinferenceCollectionType); }
	MemberElement<CInference, _altova_mi_altova_CinferenceCollectionType_altova_Inference> Inference;
	struct Inference { typedef Iterator<CInference> iterator; };
};


}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CinferenceCollectionType
