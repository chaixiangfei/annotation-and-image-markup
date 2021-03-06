/*
*  2007 � 2013 Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CalignType4
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CalignType4



namespace AIMXML
{

class CalignType4 : public TypeBase
{
public:
	AIMXML_EXPORT CalignType4(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CalignType4(CalignType4 const& init);
	void operator=(CalignType4 const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_altova_CalignType4); }

	enum EnumValues {
		Invalid = -1,
		k_left = 0, // left
		k_center = 1, // center
		k_right = 2, // right
		k_justify = 3, // justify
		k_char = 4, // char
		EnumValueCount
	};
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};


}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CalignType4
