/*
*  Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.

*/

////////////////////////////////////////////////////////////////////////
//
// AltovaException.h
//
// This file was generated by XMLSpy 2012r2sp1 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef ALTOVA_ALTOVAEXCEPTION_H_INCLUDED
#define ALTOVA_ALTOVAEXCEPTION_H_INCLUDED

namespace altova {


class ALTOVA_DECLSPECIFIER CAltovaException
{
public:
	typedef enum
	{
		eError1,
		eError2,
		eDatabaseError,
	} ECode;

	CAltovaException(int nCode, const tstring& sMessage, bool bUserExc = false);
	int GetCode();
	const tstring& GetInfo() const;
	bool IsUserException() const;

protected:
	int		m_nCode;
	tstring	m_sMessage;
	bool m_bUserExc;
};

////////////////////////////////////////////////////////////////////////
//
//  Utility functions and templates
//
////////////////////////////////////////////////////////////////////////

template<typename TValue>
TValue InRangeInt(TValue nValue, ALTOVA_INT64 nMin, ALTOVA_INT64 nMax)
{
	if( nValue < nMin || nValue > nMax )
		throw CAltovaException(CAltovaException::eError1, _T("Out of range!"));
	return nValue;
}


template<typename TValue>
TValue InRangeDbl(TValue nValue, const double nPosMin, const double nPosMax)
{
	TValue nTmpValue = nValue;
	if( nTmpValue == 0 )
		return nValue;
	if( nTmpValue < 0 )
		nTmpValue = -nTmpValue;
	if( nTmpValue >= nPosMin  &&  nTmpValue <= nPosMax )
		return nValue;
	throw CAltovaException(CAltovaException::eError1, _T("Out of range!"));
}

} // namespace altova

#endif // ALTOVA_ALTOVAEXCEPTION_H_INCLUDED
