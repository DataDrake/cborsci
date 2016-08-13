/*
 * structs.h
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

#ifndef __CBORSCI_STRUCTS_H__

#define __CBORSCI_STRUCTS_H__

/* Node struct for build CBOR trees */
typedef struct CBORNode {
    CBORMajorType         type;
    union {
        CBORMajorLength    len;
        CBORExtendedType etype;
        CBORSimpleValue  value;
    }
    union {
        void             *data;
        CBORTagType      ttype;
    }
    struct CBORNode    *parent;
    struct CBORNode  *children;
} CBORNode;

/* Tree struct for representing CBOR trees */
typedef struct {
    CBORNode *root;
    ssize_t    len;
} CBORTree;

/*
 * CBORSCI_NewCBORTree
 *
 * returns an empty CBORTree of length 0
 */
CBORTree* CBORSCI_NewCBORTree();

/*
 * CBORSCI_AddNode
 *
 * Add a new CBORNode to an existing CBORNode
 *
 * returns 0 if OK, another number if an error occurred
 */
CBORSCI_ERROR CBORSCI_AddNode(CBORNode *current, CBORNode *next);

/*
 * CBORSCI_RemoveNode
 *
 * Removes a CBORNode from an existing CBORNode
 *
 * returns 0 if OK, another number if an error occurred
 */
CBORSCI_ERROR CBORSCI_RemoveNode(CBORNode *current, CBORNode *next);

/*
 * CBORSCI_SwapNode
 *
 * Swap a CBORNode with an existing CBORNode
 *
 * returns 0 if OK, another number if an error occurred
 */
CBORSCI_ERROR CBORSCI_RemoveNode(CBORNode *current, CBORNode *replace);

/*
 * CBORSCI_FreeTree
 *
 * Free the memory currently allocated by this CBORTree
 *
 * returns 0 if OK, another number if an error occurred
 */
CBORSCI_ERROR CBORSCI_FreeTree(CBORTree *current);

#endif