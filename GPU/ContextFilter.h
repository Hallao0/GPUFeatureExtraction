﻿/*!
 * \file ContextFilter.h
 * \brief Contex filter.
 * \author Mateusz Pruchniak
 * \date 2010-05-05
 */

#pragma once
#include "filter.h"

/*!
 * \class ContextFilter
 * \brief Contex filter. Context transformation compute the value of given output image pixel on the base a of its neighbors and a mask.
 * \author Mateusz Pruchniak
 * \date 2010-05-05
 */
class ContextFilter :
	public Filter
{



public:

		int maskSize;

		int maskDim;

		/*!
		* Default constructor. Nothing doing.
		*/
		ContextFilter(void);

		/*!
		* Destructor.
		*/
		~ContextFilter(void);

		/*!
		* Constructor.
		*/
		ContextFilter(char* source, char* KernelName);

};

