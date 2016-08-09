# cborsci
("kah-bor-ski") CBOR Stream C Interpreter

# Purpose

cborsci is a pure C library for I/O operations on streams and mmap-ed files 
containing CBOR data structures. 

## Goals

* Performant operation
* Low memory footprint
* Flexible memory management
* Easy to use API
* Thread safety

## Why write another CBOR library?

Most other libraries focus on the manipulation of files which contain CBOR data.
However, they have not (to date) demonstrated good operation on mmap-ed files
nor do they feature complete support for stream processing. Put simply, we want
to set a standard that pushes ourselves and others to do better, for the good
of developers everywhere.

#License

### GNU LESSER GENERAL PUBLIC LICENSE v2.1

cborsci - CBOR Stream C Interpreter  
Copyright (C) 2016 Bryan T. Meyers

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
