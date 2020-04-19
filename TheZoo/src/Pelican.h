/*
 * Pelican.h
 *
 *  Created on: Apr 11, 2020
 *      Author: 1715254_snhu
 */

#ifndef PELICAN_H_
#define PELICAN_H_

#include "Oviparous.h"

class Pelican : public Oviparous {
public:
	Pelican(int t_TrackNum, string t_name, string t_type, string t_subType, int t_NumberOfEggs);
	virtual ~Pelican();
};

#endif /* PELICAN_H_ */
