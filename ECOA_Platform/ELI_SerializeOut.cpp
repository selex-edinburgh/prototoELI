/*
 * ELIMessageConverter.cpp
 *
 *  Created on: 19 Jul 2016
 *      Author: luke.swift
 */

#include "include/ELI_SerializeOut.hpp"

#include <iostream>
#include <stdio.h>
#include <cstring>

ELI_SerializeOut::ELI_SerializeOut() {
	// TODO Auto-generated constructor stub
}

ELI_SerializeOut::~ELI_SerializeOut() {
	// TODO Auto-generated destructor stub
}


void ELI_SerializeOut::serialise_ECOA__boolean8(ECOA__boolean8 data, unsigned char **bufferptr)
{
   memcpy( *bufferptr, &data, 1);
   *bufferptr += 1;
}

void ELI_SerializeOut::serialise_ECOA__int8(ECOA__int8 data, unsigned char **bufferptr)
{
   memcpy( *bufferptr, &data, 1);
   *bufferptr += 1;
}

void ELI_SerializeOut::serialise_ECOA__char8(ECOA__char8 data, unsigned char **bufferptr)
{
   memcpy( *bufferptr, &data, 1);
   *bufferptr += 1;

}

void ELI_SerializeOut::serialise_ECOA__byte(ECOA__byte data, unsigned char **bufferptr)
{
   memcpy( *bufferptr, &data, 1);
   *bufferptr += 1;

}

void ELI_SerializeOut::serialise_ECOA__int16(ECOA__int16 data, unsigned char **bufferptr)
{
#ifdef LITTLE_ENDIAN
   unsigned char *srcPtr = (unsigned char *)&data;
   unsigned char *destPtr = (unsigned char *)*bufferptr;
   destPtr[0] = srcPtr[1];
   destPtr[1] = srcPtr[0];
#else
   memcpy( *bufferptr, &data, 2);
#endif
   *bufferptr += 2;

}

void ELI_SerializeOut::serialise_ECOA__int32(ECOA__int32 data, unsigned char **bufferptr)
{
#ifdef LITTLE_ENDIAN
   unsigned char *srcPtr = (unsigned char *)&data;
   unsigned char *destPtr = (unsigned char *)*bufferptr;
   destPtr[0] = srcPtr[3];
   destPtr[1] = srcPtr[2];
   destPtr[2] = srcPtr[1];
   destPtr[3] = srcPtr[0];
#else
   memcpy( *bufferptr, &data, 4);
#endif
   *bufferptr += 4;

}

#if defined(ECOA_64BIT_SUPPORT)
void serialise_ECOA__int64(ECOA__int64 data, unsigned char **bufferptr)
{
#ifdef LITTLE_ENDIAN
   unsigned char *srcPtr = (unsigned char *)&data;
   unsigned char *destPtr = (unsigned char *)*bufferptr;
   destPtr[0] = srcPtr[7];
   destPtr[1] = srcPtr[6];
   destPtr[2] = srcPtr[5];
   destPtr[3] = srcPtr[4];
   destPtr[4] = srcPtr[3];
   destPtr[5] = srcPtr[2];
   destPtr[6] = srcPtr[1];
   destPtr[7] = srcPtr[0];
#else
   memcpy( *bufferptr, &data, 8);
#endif
   *bufferptr += 8;

}

#endif
void ELI_SerializeOut::serialise_ECOA__uint8(ECOA__uint8 data, unsigned char **bufferptr)
{
   memcpy( *bufferptr, &data, 1);
   *bufferptr += 1;

}

void ELI_SerializeOut::serialise_ECOA__uint16(ECOA__uint16 data, unsigned char **bufferptr)
{
#ifdef LITTLE_ENDIAN
   unsigned char *srcPtr = (unsigned char *)&data;
   unsigned char *destPtr = (unsigned char *)*bufferptr;
   destPtr[0] = srcPtr[1];
   destPtr[1] = srcPtr[0];
#else
   memcpy( *bufferptr, &data, 2);
#endif
   *bufferptr += 2;

}

void ELI_SerializeOut::serialise_ECOA__uint32(ECOA__uint32 data, unsigned char **bufferptr)
{
#ifdef LITTLE_ENDIAN
   unsigned char *srcPtr = (unsigned char *)&data;
   unsigned char *destPtr = (unsigned char *)*bufferptr;
   destPtr[0] = srcPtr[3];
   destPtr[1] = srcPtr[2];
   destPtr[2] = srcPtr[1];
   destPtr[3] = srcPtr[0];
#else
   memcpy( *bufferptr, &data, 4);
#endif
   *bufferptr += 4;

}

#if defined(ECOA_64BIT_SUPPORT)
void ELI_SerializeOut::serialise_ECOA__uint64(ECOA__uint64 data, unsigned char **bufferptr)
{
#ifdef LITTLE_ENDIAN
   unsigned char *srcPtr = (unsigned char *)&data;
   unsigned char *destPtr = (unsigned char *)*bufferptr;
   destPtr[0] = srcPtr[7];
   destPtr[1] = srcPtr[6];
   destPtr[2] = srcPtr[5];
   destPtr[3] = srcPtr[4];
   destPtr[4] = srcPtr[3];
   destPtr[5] = srcPtr[2];
   destPtr[6] = srcPtr[1];
   destPtr[7] = srcPtr[0];
#else
   memcpy( *bufferptr, &data, 8);
#endif
   *bufferptr += 8;

}

#endif
void ELI_SerializeOut::serialise_ECOA__float32(ECOA__float32 data, unsigned char **bufferptr)
{
#ifdef LITTLE_ENDIAN
   unsigned char *srcPtr = (unsigned char *)&data;
   unsigned char *destPtr = (unsigned char *)*bufferptr;
   destPtr[0] = srcPtr[3];
   destPtr[1] = srcPtr[2];
   destPtr[2] = srcPtr[1];
   destPtr[3] = srcPtr[0];
#else
   memcpy( *bufferptr, &data, 4);
#endif
   *bufferptr += 4;

}

void ELI_SerializeOut::serialise_ECOA__double64(ECOA__double64 data, unsigned char **bufferptr)
{
#ifdef LITTLE_ENDIAN
   unsigned char *srcPtr = (unsigned char *)&data;
   unsigned char *destPtr = (unsigned char *)*bufferptr;
   destPtr[0] = srcPtr[7];
   destPtr[1] = srcPtr[6];
   destPtr[2] = srcPtr[5];
   destPtr[3] = srcPtr[4];
   destPtr[4] = srcPtr[3];
   destPtr[5] = srcPtr[2];
   destPtr[6] = srcPtr[1];
   destPtr[7] = srcPtr[0];
#else
   memcpy( *bufferptr, &data, 8);
#endif
   *bufferptr += 8;

}
