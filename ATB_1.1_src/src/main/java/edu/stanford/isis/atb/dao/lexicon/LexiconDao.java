/*
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/



package edu.stanford.isis.atb.dao.lexicon;

import java.util.Collection;

import edu.stanford.isis.atb.domain.lexicon.Lexicon;

/**
 * @author Vitaliy Semeshko
 */
public interface LexiconDao {

	public Collection<Lexicon> getAll();
	
	public void insert(Lexicon lexicon);
	
	public void update(Lexicon lexicon);
	
	public void delete(Integer id);
	
}