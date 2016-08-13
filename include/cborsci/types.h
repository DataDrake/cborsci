/*
 * types.h
 *
 * cborsci - CBOR Stream C Interpreter
 * Copyright (C) 2016 Bryan T. Meyers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __CBORSCI_TYPES_H__

#define __CBORSCI_TYPES_H__

/*
 * CBOR Major Type Definitions
 */

typedef enum {
    UINT        = 0x00, /* Type 0 */
    NINT        = 0x20, /* Type 1 */
    BYTE_STRING = 0x40, /* Type 2 */
    TEST_STRING = 0x60, /* Type 3 */
    ARRAY       = 0x80, /* Type 4 */
    MAP         = 0xA0, /* Type 5 */
    TAP         = 0xC0, /* Type 6 */
    EXTENDED    = 0xE0  /* Type 7 */
} CBORMajorType;

/* Mask for only Major Type bits */
#define CBOR_MAJOR_TYPE_MASK 0xE0

/* Mask for only Major Type Info bits */
#define CBOR_MAJOR_LENGTH_MASK 0x1F

typedef enum {
    BYTE1      = 0x18,
    BYTE2      = 0x19,
    BYTE4      = 0x1A,
    BYTE8      = 0x1B,
    RESERVED28 = 0x1C,
    RESERVED29 = 0x1D,
    RESERVED30 = 0x1E,
    INFINITE   = 0x1F
} CBORMajorLength;

/*
 * CBOR Extended Type Definitions
 */

typedef enum {
    SIMPLEBYTE   = 24,
    FLOAT_HALF   = 25,
    FLOAT_SINGLE = 26,
    FLOAT_DOUBLE = 27,
    UNASSIGNED28 = 28,
    UNASSIGNED29 = 29,
    UNASSIGNED30 = 30,
    BREAK        = 0xFF
} CBORExtendedType;

/*
 * CBOR TAG Definitions
 */

typedef enum {
    DATETIME           = 0, /* RFC3339 / RFC4287 DateTime UTF-8 string */
    EPOCH              = 1, /* Epoch DateTime */
    POSITIVE_BIGNUM    = 2,
    NEGATIVE_BIGNUM    = 3,
    DECIMAL_FRACTION   = 4,
    BIG_FLOAT          = 5,
    /* 6-20 Unasigned */
    EXPECT_BASE64_URL  = 21,
    EXPECT_BASE64      = 22,
    EXPECT_BASE16      = 23,
    CBOR               = 24,
    /* 25-31 Unasigned */
    URI                = 32,
    BASE64_URL         = 33,
    BASE64             = 34,
    REGEXP             = 35,
    MIME               = 36,
    /* 37-55798 Unassigned */
    SELF_DESCRIBE_CBOR = 55799
    /* 55800+ Unassigned */
} CBORTagType;

#endif