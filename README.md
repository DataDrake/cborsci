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

### GNU LESSER GENERAL PUBLIC LICENSE

Version 2.1, February 1999

    Copyright (C) 1991, 1999 Free Software Foundation, Inc.
    51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

    Everyone is permitted to copy and distribute verbatim copies
    of this license document, but changing it is not allowed.
