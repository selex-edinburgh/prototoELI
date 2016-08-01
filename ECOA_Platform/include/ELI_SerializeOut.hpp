/*
 * ELIMessageConverter.h
 *
 *  Created on: 19 Jul 2016
 *      Author: luke.swift
 */

#ifndef ELISERIALIZEOUT_HPP_
#define ELISERIALIZEOUT_HPP_

#include <string>

#include "../include/ECOA.hpp"

class ELI_SerializeOut {
public:
	ELI_SerializeOut();
	virtual ~ELI_SerializeOut();

	void serialise_ECOA__boolean8(ECOA__boolean8 data, unsigned char **bufferptr);
	void serialise_ECOA__int8(ECOA__int8 data, unsigned char **bufferptr);
	void serialise_ECOA__char8(ECOA__char8 data, unsigned char **bufferptr);		// no chars in proto
	void serialise_ECOA__byte(ECOA__byte data, unsigned char **bufferptr);
	void serialise_ECOA__int16(ECOA__int16 data, unsigned char **bufferptr);
	void serialise_ECOA__int32(ECOA__int32 data, unsigned char **bufferptr);
	#if defined(ECOA_64BIT_SUPPORT)
	void serialise_ECOA__int64(ECOA__int64 data, unsigned char **bufferptr);
	#endif
	void serialise_ECOA__uint8(ECOA__uint8 data, unsigned char **bufferptr);
	void serialise_ECOA__uint16(ECOA__uint16 data, unsigned char **bufferptr);
	void serialise_ECOA__uint32(ECOA__uint32 data, unsigned char **bufferptr);
	#if defined(ECOA_64BIT_SUPPORT)
	void serialise_ECOA__uint64(ECOA__uint64 data, unsigned char **bufferptr);
	#endif

	void serialise_ECOA__float32(ECOA__float32 data, unsigned char **bufferptr);
	void serialise_ECOA__double64(ECOA__double64 data, unsigned char **bufferptr);

private:

};

#endif /* ELISERIALIZEOUT_HPP_ */
